#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   string name;
   int id;
   float grade;
   cout<<"enter student full name  :";
   getline (cin,name);
   cout<<"enter student full id :";
   cin>>id;
cout<<"enter student grade:";
   cin>>grade;
   ofstream file ("student.txt");
   if(file.is_open())
{


    file<<"student name :"<<name<<endl;
    file<<"student id :"<<id<<endl;
    file<<"student grade :"<<grade<<endl;
    file.close();


    cout<<"data saved successfully";
}
   else
   {
       cout<<"file could not be opened";
   }


    return 0;
}

