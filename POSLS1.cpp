#include <bits/stdc++.h>
 
using namespace std;


int main() {
  
  int n;
  cin>>n;
  int a[n];
  for(int i{0};i<n;i++){
      cin>>a[i];
  }
  
  int q;
  cin>>q;
  while(q--){
      long long x;
      cin>>x;
      int count {0};
      int j=0;
      long long sum {0};
      for(int i{0};i<n;i++){
          sum = 0;
          j=i;
          while(j<n){
              sum += a[j];
               if(sum==x){
                count++;
            } 
            if(sum>x){
                break;
            }
            
            j++;
          }
      }
       cout<<count<<endl;
  }
     
}