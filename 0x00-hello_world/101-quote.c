#include <unistd.h>
#define MESSAGE "and that piece of art is useful"
#define LENGTH 31

int main(void)
{
    write(STDERR_FILENO, MESSAGE, LENGTH);
    return (1);
}
