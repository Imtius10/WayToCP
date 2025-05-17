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
     int Mn=INT_MIN;
     int Mx=INT_MAX;
     vector <int> v;
     int subs=0;
     int n;
     cin>>n;
     for (int i = 0; i < n; ++i)
     {
     	int a,x;
     	cin>>a>>x;
     	if (a==3)
     	{
            v.pb(x);
     	}
     	else if (a==1 )
     	{
     		Mn=max(Mn,x);
     	}
     	else if ( a==2 ){
           Mx=min(Mx,x);
     	}
     }
     for (int i = 0; i < v.size(); ++i)
     {
          if (v[i]>=Mn and v[i]<=Mx)
          {
              // /cout<<v[i]<<" ";
              subs++;
          }
             
         
     }
     cout<<max((Mx-Mn-subs+1),0)<<endl;
     }
  return 0;
}