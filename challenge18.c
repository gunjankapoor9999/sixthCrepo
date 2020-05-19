#include<stdio.h>
#include<conio.h>
int main()
{
int n,count=0;
printf("enter a number");
scanf("%d",&n);
while(n>0){
   count=count+1;

  n/=10;
      }
        printf("no. of digits is %d\n",count);
return 0;
}
