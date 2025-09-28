#include <unistd.h>

int main()
{
    char s;
    int n, i, j;

    s = '*';
    n = 5;
    i = 1;
    while (i <= n)
        {
            j = 1;
            while (j <= i)
            {
                write(1, &s, 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
}