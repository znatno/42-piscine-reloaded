/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 19:13:07 by ibohun            #+#    #+#             */
/*   Updated: 2018/10/25 19:28:51 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int i, char **str)
{
	int j;
	int k;

	j = 1;
	k = 0;
	while (j < i)
	{
		while (str[j][k])
		{
			ft_putchar(str[j][k]);
			k++;
		}
		k = 0;
		ft_putchar('\n');
		j++;
	}
}

int		compare(char *str1, char *str2)
{
	while (*str1 == *str2)
	{
		str1++;
		str2++;
	}
	if (*str1 <= *str2)
		return (0);
	else
		return (1);
}

int		main(int argc, char **argv)
{
	char	*temp;
	int		n;

	n = 1;
	while (n < argc - 1)
	{
		if (compare(argv[n], argv[n + 1]))
		{
			temp = argv[n];
			argv[n] = argv[n + 1];
			argv[n + 1] = temp;
			n = 0;
		}
		n++;
	}
	print(argc, argv);
	return (0);
}
