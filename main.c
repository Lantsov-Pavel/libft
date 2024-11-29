#include <ctype.h>
#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

void test_isalnum(char *str)
{
    int i = 0;
    printf ("Test of isalnum()\n");
    printf ("%s\n", str);
    while(str[i] != '\0')
    {    
        printf( "ft_isalnum(%c) = %d\n",str[i], ft_isalnum(str[i]));
        printf( "isalnum(%c) = %d\n",str[i], isalnum(str[i]));
        printf("\n");
        i++;
    }
}

void test_isdigit(char *str)
{
    int i = 0;
    printf ("Test of isdigit()\n");
    printf ("%s\n", str);
    while(str[i] != '\0')
    {        
        printf( "ft_isdigit(%c) = %d\n",str[i], ft_isdigit(str[i]));
        printf( "isdigit(%c) = %d\n", str[i], isdigit(str[i]));
        printf("\n");
        i++;
    }
}

void test_isalpha(char *str)
{
    int i = 0;
    printf ("%s\n", str);
    while(str[i] != '\0')
    {
        printf( "ft_isalpha(%c) = %d\n",str[i], ft_isalpha(str[i]));
        printf( "isalpha(%c) = %d\n", str[i], isalpha(str[i]));
        printf("\n");
        i++;
    }
}
void test_isprint(char *str)
{
    int i = 0;
    printf ("%s\n", str);
    while(str[i] != '\0')
    {
        printf( "ft_isprint(%c) = %d\n",str[i], ft_isprint(str[i]));
        printf( "isprint(%c) = %d\n", str[i], isprint(str[i]));
        printf("\n");
        i++;
    }
}

void test_isascii(char *str)
{
    int i = 0;
    printf ("%s\n", str);
    while(str[i] != '\0')
    {
        printf( "ft_isascii(%c) = %d\n",str[i], ft_isascii(str[i]));
        printf( "isascii(%c) = %d\n", str[i], __isascii(str[i]));
        printf("\n");
        i++;
    }
}

void test_strlen(char *str){
        printf( "ft_strlen(%s) = %zu \n", str, ft_strlen(str));
        printf( "strlen(%s) = %zu \n", str, strlen(str));
        printf("\n");
}

void test_strlcat(){
    char dst[20] = "Hello, ";
    char dst2[20] = "Hello, ";
    const char *src = "world!";
    printf( "ft_strlcat(%s) = %zu \n", dst, ft_strlcat(dst, src , 20));
    printf( "strlcat(%s) = %zu \n", dst2, strlcat(dst2, src , 20));
    printf("\n");
}

void test_strncmp(char * str, char * str2, unsigned int n){
    printf( "ft_strncmp(%s, %s, %d) = %d \n", str, str2, n , ft_strncmp(str, str2, n));
    printf( "strncmp(%s, %s, %d) = %d \n", str, str2, n ,strncmp(str, str2 , n));
    printf("\n");
}

void test_strchr_and_strrchr(char * s, int c){
        printf( "%s", strrchr(s, c));
        printf("\n");
        printf( "%s", ft_strrchr(s, c));
        printf("\n");
        printf( "%s", strchr(s, c));
        printf("\n");
        printf( "%s", ft_strchr(s, c));
}

void test_atoi(const char * s){
    printf( "ft_atoi(%s) = %d \n", s,  ft_atoi(s));
    printf( "atoi(%s) = %d \n", s,  atoi(s));
    printf("\n");
}
void test_memmove(void *dest, const void *src, size_t n)
{
    printf( "ft_memmove,(%p, %p, %zu) = %p \n", dest, src, n,  ft_memmove(dest, src, n));
    printf( "memmove,(%p, %p, %zu) = %p \n", dest, src, n,  memmove(dest, src, n));
    printf("\n");
}
void test_memcpy(void *dest, const void *src, size_t n)
{
    printf( "ft_memcpy,(%p, %p, %zu) = %p \n", dest, src, n,  ft_memcpy(dest, src, n));
    printf( "memcpy,(%p, %p, %zu) = %p \n", dest, src, n,  memcpy(dest, src, n));
    printf("\n");
}
void test_memset(void *s, int c, size_t n){
     printf( "ft_memset,(%p, %d, %zu) = %p \n", s, c, n,  ft_memset(s, c, n));
     printf( "%s", s);
     printf( "memset,(%p, %d, %zu) = %p \n", s, c, n,  memset(s, c, n));
}

int main(void)
{
        test_isalnum("1Abc /");
        test_isalpha("1Abc /");
        test_isdigit("09Abc /");
        test_isprint("!1Ab \t");
        test_isascii("!1Abщ \t");

        test_strlen("123456789");
        
        test_strlcat();

        test_strncmp("hello" , "hello", 6);
        test_strncmp("hello" , "hello", 4);
        test_strncmp("hello" , "world", 6);
        test_strncmp("hello" , "world", 4);
        test_strncmp("hello" , "herld", 1);
        test_strncmp("hello" , "herld", 2);
        test_strchr_and_strrchr("qwqwe", 'w');
      
        test_atoi("+12345");
        test_atoi("+-12345");
        test_atoi("-12345");
        test_atoi("+++++++++++12345");
        test_atoi("=12345");
        test_atoi("a12345");
        test_atoi("!12345");
        test_atoi("     -12345");
        test_atoi("\t \t-12345");
        test_atoi("1+2345");
        test_atoi("+123--45");
        test_atoi("+1234-5");
        char dest1[50] = "Hello"; 
        char src1[50] = "World";
        char dest2[50] = "Hello"; 
        char src2[50] = "World";
        char s[50] = "123456789";
        
        test_memmove(dest1, src1, 6);
        test_memcpy(dest2, src2, 6);
        test_memset(s, 48, 5);
        
        return (0);
}