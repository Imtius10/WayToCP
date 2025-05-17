#include<bits/stdc++.h>
#include<limits.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
     	int n,x,zero=-1;
     	long temp=0;
        cin>>n;
        for (int i = 0; i < n; ++i)
        {
        	cin>>x;
        	if (x==0)
        	    {
        	    	zero++;
        	    }
        	if (x<0)
        	        {
        	        	temp++;
        	        }        
        	    }
        	    
        	   // cout<<zero<<endl;
        //cout<<temp<<endl;
        if (temp%2!=0 or zero>=0)
        {
        	cout<<"0"<<endl;
        }
        else if (n==1)
        {
        	cout<<1<<"\n"<<(n)<<" 0"<<endl;
        }

        else cout<<1<<"\n"<<(n-1)<<" 0"<<endl;
     }
  return 0;
}