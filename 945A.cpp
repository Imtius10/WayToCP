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
     int a,b,c;
        cin >> a >> b >> c;
        if((a+b+c)%2==1) cout << "-1" << endl;
        else if(a+b<=c) cout << a+b << endl;
        else cout << (a+b+c)/2 << endl;
     }
     
  return 0;
}