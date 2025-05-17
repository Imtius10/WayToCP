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
       int n;
       cin>>n;
       string str;
       cin>>str;
       int ar[500]={0};
       	int fill=0,res=0;;

       for (int i = 0; i < n; ++i)
       {
       fill=str[i]-65;
        ar[fill]++;
       }
      for (int i = 0; i < n; ++i)
      {
        if (ar[i]>=(i+1))
        {
          res++;
        }
        //cout<<ar[i]<<" ";
      }
     cout<<res<<endl;
     }
  return 0;
}