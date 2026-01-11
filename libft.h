#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

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

#endif
