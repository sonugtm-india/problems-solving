#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a[100000],i,temp[100000],d,n;
  int t;
  cin>>t;
  while(t--)
  {
	  cin>>n>>d;
	  for(i=0;i<n;i++)
	  cin>>a[i];
    d=d%n;
       for(i=0;i<d;i++)
       temp[i]=a[n-d+i];
     	for(i=n-1;i>=d;i--)
       {
         a[i]=a[i-d];
       }
       for(i=0;i<d;i++)
       {
         a[i]=temp[i];
       }
	
       for(i=0;i<n;i++)
       cout<<a[i]<<" ";
  
       cout<<endl;
        }
        return 0;
}
