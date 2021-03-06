#include "libft.h"
#include "limits.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	unsigned int	nbr;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] != '\0' && (ft_isspace(str[i])))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		sign = -1;
		i++;
	} else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (sign * nbr);

}
// From man isspace
// ``\t''``\n''``\v''``\f''``\r''`` ''
// (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r'))
	// if (*str == "-2147483648")
	// 	return (-2147483648);