#ifndef	MY_LIB_H
#define	MY_LIB_H

void    ft_putchar(char c);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *c, int fd);

void    ft_putstr(char *str);

void	ft_putnbr_fd(int n, int fd);

void	ft_putendl_fd(char *s, int fd);

size_t	ft_strlen(const char	*str);

size_t	ft_strlcpy(char *dst, const char *src, size_t siz);

char	*ft_strchr (const char *str, int ch);

int		ft_atoi(const char *str);

int		ft_isalpha(int	c);

void	ft_bzero(void* s, size_t n);

int		ft_isdigit(int c);

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

void	*ft_memchr( const void *memptr, int val, size_t num);

int		ft_memcmp(const void *arr1, const void *arr2, size_t n);

void	*ft_memcpy(void * destptr, const void * srcptr, size_t num);

void	*ft_memmove (void *dest, const void *src, size_t n);

void	*ft_memset(void *str, int c, size_t n);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

char	*ft_strnstr(const char	*big, const char *little, size_t len);

char	*ft_strrchr (const char *str, int ch);

int		ft_isprint(int c);

int		ft_isascii(int ch);

int		ft_isalnum(int character);

int		ft_toupper(int character);

int		ft_tolower (int c);

void	*ft_calloc(size_t number, size_t size);

char	*ft_strjoin(char const *s1, char const *s2);

#endif