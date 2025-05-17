#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
     while(t--){
        int a,b,c; cin>>a>>b>>c;
        int temp;

        if ((a+b+c)%3==0)
        {
        	temp=(a+b+c)/3;
        	if (temp>=b)
        	{
        		cout<<"YES"<<nl;
        	}
        	else cout<<"NO"<<nl;
        }
        else cout<<"NO"<<nl;
     }
  return 0;
}