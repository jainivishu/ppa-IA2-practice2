#include<stdio.h>
int input()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
int gcd(int a,int b)
{
  int k,i;
  for(i=1;i<=a&&i<=b;i++)
    {
      if(a%i==0&&b%i==0)
        k=i;
    }
  return k;
}
void output(int a,int b,int gcd)
{
  printf("the gcd of %d,%d is %d ",a,b,gcd);
}
int main()
{
  int a,b,x;
  a=input();
  b=input();
  x=gcd(a,b);
  output(a,b,x);
  return 0;
}