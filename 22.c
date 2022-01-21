#include<stdio.h>
int main()
{
int a,b,max,min;
printf("enter a number");
scanf("%d%d",&a,&b);
if(a>b){
    max=a;
    min=b;
}
else{
    max=b;
    min=a;
}
 if((max/a==0)&&(max/b==0)){
      printf("LcM of number %d",max);}
else{
printf("%d",max*min);
}
return 0;
}