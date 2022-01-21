#include<stdio.h>
int main()
{
int n,i;
printf("enter a number");
scanf("%d",&n);
i=1;
while(i<=10){
n*i;
printf("%d\n",n*i);
i++;
}
return 0;
}
