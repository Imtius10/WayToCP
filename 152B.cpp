#include<bits/stdc++.h>
#include<limits.h>
#define nl "\n"
#define pb push_back
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
      int n,m,k=0; cin>>n>>k;
      vector<int>a(n);
      vector<pair<int,int>>p(n);
        for (auto &x : a) {
      cin >> x;
      x %= k;
      if (!x) x = k;
    }
      vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    stable_sort(ord.begin(), ord.end(), [&](int i, int j) {
      return a[i] > a[j];
    });
    for (auto &x : ord) cout << x + 1 << ' ';
    cout << endl;
     }
  return 0;
}