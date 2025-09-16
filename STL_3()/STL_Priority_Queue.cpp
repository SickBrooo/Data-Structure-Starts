#include<bits/stdc++.h>
using namespace std;
int main()
{
  // priority_queue<int>pq;   maximum Priority Queuue
  priority_queue<int,vector<int>,greater<int>>pq; // Minimum Priority Queue;;f
   pq.push(10);
   pq.push(20);
   pq.push(30);
   pq.push(4);
   pq.push(5);
   cout<<pq.top()<<endl;
   pq.pop();
   pq.pop();  
   cout<<pq.top();

  return 0;
}