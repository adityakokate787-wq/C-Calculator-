#include<stdio.h>
int main()
{
  int a,b;
  char op;
  printf("Enter your first number : ");
  scanf("%d",&a);
  printf("Enter second number : ");
  scanf("%d",&b);
  printf("Enter operator (+,-,*,/,%) : ");
  scanf(" %c",&op);
  switch(op)
    {
      case'+':
        printf("%d",a+b);
        break;
      case'-':
        printf("%d",a-b);
        break;
      case'*':
        printf("%d",a*b);
        break;
      case'/':
        if(b!=0)
          printf("%d",a/b);
        else
          printf("Not Defined");
        break;
      case'%':
        if(b!=0)
          printf("%d",a%b);
        else
          printf("Error");
        break;
      default:
        printf("operator dosnt exist");
    }
  return 0;
}
