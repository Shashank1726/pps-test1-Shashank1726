#include<stdio.h>
 struct Complex
{
  int realPart,imaginaryPart;
};
main()
{
 int n,i;
 printf("Enter number of Complex number to be added\n");
 scanf("%d",&n);
 Complex c[n],total;
 total.realPart=0;
 total.imaginaryPart=0;
 for(i=0;i<n;i++)
 {
  printf("Enter real part of %d number\n",i+1);
  scanf("%d",&c[i].realPart);
  printf("Enter imaginary part of %d number\n",i+1);
  scanf("%d",&c[i].imaginaryPart);
  total.realPart+=c[i].realPart;
  total.imaginaryPart+=c[i].imaginaryPart;
 }
 
 if(total.imaginaryPart>=0)
     printf("%d+%di\n",total.realPart,total.imaginaryPart);
 else
     printf("%d%di\n",total.realPart,total.imaginaryPart);
 
 
}

