#include<stdio.h>
#include<string.h>

int main(){
  char s[200], i;

  printf("String: ");
  fgets(s, sizeof(s), stdin);
  s[strlen(s)-1] = '\0';

  printf("Nova string: ");
  for(i=0;i<strlen(s);i++){
    if(i==0 && s[i]>'a' && s[i]<'z'){
      s[i] = s[i] - 32;
    }
    else{
      if(s[i]>'a' && s[i]<'z' && s[i-1]==' '){
        s[i] = s[i] -32;
      }
    }
  }
  printf("\n%s.\n",s);
  return 0;
}