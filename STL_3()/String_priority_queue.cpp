#include<bits/stdc++.h>
using namespace std;
int main()
{
   priority_queue<string,vector<string>,greater<string>>pq; // Getting minimum in lexicographuical
   string s;
   getline(cin,s);
   stringstream ss(s);
   string word;
   while(ss>>word)
   {
    pq.push(word);
   }

   while(!pq.empty())
   {
    cout<<pq.top()<<endl;
    pq.pop();
   }
  return 0;
}