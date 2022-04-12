#include <stdio.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{

    char s[1000000],l[1000000],r[1000000];
    int n,i;
    scanf("%s",s);
    n=strlen(s);
    strcpy(l,s);
    strcpy(r,s);
    
     l[n-1]=s[0];
     
    for(i=0;i<n-1;i++)
       {
           l[i]=s[i+1];
       } 
        
    r[0]=s[n-1];
    
    for(i=1;i<n;i++)
       {
           r[i]=s[i-1];
       } 
   
    if(strcmp(l,r)==0)
        printf("YES\n");
    else
        printf("NO\n");
}
return 0;
}
