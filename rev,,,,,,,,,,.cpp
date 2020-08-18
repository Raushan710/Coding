#include<iostream>
using namespace std;
int main()
{
	int n,m,rem,i,temp,reverse_num=0,num=0;
	cin>>n;
	cin>>m;
	for(i=n;i<=m;i++)
	{
	  num=i;
      temp=i;
      reverse_num=0;
      while(temp!=0)
	  {
         rem=temp%10;
         temp=temp/10;
         reverse_num=reverse_num*10+rem;
      }
      if(num==reverse_num)
        cout<<num<<" ";
   }
	return 0;
}
