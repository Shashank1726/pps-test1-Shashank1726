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

int cmp(int a, int b, int c)
{
  if((a>=b)&&(a>=c))
  {
    return a;
  }
  else if(b>=c)
  {
    return b;
  }
  else(c>=a);
  {
    return c;
  }
}
void output(int largest)
{
  printf("The largest number out of all inputs is: %d", largest);
}

int main()
{
  printf("Start Of The Program:\n");
  int a, b ,c, largest;
  input(&a, &b, &c);
  largest=cmp(a, b, c);
  output(largest);
  printf("\nEnd Of Program:");
  return 0;
}