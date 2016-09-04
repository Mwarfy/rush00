/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 15:55:03 by mtranchi          #+#    #+#             */
/*   Updated: 2016/09/04 17:02:19 by mtranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void colle(int x, int y);
void first_line(int y);
void middle_line(int x, int y);
void last_line(int y);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void colle(int x, int y)
{
	if(x <= 0 || y <= 0)
		ft_putchar(' ');
	else if(x >= 1)
		first_line(y);
	else if(x >= 3)
		middle_line(x, y);
	else if(x >= 2)
		last_line(y);
}

void first_line(int y)
{
	int first_column;

	first_column = y - 2;
	if (y >= 1)
	{
		ft_putchar('A');
		if (y == 2)
			ft_putchar('A');
		else if(y >= 3)
		{
			while (first_column > 0)
			{
				ft_putchar('B');
				first_column--;
			}
			ft_putchar('A');
		}
	}
	ft_putchar('\n');
}

void middle_line(int x, int y)
{
	int middle_number_line;
	int middle_column;
	int init;

	middle_number_line = x - 2;
	middle_column = y - 2;
	init = middle_column;
	
	while (middle_number_line > 0)
	{
		if (y >= 1)
		{
			ft_putchar('B');		
		}
		else if (y == 2)
		{
			ft_putchar('B');
		}
		else if ( y >= 3)
		{
			while (middle_column > 0)
			{
				ft_putchar(' ');
				middle_column--;
			}
			ft_putchar('B');
			middle_column = init;
			ft_putchar('\n');
		}
	}
}

void last_line(int y)
{
	int last_column;

	last_column = y - 2;

	if (y >= 1)
	{
		ft_putchar('C');
	}
	else if (y == 2)
	{
		ft_putchar('C');
	}
	else if (y >= 3)
	{
		while (last_column > 0)
		{
			ft_putchar('B');
			last_column --;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

int main()
{
	colle(3, 10);
	return (0);
}
