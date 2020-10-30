#include <stdio.h>

int main() {
int loop,Num;
int prime = 1;

while (printf("Enter Your Number : ") && 
scanf("%d",&Num)){
  if (Num < 0) break;
  if(Num == 1 || Num == 0){
    printf ("%d is not a Prime Number.\n",Num);
    continue;
}
for(loop = 2; loop < Num; loop++){
  if((Num % loop)== 0){
    prime = 0;
  }
}
if(prime == 1){
  printf("%d is is a Prime Number.\n",Num);
  for (int i = 1; i <= 12 ;i++){
   printf("%d * %d = %d\n",Num,i,Num*i);
  }
}
  else if(prime == 0 || Num == 1)
   printf("%d  is not a Prime Number.\n",Num);
  prime = 1;
}
  return 0;
}
