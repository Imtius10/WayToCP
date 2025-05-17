#include<bits/stdc++.h>
#include<limits.h>
#include<algorithm>
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
       int n,time=0,ans=0,ans1=0,ans2=0,visited_1=INT_MAX,visited_2=INT_MAX,mn=0,temp1=0;
       string temp;
       cin>>n;
       cin>>temp;
       for (int i = 0; i <n; ++i)
       {
       	cin>>time;
       	cin>>temp;
       	mn=INT_MAX;
       	if (temp[0]=='1' and temp[1]=='1')
       	{
          if (mn>=time)
          {
            mn=time;
          ans++;
          temp1=time;
          }	
       	}
       	 if (temp[0]=='0' and temp[1]=='1')
       	{
       		if (visited_1>=time)
          {
            int tx=time;
           visited_2=tx;
           ans1=visited_2; 
          }
          
       		
       	}
       	 if (temp[0]=='1' and temp[1]=='0')
       	{
       		if (visited_2>=time)
          {
           int tx=time;
           visited_2=tx;
           ans2=visited_2;          }
         
       		
       	}
       }
       // if (ans)
       // {
       //    if (ans1>0 and ans2>0)
       //    {
       //      int sum=visited_1+visited_1;
       //     if (sum<temp1)
       //     {
       //       cout<<sum<<nl;
       //     }
       //      else cout<<sum<<nl;
       //    }
       //    else cout<<temp1<<endl;
       //  }
       // else if (ans1>0 and ans2>0)
       // {
       // 	cout<<(ans1+ans2)<<nl;
       // }
        cout<<temp1<<" "<<(ans1+ans2)<<nl;
     }
  return 0;
}