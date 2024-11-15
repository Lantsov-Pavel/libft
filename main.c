#include <ctype.h>
#include "libft.h"
#include <stdio.h>

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

int main(void)
{
    test_isalnum("1Abc /");
    test_isalpha("1Abc /");
    test_isdigit("09Abc /");
    test_isprint("!1Ab \t");
    test_isascii("!1Ab \t");
        return (0);
}
