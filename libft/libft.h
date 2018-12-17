/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averemiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 13:12:52 by averemiy          #+#    #+#             */
/*   Updated: 2018/04/05 15:10:57 by averemiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_factorial(int nb);
void				ft_swap(int *a, int *b);
char				*ft_reverse(char *s);
int					ft_abs(int i);
int					ft_pow(int i, int pow);
int					ft_atoi(const char *st);
void				ft_bzero(void *s, size_t n);
size_t				ft_strlen(const char *s);
void				*ft_memset(void *arr, int smth, size_t l);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strdup(char *src);
char				*ft_strncat(char *str1, const char *str2, size_t n);
char				*ft_strncpy(char *res, const char *from, int l);
void				*ft_memcpy(void *s1, const void *s2, size_t l);
char				*ft_strcpy(char *res, const char *from);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char*s, int sm);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t l);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_isalpha(int i);
int					ft_isdigit(int i);
int					ft_isalnum(int i);
int					ft_isascii(int i);
int					ft_isprint(int i);
int					ft_toupper(int i);
int					ft_tolower(int i);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *d, const void *s, size_t l);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t l);
char				*ft_strnew(size_t size);
void				ft_strdel(char **a);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
size_t				ft_strlcat(char *dst, const char *str, size_t l);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strtrim(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_itoa(int n);
char				**ft_strsplit(char const *s, char c);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **a, void (*d)(void *, size_t));
void				ft_lstadd(t_list **a, t_list *n);
void				ft_lstiter(t_list *l, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *l1, t_list *(*f)(t_list *elem));

#endif
