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
       string str;
       cin>>str;
       int ar[10]={0};
       bool flag=false;
       for (int i = 0; i < str.length(); ++i)
       {
           //char ch=str[]   	
       	   int x=str[i]-'0';
       	   ar[x]++;
       }
       for (int i = 0; i < 10; ++i)
       {
       	if (ar[i]==3)
       	{
       		cout<<6<<nl;
       		flag=true;
       		break;
       	}
       	if (ar[i]==4)
       	{
       		cout<<-1<<nl;
       		flag=true;
       		break;
       	}
       }
       if (!flag)
       {
       	cout<<4<<nl;
       }
     }
  return 0;
}