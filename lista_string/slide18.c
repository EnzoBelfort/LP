#include <stdio.h>
#include <string.h>

int main() {
    char A[200], B[200], C[200], result[400];
    int i, j, k, found;

    printf("Texto: ");
    fgets(A, sizeof(A), stdin);
    A[strlen(A) - 1] = '\0';

    printf("Palavra ou frase para substituir: ");
    fgets(B, sizeof(B), stdin);
    B[strlen(B) - 1] = '\0';

    while (strlen(B) > strlen(A)) {
        printf("Palavra ou frase inválida.\n");
        printf("Palavra ou frase para substituir: ");
        fgets(B, sizeof(B), stdin);
        B[strlen(B) - 1] = '\0';
    }

    printf("Substituto: ");
    fgets(C, sizeof(C), stdin);
    C[strlen(C) - 1] = '\0';

    i = 0;
    while (A[i] != '\0') {
        found = 0;

        // Verifica se a substring B é encontrada a partir da posição atual em A
        if (A[i] == B[0]) {
            j = 0;
            k = i;

            while (A[k] == B[j] && B[j] != '\0') {
                k++;
                j++;
            }

            if (B[j] == '\0') {
                // Substitui B por C na nova string
                strcat(result, C);
                found = 1;

                // Atualiza a posição atual em A
                i = k - 1;
            }
        }

        // Se não foi encontrada uma ocorrência de B, adiciona o caractere atual de A na nova string
        if (found==0) {
            char temp[2] = {A[i], '\0'};
            strcat(result, temp);
        }

        i++;
    }

    printf("\nNovo texto: %s\n", result);

    return 0;
}
