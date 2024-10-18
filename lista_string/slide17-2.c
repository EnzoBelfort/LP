#include <stdio.h>
#include <string.h>

int main() {
    char A[200], B[200], C[400];
    int i, j=0, maior;

    printf("String A: ");
    fgets(A, sizeof(A), stdin);
    A[strlen(A) - 1] = '\0';

    printf("String B: ");
    fgets(B, sizeof(B), stdin);
    B[strlen(B) - 1] = '\0';

    if (strlen(A) > strlen(B)) {
        maior = strlen(A);
    } else {
        maior = strlen(B);
    }

    for(i=0;i<maior;i++){
        if(i<strlen(A)){
            C[j] = A[i];
            j++;
        }
        if(i<strlen(B)){
            C[j] = B[i];
            j++;
        }
    }
    C[j] = '\0';

    printf("\nString C: %s\n", C);
    return 0;
}