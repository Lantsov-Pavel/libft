#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	write(fd, &n, 4);
}
