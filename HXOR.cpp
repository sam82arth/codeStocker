#include <stdio.h>
#include<math.h>

 long long int power(long long int a)
{
  long long  int i,res=0;
    for(i=a;i>=1;i--)
    {
        if ((i&(i-1))==0) 
        { 
            res = i; 
            return res; 
        } 
    }
    return res;
}

int bit(long long int num)
{
    unsigned long long  x=1;
    for(int i=31;i>=0;--i)
    {
        if(num&(x<<i))
        return i;
    }
    return -1;
}

int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    unsigned long long z=1;
	    long long int x,n,a[100000]={-1},i=0,j=0,v=0;
	    scanf("%lld%lld",&n,&x);
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&a[i]);
	    }
	    i=0;
	        while(x)
	        {
	            
	           if(i>=n-1)
	          {
	             break;
	          }
	          
	            if(a[i]==0)
	          {
	              i++;
	              continue;
	          }
	          
	          
	            v=bit(a[i]);
	                
	                if(v!=-1)
	           {
	               for(j=i+1;j<n;j++)
	            {
	                if(a[j]&(z<<v))
	                    break;
	            }
	            
	            if(j>=n)
	            {
	                a[i]=a[i]^(z<<v);
	                a[n-1]=a[n-1]^(z<<v);
	                if(a[i]==0)
	                i++;
	                x--;
	              
	            }
	            else
	            {
	                a[i]=a[i]^(z<<v);
	                a[j]=a[j]^(z<<v);
	                if(a[i]==0)
	                i++;
	                x--;
	            }
	           }
	           
	            else
	           {
	               if(i!=n-1)
	               {
	                 i++;
	               }
	           }
	        }
	        
	        
	        
	        if(n==2&&i==n-1&&x%2==1)
	        {   
	            
	            a[0]=a[0]^(z<<0);
	            a[1]=a[1]^(z<<0);
	        }
	        
	        
	    
	     for(i=0;i<n;i++)
	    {
	        printf("%lld ",a[i]);
	    }
	    printf("\n");
	    
	}
	return 0;
}