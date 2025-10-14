#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typdef struct s_list
{
	void		*content;
	struct s_list	*next;
}	t_list;

int	atoi(const char *str);
void    *ft_bzero(void *s, int n);
void	*ft_calloc(size_t ntimes, size_t size);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     check_sign(int n);
int     ft_num_size(int n);
void    num_to_char(char *num, int n, int pos);
char    *ft_itoa(int n);
void    *ft_memchr(const void *str, int c, size_t n);
int     ft_memcmp(const void *str1, const void *str2, size_t n);
void    *ft_memcpy(void *target, void *source, int n);
void    *ft_memmove(void *target, void *source, int n);
void    *ft_memset(void *c, int b, int size);
int     ft_count(char const *s, char c);
void    ft_words(char **arr, char const *s, char c);
char    **ft_split(char const *s, char c);
char    *ft_strchr(const char *str, int c);
char    *ft_strdup(const char *string);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
char    *ft_strjoin(char const *s1, char const *s2);
size_t  strlcat(char *dst, char *src, size_t size);
size_t  ft_strlcpy(char *dest, char *src, int size);
int     ft_strlen(char *c);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int     ft_strncmp(const char *str1, const char *str2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t n);
char    *ft_strrchr(const char *str, int c);
static int      is_in_set(char c, const char *set);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int     ft_tolower(int ch);
int     ft_toupper(int ch);
#endif
