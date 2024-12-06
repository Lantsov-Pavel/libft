#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int ft_isalnum(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isprint(int c);
int ft_isascii(int c);
int	ft_atoi(const char *str);
size_t ft_strlen(char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);

#endif