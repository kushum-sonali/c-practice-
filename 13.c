#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,root1,root2,d;
printf("enter three number");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d>=0){
root1=(-b+sqrt(d))/2*a;
root2=(-b-sqrt(d))/2*a;
printf("%f %f",root1,root2);
}
else{
    printf("roots not define");
}
return 0;
}