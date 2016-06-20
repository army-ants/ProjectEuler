#include<cstdio>
#include<vector>

int main()
{
  long long LPF;
  long long n=600851475143;
  for(int i=2;i<=n;++i)
    {
      if(n%i==0)
	{
	  n=n/i;
	  LPF=i;
	}
    }
  printf("%lld",LPF);
  return 0;
}
