/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbaudron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:53:21 by vbaudron          #+#    #+#             */
/*   Updated: 2017/10/17 15:07:22 by vbaudron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>

void			ft_putchar(char c);
void			ft_putstr(const char *s);
size_t			ft_strlen(const char *s);
void			ft_putnbr(int n);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strdup(const char *s1);
char			*ft_strncpy(char *dst, const char *src, size_t len);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putendl(char const *s);
void			ft_putendl_2(char **s, int len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
intmax_t		ft_atoimax_t(const char *str);
char			*ft_strstr(const char *big, const char *little);
void			ft_strclr(char *s);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strnew(size_t size);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			ft_striter(char *s, void (*f)(char *));
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_memdel(void **p);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strnequ(char const *s1, char const *s2, size_t n);
int				ft_strequ(char const *s1, char const *s2);
char			*ft_strsub(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int n);
void			*ft_memalloc(size_t size);
void			ft_strdel(char **as);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *b, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstiter(t_list *lst, void(*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
int				ft_ito_oct(int nb);
int				ft_power(int nb, int pow);
void			ft_putwchar(wchar_t str);
void			ft_putnwstr(wchar_t *str, size_t len);
char			*ft_strjoin_free(char *s1, char *s2);
char			*ft_stradd_c_end(char *s, char c);
void			ft_free_str2(char ***str, int len);
#endif
