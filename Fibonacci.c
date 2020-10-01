#include <stdio.h>

int main(){
  int n,a=0,b=1,tmp=1;
  printf("Ingrese el valor de fibonacci que se desea obtener: ");
  scanf("%i",&n);
  for(int i=0;i<n;i++){
    printf("%i,",a );
    a = tmp;
    tmp = b;
    b = tmp + a;
  }
}
