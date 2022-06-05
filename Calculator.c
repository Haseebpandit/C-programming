// Calculator
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1;
    double n2;
    char op;
    printf("Enter a number: ");
    scanf("%lf", &n1);
    printf("Enter operator :");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &n2);

    if(op == '+'){
        printf("%f", n1 + n2);
    }  else if(op == '-'){
       printf("%f", n1-n2);
       } else if(op == '/'){
       printf("%f", n1/n2);
       } else if (op == '*'){
       printf("%f", n1*n2);
       } else {
       printf("Invaild operator.");
       }


    return 0;
}
