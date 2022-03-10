/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 04:52:05 by stunca            #+#    #+#             */
/*   Updated: 2022/02/16 04:53:08 by stunca           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
 char    my_func(unsigned int i, char str)
 {
     printf("My inner function : index = %d and %c\n",i,str);
     return (str - 32);
 }

 int main()
 {
     char    str[10]= "hello";
     printf("Th result is %s\n", str);
     char *result = ft_strmapi(str,my_func);
     printf("The result is %s\n", result);
 }
 
 */
