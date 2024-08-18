#include <stdio.h> //main liberary
#include <stdbool.h> // for boolean
/*=== Calculator App with C ==== 
  num1 + num2 = result | 
  What we need from the user ? |
    # num1 | 
    # num2 | 
    # operation (+ | - | * | / | %) |*/
void main()
{
int a , b ;
 
char op;
int result ;


printf("enter number 1 : ");
scanf("%i" ,&a);
printf("Enter operation (+ | - | * | / | %%):");
scanf("%s" ,&op);
printf("enter num 2 :");
scanf("%i" ,&b);


if(op == '+')
{
    printf("value is = %d \n", a+b , result);  
}
else if(op == '-')
{
    printf("value is = %d \n", a-b , result);  
}
else if(op == '*')
{
    printf("value is = %d \n", a*b , result);  
}
else if(op == '/')
{
    printf("value is = %d \n", a/b , result);  
}
else if (op == '%')
{
    printf("value is = %d \n", a%b , result);  
}
else
{
    printf("invalid operation !");  
}
}
