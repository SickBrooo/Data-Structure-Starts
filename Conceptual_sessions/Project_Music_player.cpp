#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<string>musicPlayer;
   
   string s;
   while(1)
   {
    cin>>s;
    if(s=="stop")
    {
      break;
    }
    musicPlayer.push_back(s);
   }
   int q;
   cin>>q;
   string cmd;
   string songname;
   auto current=musicPlayer.begin();
   while(q--)
   {
     cin>>cmd;
     if(cmd=="play")
     {
      cin>>songname;
      auto is_found=find(musicPlayer.begin(),musicPlayer.end(),songname);
      if(is_found==musicPlayer.end())
      {
        cout<<"Not Found"<<endl;
      }
      else
      {
        current=is_found;
        cout<<"playing"<<" "<<*is_found<<endl;
      }
     }
     if(cmd=="right")
     {
      
      if(next(current)==musicPlayer.end())
      {
        cout<<"Not Found"<<endl;
      }
      else
      {
        current=next(current);
        cout<<"playing "<<*current<<endl;
      }
     }
     if(cmd=="left")
     {
      if(current==musicPlayer.begin()) //checking onlly Current because prev(current) 
      {                                // would go beyond the begin() line;
        cout<<"Not Found"<<endl;
      }
      else
      {
        current=prev(current);
        cout<<"playing "<<*current<<endl;
      }
     }
   }

  return 0;
}