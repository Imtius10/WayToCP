#include<bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
        {
            return false;
        }
        else{
     int revers=0;
     int temp=x;
     while(temp!=0){
        int temp1=temp%10;
        revers=revers*10+temp1;
        temp=temp/10;
     }
     
     return x==revers;
 }
    }
    
};
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
     Solution sol;
     int ans=sol.isPalindrome(56);
     cout<<ans<<nl;
     // int n; cin>>n;
     // int ans=isPalindrome(n);
     // if (n<=0)
     // {
     // 	cout<<"NO"<<nl;
     // }
     
     // else if(ans) cout<<"YES"<<nl;
     // else cout<<"NO"<<nl;
     
  return 0;
}