// #include<stdio.h>
// #include<math.h>

// int  main(){
//   float a,b,c,delta,raiz_maior,raiz_menor;
//   printf("Informe o valor de a: ");
//   scanf("%f",&a);
//   printf("b: ");
//   scanf("%f",&b);
//   printf("c: ");
//   scanf("%f",&c);

//   delta=(b*b)-(4*a*c);
//   raiz_maior = (-b+sqrt(delta))/(2*a);
//   raiz_menor = (-b-sqrt(delta))/(2*a);

//   if(a==0){
//     printf("A equação não é do segundo grau. \n");
//   }
//   else if(delta==0){
//     printf("A equação possui uma raiz real que é %f. \n",-b/2*a);
//   }
//   else if(delta<0){
//     printf("A equação não possui raízes. \n");
//   }
//   else{
//     printf("A equação possui duas raízes: %.2f e %.2f \n",raiz_maior,raiz_menor);
//   }
//   return 0;
// }





#include <stdio.h>
#include <math.h>

int main(){
  float a,b,c;
  float x1,x2;
  float delta;
  float r1,r2;

  printf("A: ");
  scanf("%f",&a);
  printf("B: ");
  scanf("%f",&b);
  printf("C: ");
  scanf("%f",&c);

  delta = b*b - 4*a*c;

  if(delta<0)
    printf("Não existem raízes reais.\n");
  else if(delta==0){
        r1 = (-b+sqrt(delta))/(2*a);
        printf("Delta=0. Equação possui apenas uma raiz.\n");
        printf("R = %.2f\n",r1);
    }
    else{
      r1 =  (-b+sqrt(delta))/(2*a);
      r2 =  (-b-sqrt(delta))/(2*a);
      printf("R1 = %.2f\n",r1);
      printf("R2 = %.2f\n",r2);
    }
  
}