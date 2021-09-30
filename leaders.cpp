#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++)
  cin>>A[i];
  
for(int i=0;i<n;i++) 
    { 
        int j; 
        for(j=i+1;j<n;j++) 
        { 
            if(A[i]<A[j]) 
                break; 
        }     
        if(j==n)
          cout<<A[i]<<" "; 
          cout<<A[i+1]<<" ";
    }
  return 0;
}
