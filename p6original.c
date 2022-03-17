#include<stdio.h>
void input_string(char*a)
{
  printf("enter the string");
  scanf("%s",a);
}
int str_reverse(char*a)
{
  int i,reverse=0;
  for(i=0;a[i]!='\0';i++)
    {
      reverse++;
    }
  return reverse;
  
}
void output(char*a,char*reverse)
{
  printf("the reverse of string is:");
for(int i=reverse-1;a[i]!='\0';i--)
  {
    printf("%c",a[i]);
  }
  
}
int main()
{
  int reverse;
  char a[100];
  input_string(a);
  reverse=str_reverse(a);
  output(a,reverse);
  return 0;
}