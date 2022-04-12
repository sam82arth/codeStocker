#include <stdio.h>


int isprime(int n)
    { 
        
    int  i, flag = 1; 
    for (i = 2; i <= sqrt(n); i++) 
        { 
        if (n % i == 0) 
        { 
            flag = 0; 
            break; 
        } 
        } 
    if(n<=1) 
    flag=0; 
    else if(n==2) 
    flag=1;  
    return flag;
}




int main(void) {
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int n,x=0,j=0,i=1;
	    scanf("%d",&n);
	    x=n;
	    while(n>0)
	    {
	        j=j*10+n%10;
	        n=n/10;
	    }
	    if(j==x&&isprime(x))
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}

