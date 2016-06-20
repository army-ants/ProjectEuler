#include<cstdio>

int main()
{
  long int n=100;
  n=n*n*(n+1)*(n+1)/4-n*(n+1)(2*n+1)/6;
  printf("%ld",&n);
  return 0;
}
