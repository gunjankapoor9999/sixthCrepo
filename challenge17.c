#include<stdio.h>
#include<conio.h>
int main()
{
int n,i=1;
printf("enter a number");
scanf("%d",&n);
while(i<=10){
  printf("%d times %d is %d\n",n,i,n*i);
  i+=1;
      }

return 0;
}
