#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <limits>
using namespace std;
 struct person
 {
  string name;
  int age;
 };
int main()
{
 int n;
 person p;
 cout<<"Enter number of persons :";
 cin>>n;
 ofstream out("persons.txt");
 for(int i=0;i<n;i++)
 {
   cout<<"Enter name:";
   cin>>ws;
   getline(cin,p.name);
   cout<<"Enter age :";
   cin>>p.age;
   out<<p.name<<endl;
   out<<p.age<<endl;
 }
 out.close();
 ifstream in ("persons.txt");
 vector<person>persons;
 while(getline(in,p.name))
 {
     in>>p.age;
     in.ignore(numeric_limits<streamsize>::max(),'\n');
     persons.push_back(p);
 }
 in.close();
 if(persons.empty())
 {
     cout<<"No persons found!";
      return 0;
 }
   int youngest=persons[0].age;
   int oldest=persons[0].age;
   for(int i=0;i<persons.size();i++)
   {
       if(persons[i].age<youngest)
        youngest=persons[i].age;
        if(persons[i].age>oldest)
            oldest=persons[i].age;
   }
   ofstream result("results.txt");
   result<<"youngest persons :"<<endl;
    for(int i=0;i<persons.size();i++)
    {
        if(persons[i].age==youngest)
    {

    result<<persons[i].name<<" "<<persons[i].age<<endl;
    }
    }

result<<"oldest persons :"<<endl;
 for(int i=0;i<persons.size();i++)
 {
     if(persons[i].age==oldest)
 {

 result<<persons[i].name<<" "<<persons[i].age<<endl;
 }
 }
 result.close();
 cout<<"Data saved successfully!";

    return 0;
}
