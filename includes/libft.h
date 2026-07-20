/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyrina <dyrina@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:56:24 by sming-zh          #+#    #+#             */
/*   Updated: 2025/12/29 20:06:39 by dyrina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>

// FT_PRINTF
int		ft_printf(const char *str, ...);
int		ft_printf_fd(int fd, const char *str, ...);

// MEMORY
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *ptr, int c, size_t size);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memset(void *ptr, int c, size_t size);

// STRARRAY
char	**ft_strarray_add(char ***arr, const char *str);
char	**ft_strarray_dup(const char **arr);
void	ft_strarray_free(char **arr);
char	*ft_strarray_join(const char **strs);
char	*ft_strarray_join_c(const char **strs, int c);
char	*ft_strarray_last(const char **arr);
int		ft_strarray_print(const char **arr);
size_t	ft_strarray_size(const char **array);

int		ft_atoi(const char *str);
long	ft_atol(const char *str);
void	ft_bzero(void *ptr, size_t size);
int		ft_charcount(const char *str, unsigned char c);
char	*ft_convert_base(unsigned long n, const char *base);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
char	*ft_itoa(int n);
int		ft_numlen(long l);
ssize_t	ft_putchar_fd(int fd, char c);
ssize_t	ft_putchar_n_fd(int fd, char c, int n);
ssize_t	ft_putendl_fd(int fd, const char *str);
int		ft_putnbr_base(int fd, unsigned long num, const char *base);
ssize_t	ft_putnbr_fd(int fd, long n);
ssize_t	ft_putstr_fd(int fd, const char *str);
char	**ft_split(const char *str, char c);
char	*ft_strchr(const char *str, int c);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_strcount(const char *str, const char *sub);
char	*ft_strdup(const char *str);
int		ft_strisnum(const char *str);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(const char *head, const char *tail);
char	*ft_strjoin_deli(const char *str1, const char *str2, const char *deli);
char	*ft_strjoin_free(char *head, const char *tail);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int c);
int		ft_strrcmp(const char *str, const char *suffix);
char	*ft_strrstr(const char *haystack, const char *needle);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strtrim(const char *str, const char *set);
char	*ft_substr(const char *str, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*get_next_line(int fd);

#endif