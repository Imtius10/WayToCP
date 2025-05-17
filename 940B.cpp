#include<iostream>
#include<algorithm>
#include<limits.h>
#include <cmath>
#include <map>
#define int long long
#define nl "\n"
#define pb push_back
using namespace std;
int32_t main()
{
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
    cin>>t;
     while(t--){
       int x,y;
       cin>>x>>y;
       int temp=log2(y+1);
       temp=pow(2,temp);
       temp=temp-1;
       if(x==1)
       {
        cout<<y<<endl;
       }
       else if (x>2)
       {
        cout<<temp<<" "<<y-temp<<" ";
       for (int i = 0; i < x-2; ++i)
       {
         cout<<"0"<<" ";
       }
       cout<<endl;
       }
       else cout<<temp<<" "<<y-temp<<endl;
       
     
   }
  return 0;
}