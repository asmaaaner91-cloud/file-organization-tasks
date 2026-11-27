#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream file("students.txt",ios::app);
  char name[20];
  int id;
  float grade;
  char choice;
  do
  {
   cout<<"Enter student name :";
   cin.ignore();
   cin.getline(name,20);
   cout<<"Enter student id :";
   cin>>id;
    cout<<"Enter student grade :";
      cin>>grade;
      file<<name<<","<<id<<","<<grade<<"$";
      cout<<"Do you want to add another student(y/n):";
      cin>>choice;
  }
        while(choice=='y'||choice=='y');
        file.close();






    return 0;
}
