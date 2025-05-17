#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
#define M  1000000007
using namespace std;
  int countGoodNumbers(long long n) {
   int evenP,primeP,ans1=1,ans2=1,even=5,prm=4;
    
   
    if (n&1) {
      evenP=(n/2)+1;
      primeP=(n/2);
    }
    else {
      primeP=n/2;
      evenP=n/2;
    }
    while(evenP){
      if (evenP&1)
      {
        ans1=(even*1LL*ans1)%M;
      }
      else even=(even*1LL*even)%M;
      evenP>>=1;
    }
      while(primeP){
      if (primeP&1)
      {
        ans2=(prm*1LL*ans2)%M;
      }
      else prm=(prm*1LL*prm)%M;
      primeP>>=1;
    }
   // cout<<ans1<<" "<<ans2<<nl;
    int ans=((ans1*ans2)%M);
   return ans;
      
    }

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long t;
  cin>>t;
  cout<<countGoodNumbers(t);
  return 0;
}