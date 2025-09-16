#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    
  }
       string s;
       getline(cin,s);
       
       stringstream ss(s);
       string word;
       map<string,int>mp;


       //mp.insert({"hello",1});
      // mp["hello"]=1;
    

       while(ss>>word)
       {
        mp[word]++;
       }
       for(auto it=mp.begin();it!=mp.end();it++)
       {
        cout<<it->first<<" "<<it->second<<endl;
       }

  return 0;
}