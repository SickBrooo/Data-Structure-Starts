#include<bits/stdc++.h>
using namespace std;
class Student
{
  public:
  string Name;
  int roll;
  int marks;

  Student(string Name,int roll, int marks)
  {
     this->Name=Name;
     this->roll=roll;
     this->marks=marks;
  }
};
class cmp
{
   public:
   bool operator()(Student L,Student R) // calling this bool operator is different;;;
   {
      if(L.marks>R.marks) 
        return true;
        else if(L.marks<R.marks) return false;
        else  return L.roll>R.roll;
   }
};
int main()
{
   priority_queue<Student,vector<Student>,cmp>pq;
   int n; cin>>n;
   for(int i=0;i<n;i++)
   {
    string name;
    int roll;
    int marks;
    cin>>name>>roll>>marks;
    Student obj=Student(name,roll,marks);
    pq.push(obj);
   }

   while(!pq.empty())
   {
    cout<<pq.top().Name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
    pq.pop();
   }

  return 0;
}