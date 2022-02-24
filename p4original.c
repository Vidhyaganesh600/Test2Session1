#include<stdio.h>
int main()
{
  int n = input();
  int res = find_fibo(n);
  output(n,res);
  return 0;
}
int input()
{
  int n;
  printf("Enter the index of the number in thr fibonacci series: ");
  scanf("%d",&n);
  return n;
}

int find_fibo(int n)
{
  int a = 0,b= 1, c;
  for(int i = 1; i < n; i++)
    {
      c=a+b;
      a=b;
      b=c;
    }
  return a;
  }
void output(int n, int fibo)
{
 printf("The %dth element in the fibonacci series is %d ",n,fibo);
}