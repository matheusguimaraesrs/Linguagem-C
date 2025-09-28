#include <stdio.h>

int somaArray (int array[], int div){
    int soma = 0;
    int i = 0;
    int j = 9;
    while (i <= 9)
    {
        soma = array[i] + array[j];
        if (!(soma % div == 0))
            return (0);    
        i++;
        j--;
    }
    return (1);
}

int main(){
    int num[] = {1, 2, 3, 4, 5, 10, 6, 7, 8, 9};
    int div = 5;
    int result;

    result = somaArray(num, div);
    if (result == 1)
        printf ("True");
    else
        printf ("false");
}