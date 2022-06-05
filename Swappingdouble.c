#include<stdio.h>
int main() {
  double n1, n2, n3;
  printf("Enter first number: ");
  scanf("%lf", &n1);
  printf("Enter second number: ");
  scanf("%lf", &n2);
  n3 = n1;
  n1 = n2;
  n2 = n3;
  printf("\nAfter swapping, first number = %.2lf\n", n1);
  printf("After swapping, second number = %.2lf", n3);
  return 0;
}
