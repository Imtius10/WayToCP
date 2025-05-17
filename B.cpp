#include<bits/stdc++.h>
#include<algorithm>
#include<limits.h>
#include <cmath>
#include <map>
//#define int long long
#define nl "\n"
#define pb push_back
using namespace std;


#define ull unsigned long long int


int main()
{
	  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
    int N,i=0;
    cin>>N;
    vector<ull>ar;
     ull B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ull c = pow(10, cnt);
        ar[i]= rem * c;
        N /= 2;
        i++;
        cnt++;
    }
    reverse(ar.begin(),ar.end());
    for (int i = 0; i < ar.size(); ++i)
    {
    	cout<<ar[i]<<" ";
    }
cout<<endl;
}
    return 0;
}