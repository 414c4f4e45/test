#include <stdio.h>
int fib(int i){
  if (i==0 ||i==1){
    return i;
    }
  else{
    return fib(i-1)+fib(i-2);
  }
}
int main(void) {
  int a;
  printf("Enter a number:");
  scanf("%d",&a);
  for(int i=0;i<a;i++){
      printf("%d  ",fib(i));
  }
    
}
//hello there