#include<stdio.h>

void input(int *a, int *b, int *c)
{
    printf("Enter the first number: ");
    scanf("%d", a);
    printf("Enter the second number: ");
    scanf("%d", b);
    printf("Enter the third number: ");
    scanf("%d", c);
}

void cmp(int a, int b, int c, int *large)
{
    if(a>b)
    {
      if(a>c)
      {
        *large = a;
      }
      else
      {
        *large = c;
      }
    }
    else
    {
      if(b>c)
      {
        *large = b;
      }
      else
      {
        *large = c;
      }
    }
}
void output(int large)
{
    printf("The largest is: %d\n", large);
}

int main()
{
  int a, b, c, large;
  input(&a, &b, &c);
  cmp(a, b, c, &large);
  output(large);
  return 0;
}