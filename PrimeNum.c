#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,flag=1;
    printf("enter your number: ");
    scanf("%d",&n);
    for (i=2; i<=n/2; i++){
    if (n%i==0){
        flag=0;
    }
    }
    if (flag==1){
        printf("Entered Number is a prime number ");
    }
    else {
            printf("Entered Number is not a prime number ");

    }
    return 0;
}
