#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size of the array\n");
  scanf("%d",&n);
  return n;
}
void int_array(int n, int a[n])
{
  for(int i=0;i<=n;i++)
    {
      a[i]=i;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
  for(int i=0;i<=n;i++)
    {
      for(int k=2;k<=a[i];k++)//1 2 3 
        {
          if(a[i]%k==0)
          {
            a[i]=0;
          }
        }
    }
}
void out_put(int n, int a[n])
{
  for(int i=2;i<=n;i++)
    {
      if(a[i]!=0)
      {
        printf("%d,",a[i]);
      }
    }
}
int main()
{
  int n=input_array_size();
  int a[n];
  int_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
  return 0;
}