#include<stdio.h>
int main()
{
char a;
printf("enter a char");
scanf("%c",&a);
if(a>=65&&a<=121){
    printf("alphabate");
}
else{
    printf("no alphabate");
}
return 0;
}