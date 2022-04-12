#include <stdio.h>
#include <math.h>
#include<stdlib.h>


int main(void) 
{
  int tc;
  scanf("%d",&tc);
  while(tc--)
  {
      int N,A,B,C,D,P,Q,dis[10000],i,ans=0,walk=0,train=0;
      long long int Y;
      scanf("%d%d%d%d%d%d%d%lld",&N,&A,&B,&C,&D,&P,&Q,&Y);
      
      for(i=1;i<=N;i++)
      {
          scanf("%d",&dis[i]);
      }
      
      walk= abs((dis[B]-dis[A]))*P;
      
      
      train=Y+Q*abs(dis[D]-dis[C])+P*abs(dis[B]-dis[D]);
      
      
      ans=walk;
      
            if(abs(dis[C]-dis[A])*P>Y)
            ans=walk;
            else
            if(train<walk)
            ans=train;
            
        
      printf("%d\n",ans);
  }
	return 0;
}

