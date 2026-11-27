#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
 ofstream out("welcome.txt");
 out<<"Hello Everybody";
 out.close();
 ifstream in("welcome.txt");
 string text;
 getline(in,text);
 in.close();
 int pos=text.find("body");
 if(pos!=-1)
 {
 text.replace(pos,4,"one");
 }
 ofstream file("welcome.txt");
 file<<text;
 file.close();
 cout<<text;
    return 0;
}

