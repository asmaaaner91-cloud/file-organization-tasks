#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  ofstream out("student.txt");
  if(!out)
  {
    cout<<"Error creating file/n";
    return 1;
  }
    out<<"Hadeer mahmoud\n";
    out<<"Youssef Ali/n";
    out<<"Ahmed mostafa\n";
    out<<"Esraa Ebrahim\n";
    out.close();
    ifstream in("student.txt");
    if(!in)
    {
        cout<<"Error opening file\n";
        return 0;
    }
    vector<string>names;
    string line;
    while(getline(in,line))
{


        if(!line.empty())names.push_back(line);
    }
   in.close();
   sort(names.begin(),names.end());
   cout<<"stored names(ascending):\n";
   for(const string&n:names)
   {
       cout<<n<<"\n";
   }
    return 0;
}
