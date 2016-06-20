#include<cstdio>

int main()
{
  int a=1;
  int b=2;
  int sum=0;
  while(b<=4000000&&a<=4000000)
    {
      if(a%2==0)
	sum+=a;
      else if(b%2==0)
	sum+=b;
      a=a+b;
      b=b+a;
    }
  printf("%d",sum);
  return 0;
}
