#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[200],i,j;
int temp=0,x,m=0;
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    j=2;
    arr[0]=1;
    while(j<=n)
    {
    for(i=0;i<=m;i++)
    {
        x=arr[i]*j+temp;
        arr[i]=x%10;
        temp=x/10;
    }
    while(temp>0)
    {
        arr[++m]=temp%10;
        temp/=10;
    }
    j++;
    }
    for(i=m;i>=0;i--)
    {
        cout<<arr[i];
    }
    cout<<endl;
    m=0;

}
return 0;
}
