#include<stdio.h>
int main()
{
int n,i,a=0,b=1,c;
printf("enter a number");
scanf("%d",&n);
i=1;  
while(i<=n){
printf("%d ",a);
c=a+b;
a=b;
b=c;
i++;}
return 0;
}