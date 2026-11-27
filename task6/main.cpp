#include <iostream>
#include <fstream>
#include<cstdio>
using namespace std;

int main()
{
 ofstream outfile("grades.txt");
 if(!outfile)
 {
   cout<<"error creating grades.txt"<<endl;
   return 1;
 }
 outfile<<90<<endl;
   outfile<<85<<endl;
   outfile<<70<<endl;
    outfile<<95<<endl;
  outfile<<80<<endl;
  outfile.close();
  ifstream infile("grades.txt");

  if(!infile)
    {
cout<<"error opening grades.txt"<<endl;
      return 1;
  }

  int grade;
  cout<<"grades before deletion:"<<endl;
  while(infile>>grade)
  {
      cout<<grade<<endl;
  }
  infile.close();

  int deletegrade;
  cin>>deletegrade;
  ifstream originalfile("grades.txt");
  ofstream tempfile("temp.txt");
  if(!originalfile||!tempfile)
  {
    cout<<"error opening files!"<<endl;
    return 1;
  }
  bool found=false;
  while(originalfile>>grade)
  {
   if(grade==deletegrade)

   {
       found=true;
   }
   else
   {
       tempfile<<grade<<endl;
   }
  }

    originalfile.close();
    tempfile.close();
    if(!found)

    {
      remove("temp.txt");
      cout<<"grade not found!"<<endl;
      return 0;
    }
    if(remove("grades.txt")!=0)
    {
     cout<<"error deleting original file!"<<endl;
     remove("temp.txt");
     return 1;
    }
   if(rename("temp.txt","grades.txt")!=0)

  {
      cout<<"error replacing file"<<endl;
      return 1;
  }
  cout<<"grade deleted successfully!"<<endl;
  ifstream finalfile("grades.txt");
  if(!finalfile)
  {
    cout<<"error opening grades.txt"<<endl;
  return 1;
  }
  cout<<"grades after deletion :"<<endl;
 while(finalfile>>grade)
  {
      cout<<grade<<endl;
  }
  finalfile.close();
  return 0;
}

