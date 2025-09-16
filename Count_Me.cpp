#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   cin.ignore();
   while(t--)
   {
     string s;
     getline(cin,s);
     stringstream ss(s);
     string word;
     map<string,int>mp;

     int highest=0;
     string max_find;
     while(ss>>word)
     {
        mp[word]++;

        if(mp[word]>highest)
        {
          highest=mp[word];
          max_find=word;
        }
     }
       cout<<max_find<<" "<<highest<<endl;
   }

  return 0;
}