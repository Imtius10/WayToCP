#include<bits/stdc++.h>
#include<limits.h>
#define nl "\n"
#define pb push_back
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       for(int i=0; i<nums.size(); i++){
         
        for (int j = 0; j < nums.size(); ++j)
        {
        	if (nums[i]+nums[j]==target)
        	{
        		return {i,j};
        	}
        }
       } 
    }
};
int main()
{
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  int t;
  cin>>t;
     while(t--){
   
     }
  return 0;
}