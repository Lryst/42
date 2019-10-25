/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:20:40 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:46:59 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>


void    *ft_bzero(void *str, size_t i);
void    *ft_memset(void *s, int c, size_t u);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int i, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(void const *s1, void const *s2, size_t n);
int     ft_memlen(void *s);

char	ft_strlen(char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int     ft_strncmp(const char *s1, const char *s2, int c);
int	    ft_strlcpy(const char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strnstr(const char *s1, const char *s2, size_t len);


int	ft_isalpha(int u);
int	ft_isdigit(int u);
int	ft_isalnum(int u);
int ft_isascii(int u);
int	ft_isprint(int u);
int	ft_toupper(int c);
int	ft_tolower(int c);

int		ft_atoi(const char *str);

char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putnbr(int nb);
void    ft_putchar(char u);
void    ft_putstr(char *str);
char	*ft_strndup(const char *s1, int n);

#endif