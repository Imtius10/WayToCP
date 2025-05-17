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
       int n,temp=0,pos;
       cin>>n;
       int ar[n];
       for (int i = 0; i < n; ++i)
       {
         cin>>ar[i];
         temp=max(temp,ar[i]);
       }
       for (int i = 0; i < n; ++i)
       {
         if (temp==ar[i])
         {
           pos=i;
         }
       }
        for (int i = 0; i < n; ++i)
       {
         if (temp==ar[i] and i%2==0)
         {
           pos=i;
         }
       }
       if (n%2==0)
       {
         cout<<temp+(n/2)<<endl;
       }
       else if (pos%2==0)
       {
         cout<<temp+((n+1)/2)<<endl;
       }
       else  {
        cout<<temp+n/2<<endl;
      }
       
     }
  return 0;
}