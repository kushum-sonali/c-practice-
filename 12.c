#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c){
    printf("greatest no %d",a);
}
else if(b>=a&&b>=c){
    printf("greatest no %d",b);
}
else if("c>=a&&c>=b"){
    printf("greatest no %d",c);
}
return 0;
}