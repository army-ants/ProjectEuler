#include<iostream>
#include<vector>

int main()
{

  std::vector<bool> Prime(20,1);
  int NUM=1;
  Prime[0]=0;
  Prime[1]=0;
  for(int i=2;i*i<20;i++)
    if(Prime[i])
      {
	for(int j=i*2;j<20;j=j+i)
	    Prime[j]=0;
      }
  for(int i=0;i<20;i++)
    std::cout<<Prime[i]<<"\n";
  for(int i=2;i<20;i++)
    {
      if(Prime[i])
	{
	  NUM=NUM*i;
	  int j=i*i;
	  while(j<20)
	    {
	      NUM=NUM*i;
	      j=j*i;
	    }
	}
    }
  std::cout<<NUM<<"\n";
}
