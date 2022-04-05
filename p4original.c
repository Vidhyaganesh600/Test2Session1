#include<stdio.h>
int input()
{
  int n;
  printf("Enter the index of the number in thr fibonacci series: ");
  scanf("%d",&n);
  return n;
}

int find_fibo(int n)
{
  int a=0,b=1,fibo;
  for(int i = 1; i < n; i++)
    {
      fibo=a+b;
      a=b;
      b=fibo;
    }
  return a;
  }
void output(int n, int fibo)
{
 printf("The %dth element in the fibonacci series is %d ",n,fibo);
}
int main()
{
  int n ,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}