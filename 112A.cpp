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
      long long n; cin>>n;
      if (n%6==0)
      {
      	cout<<(n/6)*15<<nl;
      }
      else if(n%8==0) cout<<(n/8)*20<<nl;
      else if(n%10==0) cout<<(n/10)*25<<nl;
      else{
      	if (n<6)
      	{
      		cout<<15<<nl;
      	}
      	else if (n<9)
      	{
      		cout<<20<<nl;
      	}
      	else if (n<11)
      	{
      	cout<<25<<nl;

      	}
      	else{
      	long long temp=n%6;
      	long long temp1=(n+abs(temp-6))/6;
      	//cout<<temp1<<nl;
      	if (temp==5)
      	{
      		cout<<temp1*15<<nl;
      	}
      	else if (temp<3)
      	{
      		temp1=temp1-2;
      		
      	cout<<(temp1*15)+20<<nl;
      	}
      	 else if(temp>2) {
      		temp1=temp1-2;
            
      	 	cout<<((temp1)*15)+25<<nl;
      	 }
      	// long long temp1=n%8;
      	// long long temp2=n%10;

      	// temp1=(n+abs(temp1-8))/8;
      	// temp2=(n+abs(temp2-10))/10;

      	// cout<<min((temp*15),min((temp1*20),(temp2*25)))<<nl;
      	// //cout<<temp<<" "<<temp1<<" "<<temp2<<nl;
        }
      }
     }
  return 0;
}