#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = size -1;
	while (i < j)
	{
		count = tab[i];
		tab[i] = tab[j];
		tab[j] = count;
		i++;
		j--;
	}
}

void	ft_putmsg(char *string)
{
	while (*string)
	{
		write(1, string, 1);
		string++;
	}
}

void	ft_putint(int num)
{
	char	c;

	if (num < 0)
	{
		ft_putmsg("-");
		num = -num;
	}
	if (num > 9)
		ft_putint(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

void	ft_put_array(int *array, int size)
{
	int	count;

	count = 0;
	while (count < size)
	{
		if (count == 0)
		{
			ft_putmsg("{");
			ft_putint(array[count]);
			ft_putmsg(", ");
		}
		else if (count == (size - 1))
		{
			ft_putint(array[count]);
			ft_putmsg("}\n");
		}
		else
		{
			ft_putint(array[count]);
			ft_putmsg(", ");
		}
		count++;
	}
}

int	main(void)
{
	int	array[10];
	int	size;
	int	i;

	i = 0;
	size = 10;
	ft_putmsg("Valor do vetor antes:\n");
	while (i < size)
	{
		array[i] = (i + 1);
		i++;
	}
	ft_put_array(&array[0], size);
	ft_rev_int_tab(&array[0], size);
	ft_putmsg("Valor do vetor depois: \n");
	ft_put_array(&array[0], size);
}