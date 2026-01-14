#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isalpha();
int		ft_isdigit();
int		ft_isalnum();
int		ft_isascii();
int		ft_isprint();
int		ft_strlen();
void	*ft_memset();
void	*ft_bzero();
void	*ft_memcpy();
void	*ft_memmove();
char	*ft_strlcpy();
size_t	ft_strlcat();
int		ft_toupper();
int		ft_tolower();
char	*ft_strchr();
char	*ft_strrchr();
int		ft_strncmp();
void	*ft_memchr();
int		ft_memcmp();
char	*ft_strnstr();
int		ft_atoi();
void	*ft_calloc();
char	*ft_strdup();
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);


#endif
