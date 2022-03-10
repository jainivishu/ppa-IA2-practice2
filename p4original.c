#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size of array");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  for(i=0;i<=n;i++)
    {
      printf("enter the numbers");
      scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n,int a[n])
{
  int k,i,sum=0,count;
  for(i=0;i<n;i++)
  {
     count=0;
    for(k=2;k<a[i];k++)
      {
        if(a[i]%k==0)
        count=count+1;
      }
    if(count>2)
    sum=sum+a[i]; 
  } 
   return sum;
}
void output(int sum)
{
  printf("the sum of composite in given set is %d",sum);
}
int main()
{
int n,res,a[n];
n=input_array_size();
input_array(n,a);
res=sum_composite_numbers(n,a);
output(res);
return 0;
  }