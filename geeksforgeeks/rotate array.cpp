#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d;
	    vector<int> v,temp;
	    cin>>n>>d;
	    d%=n;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    for(int i=0;i<d;i++)
	       temp.push_back(v[i]);
	       v.erase(v.begin(),v.begin()+d);
        for(int i=0;i<d;i++)
         v.push_back(temp[i]);
	       for(int i=0;i<n;i++)
	       cout<<v.at(i)<<" ";
	   v.clear(),temp.clear();
	    cout<<endl;
	}
	return 0;
}
