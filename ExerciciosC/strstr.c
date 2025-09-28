#include <unistd.h>
#include <stdio.h>

char *my_strstr(const char *palheiro, const char *agulha)
{
    // Se a agulha for uma string vazia, a funcao retorna o palheiro.
    if (*agulha == '\0')
        return (char *)palheiro;

    // O laço de fora percorre o palheiro
    while (*palheiro != '\0')
    {
        const char *h_temp = palheiro; // Ponteiro temporario para o palheiro
        const char *a_temp = agulha; // Ponteiro temporario para a agulha

        // O laço de dentro compara as strings, caractere por caractere
        while (*h_temp == *a_temp && *a_temp != '\0')
        {
            h_temp++; // Avanca no palheiro
            a_temp++; // Avanca na agulha
        }

        // Se o laço interno chegou ao fim da agulha, significa que achamos
        if (*a_temp == '\0')
        {
            // Retorna o ponteiro para o inicio do match no palheiro
            return (char *)palheiro;
        }

        palheiro++; // Avanca para o proximo caractere no palheiro
    }

    return NULL; // Se o laço de fora terminar, a agulha nao foi encontrada
}

int main(void)
{
    const char *palheiro = "Isso e um exemplo de string";
    const char *agulha1 = "exemplo";
    const char *agulha2 = "nao existe";

    char *resultado1 = my_strstr(palheiro, agulha1);
    if (resultado1 != NULL)
        printf("A agulha foi encontrada em: %s\n", resultado1);
    else
        printf("A agulha nao foi encontrada.\n");

    char *resultado2 = my_strstr(palheiro, agulha2);
    if (resultado2 != NULL)
        printf("A agulha foi encontrada em: %s\n", resultado2);
    else
        printf("A agulha nao foi encontrada.\n");
    
    return 0;
}