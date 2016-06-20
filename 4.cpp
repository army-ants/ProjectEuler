#include <cstdio>
#include <algorithm>

int palindrome(int s)
{
  int t=0;
  int q=s;
  while(s>0)
  {
    t=t*10+s%10;
    s=s/10;
  }
  if(t==q)
    return 1;
  else
    return 0;
}
int main()
{
  int PAL=0;
  int n,a,b;
  for(int i=999;i>=900;--i)
    {
      for(int j=990;j>=900;j=j-11)
	{
	  n=i*j;
	  if(palindrome(n))
	    PAL=std::max(PAL,n);
	}
    }
  printf("%d",PAL);
  return 0;
}
  
			
