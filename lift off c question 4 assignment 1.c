#include <stdio.h>
int main()
{
 int a,b,c,x;
 printf("Enter A Number:\n");
 scanf("%d",&a);
 printf("Enter A Number:\n");
 scanf("%d",&b);
 printf(" Enter 1 for Addition \n");
 printf(" Enter 2 for Subtraction \n");
 printf(" Enter 3 for Multiplication \n");
 printf(" Enter 4 for Division \n");
 printf(" Enter 5 for Remainder \n");
 printf("Enter the arithmetic operation to be carried:\n");
 scanf("%d",&c);
 switch (c)
 {
   case 1:
   x=a+b;
   printf("addition of %d and %d is:%d",a,b,x);
   break;
   case 2:
   x=a-b;
    printf("subtraction of %d and %d is:%d",a,b,x);
   break;
   case 3:
   x=a*b; printf("multiplication of %d and %d is:%d",a,b,x);
   break;
   case 4:
   x=a/b;
    printf("division of %d and %d is:%d",a,b,x);
   break;
   case 5:
   x=a%b;
    printf("remainder of %d and %d is:%d",a,b,x);
   break;
   default:
   printf("Invalid operation");
 }
 return 0;
}
