#include<stdio.h>
int main()
{
int a,b,max,min,c;
printf("enter two number");
scanf("%d%d",&a,&b);
if(a>b){
    max=a;
    min=b;
}
else{
    max=b;
    min=a;
}
while(1){
c=max%min;
if(c==0){
printf("hcf of number %d",min);
break;}
    max=min;
    min=c;
}
return 0;
}