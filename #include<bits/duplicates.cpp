#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n],B[n];
    
    for(int i=0;i<n;i++)
    cin>>A[i];
    
    int j=0;
    
    for(int i=0;i<n-1;i++)
    {
    	if(A[i+1]!=A[i])
    	B[j+1]=A[i];
	}
	B[j+1]=A[n-1];
	
	for(int i=0;i<j;i++)
	{
		A[i]=B[i];
     	cout<<A[i];
	}
return 0;
    
}
