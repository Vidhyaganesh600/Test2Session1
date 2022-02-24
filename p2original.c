#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the coordinates of point 1\n");
  scanf("%f %f",x1,y1);
  printf("enter the coordinates of point 2\n");
  scanf("%f %f",x2,y2);
  printf("enter the coordinates of point 3\n");
  scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float a;
  a=x1*(y2-y3)-y1*(x2-x3)+1*(x2*y3-x3*y2);
  return a;
  }
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
  {
    int a;
      if(a!=0)
      {
        printf("the given points form a triangle");
      }
      else
      {
        printf("the given points do not form a triangle\n");
      }
  }
int main()
{
  float a;
  float x1,y1,x2,y2,x3,y3;
  int istriangle;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  a= is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,a);
  return 0;
}