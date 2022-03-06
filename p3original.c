#include<stdio.h>
int input_number()
{
  int n;
  printf("enter n value\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i,count=0;
  for(i=2;i<=n;++i)
  {
    if(n%i==0)
    count ++;
  }
  return count;
}

void output(int n,int count)
{
  if(count>>1)
  printf("THE NUMBER IS COMPOSITE");
  else
  printf(" THE NUMBER IS NOT COMPOSITE");
}
int main()
{
  int n,x;
  n=input_number();
  x=is_composite(n);
  output(n,x);
  return 0;
}