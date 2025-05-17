#include <bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        vector<pair<int, int>> vp;
        vp.pb({1, 6});
        vp.pb({2, 4});
        vp.pb({3, 6});
        vp.pb({4, 6});
        
        // Sort by the second element of the pair
        sort(vp.begin(), vp.end(), [](pair<int, int> &a, pair<int, int> &b) {
            return a.second < b.second;
        });
         cout<<vp[3].second;
        // for (auto &v : vp) {
        //     cout << v.first << " " << v.second << nl;
        // }
    }
    return 0;
}
