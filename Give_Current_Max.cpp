#include<bits/stdc++.h>
using namespace std;
class Student
{
   public:
   string name;
   int roll;
   int marks;

   Student(string name,int roll,int marks)
   {
     this->name=name;
     this->roll=roll;
     this->marks=marks;
   }
};
class cmp
{
  public:
  bool operator()(Student L,Student R) // different than the other functions;;
  {
     if(L.marks<R.marks) return true;    // Dont forget about the reversed Sign;
     else if(L.marks>R.marks) return false;
     else return L.roll>R.roll;
  }
};
int main()
{
   priority_queue<Student,vector<Student>,cmp>pq; // because were working with a class so we need (cmp) as class;
   int n;
   cin>>n;
   while(n--)
   {
    string name;
    cin>>name;
    int roll;
    cin>>roll;
    int marks;
    cin>>marks;
    Student obj=Student(name,roll,marks); // why are we putting without New?? 
    pq.push(obj);
   }
   int queries;
   cin>>queries;
   while(queries--)
   {
    int x;
    cin>>x;
    if(x==0)
    {
      string name;
      int roll;
      int marks;
      cin>>name>>roll>>marks;
      Student obj1=Student(name,roll,marks);
      pq.push(obj1);
      cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
    }
    else if(x==1)
    {
      if(pq.empty()==true) cout<<"Empty"<<endl;
      else cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
    }
    else if(x==2)
    {
      if(pq.empty()==false) pq.pop();
      if(pq.empty()==true) cout<<"Empty"<<endl;
      else cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl; 
    }
   }

  return 0;
}