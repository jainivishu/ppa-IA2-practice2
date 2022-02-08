#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the base &height");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float*area)
{
  *area=((base*height))/2;
}
void  output(float base,float height,float area)
{
  printf("the area of triangle of  base %f and height %f is %f",base ,height,area);
}
void main()
{
   float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  
}
