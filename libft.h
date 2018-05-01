/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyburgh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 23:44:20 by amyburgh          #+#    #+#             */
/*   Updated: 2018/05/01 15:55:21 by amyburgh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>

/*
 ** ---------- Macros ----------
*/
# define INT_MIN -2147483648
# define INT_MAX 2147483647
# define INT_MIN_STR "-2147483648"
# define INT_MAX_STR "2147483647"
# define TRUE 1
# define FALSE 0

# define ABS(x) (x < 0 ? -x : x)
# define SPACES1(x) (x == ' ' || x == '\t' || x == '\n')
# define SPACES2(x) (x == '\v' || x == '\r' || x == '\f')
# define ALLSPACES(x) (SPACES1(x) || SPACES2(x))
# define IS_UPPER(x) (x >= 65 && x <= 90 ? TRUE : FALSE)
# define IS_LOWER(x) (x >= 97 && x <= 122 ? TRUE : FALSE)
# define IS_DIGIT(x) (x >= 48 && x <= 57 ? TRUE : FALSE)
# define IS_ALPHA(x) ((IS_UPPER(x) || IS_LOWER(x)) ? TRUE : FALSE)
# define IS_ALNUM(x) ((IS_ALPHA(x) || IS_DIGIT(x)) ? TRUE : FALSE)
# define IS_PRINT(x) (x >= 32 && x <= 126 ? TRUE : FALSE)
# define IS_NONPRINT(x) ((x >= 0 && x <= 31) || x == 127 ? TRUE : FALSE)
# define IS_NEG(x) (x < 0 ? TRUE : FALSE)

/*
 ** ---------- Type defs ----------
*/
typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;
/*
 ** ---------- Checks ----------
*/
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
/*
 ** ---------- Convertions ----------
*/
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
/*
 ** ---------- System Writes ----------
*/
void			ft_putchar(char c);
void			ft_putstr(const char *s);
void			ft_putnbr(int n);
void			ft_putendl(char const *s);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
/*
 ** ---------- Memmory ----------
*/
void			*ft_memset(void *b, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
/*
 ** ---------- Strings ----------
*/
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s1);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *s1, const char *s2);
char			*ft_strnstr(const char *s1, const char *s2, size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
/*
 ** ---------- Lists ----------
*/
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list	**alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstaddend(t_list **alst, t_list *new);
//size_t			ft_lstsize(t_list *begin_list);
//void			ft_lstclear(t_list **begin_list);
/*
 ** ---------- My Functions ----------
*/
size_t			ft_wordcount(const char *s);
size_t			ft_digitcount(long long n);
void			ft_swap(int *a, int *b);
char			*ft_strrev(char *str);
char			*ft_strndup(const char *s, size_t n);
#endif
