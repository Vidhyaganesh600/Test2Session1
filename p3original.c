#include<stdio.h>
int input_number()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
  int a;
  for(int i=2;i<n;i++)
    {
      if(n%i==0)
      {
        a=0;
        break;
      }
    }
  return a;
}
void output(int n, int is_prime)
{
  if(n==0 || n==1)
  {
    printf("%d is neither prime nor a composite number: ",n);
  }
  else
  {
    if(is_prime==0)
    {
      printf("%d is not a prime number !!",n);
    }
    else
    {
      printf("%d is a prime number !!!",n);
    }
  }
}

int main()
{
  int n = input_number();
  int res = is_prime(n);
  output(n,res);
  return 0;
}