#include<stdio.h>

int input()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    return a;
}

int add(int a,int b)
{
    int sum;
    sum = a + b;
    return sum;
}

void output(int a,int b,int sum)
{
    printf("sum of %d + %d is %d\n", a, b, sum);
}
int main()
{
  int a, b, sum;
  a = input();
  b = input();
  sum = add(a, b);
  output(a, b, sum);
  return 0;
}