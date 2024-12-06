#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    while (*s)
    {
    write(fd, s, 1);
    s++;
    }
    
}

int main(void)
{
    char s[7] = "sdfdsa";
    ft_putstr_fd(s, 1);
}