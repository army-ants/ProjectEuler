#include<cstdio>

int main()
{
  int sum=0;
  int i=999;
  while(i>=3)
    {
      if(i%3==0||i%5==0)
	sum+=i;
      --i;
    }
  printf("%d",sum);
}
