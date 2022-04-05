#include<stdio.h>
void input_string(char *a,char *b)
{
  printf("enter any string\n");
  scanf("%s",a[]);
  printf("enter the substring\n");
  scanf("%s",b[]);
}
int str_reverse(char *a, char *b)
{
  int i,j;
  for(i=0;a[i]!=0 && b[j]!=0;i++)
    {
      if(a[i]==b[j])
      {
        j++;
      }
      else if(j!=0)
      {
        j=0;
      }
    }
  return i-j;
}
void output(char *string, char *substring, int index)
{
   printf("index of substring in string is %d\n",index);
}
int main()
{
  char a[10],char b[10];
  input_string(a,b);
  str_reverse(a,b);
  int index;
  output(a,b,index);
  return 0;
}