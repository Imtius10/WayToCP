#include <bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long root = sqrtl(n); 
       // cout<<root<<nl;
        if ((root*root)>=n)
        {
        	cout<<root-1<<nl;
        }
        else if ((root*root)<n)
        {
        cout<<root<<nl;

        }
    }
    return 0;
}
