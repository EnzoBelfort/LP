#include <stdio.h>
#include <string.h>

int main() {
  char A[200], B[200], C[400], i, maior;

  printf("String A: ");
  fgets(A, sizeof(A), stdin);
  A[strlen(A) - 1] = '\0';
  maior = strlen(A);

  printf("\nString B: ");
  fgets(B, sizeof(B), stdin);
  B[strlen(B) - 1] = '\0';

  if (strlen(B) > strlen(A)) {
    maior = strlen(B);
  }

  for (i = 0; i < maior * 2; i++) {
    if (i % 2 == 0) {
      C[i] = A[i / 2];
    } else {
      C[i] = B[i / 2];
    }
    printf("%c", C[i]);
  }
  return 0;
}