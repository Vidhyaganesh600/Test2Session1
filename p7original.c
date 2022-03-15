#include<stdio.h>
#include<math.h>
struct _point
{
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line
Point input_Point()
{
  Point p1;
  printf("enter the point coordinates\n");
  scanf("%f%f",&p1.x,&p1.y);
  return p1;
}
Line input_line()
{
  Line 1;
  Point p1,p2;
  p1=input_point();
  p2=input_point();
  l.p1=p1;
  l.p2=p2;
  return l;
}
void find_length(Line *l)
{
  l->distance=sqrt()
}