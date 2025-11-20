#include <stdio.h>
#include <unistd.h>
#include <string.h>

void invert_string(char *str)
{
    char temp;
    int i = 0;
    int j = strlen(str) - 1;

    while (str[i] && i < j)    
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main(void)
{
    char string[] = "uma string";

	printf("%s\n", string);
    invert_string(string);
	printf("%s\n", string);
	return 0;
    
}
