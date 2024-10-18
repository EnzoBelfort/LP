#include <stdio.h>

void naturais(int);

int main() {
  int n;
  printf("N: ");
  scanf("%i", &n);
  naturais(n);
  printf("\n");
  return 0;
}

void naturais(int n) {
  if (n == 0) {
    printf("%i ", n);
    return;
  }
  
  naturais(n - 1);
  printf("%i ", n);
}
