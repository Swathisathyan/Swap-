#include<stdio.h>
main()
{
int a,b;
printf("enter two space seperated integer value:");
scanf("%d %d",&a,&b);
printf("Before swapping \n a=%d,b=%d",a,b\n);
a=a+b;    
b=a-b;   
a=a-b;
printf("After swapping \n a=%d,b=%d",a,b);
}
