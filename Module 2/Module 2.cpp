#include<iostream>
#include<string>
using namespace std;

string reverse(string str)
{
for(int i=0,j=str.length()-1;i<j;i++,j--)
{
    char x=str[i];
    str[i]=str[j];
    str[j]=x;
}
return str;
}
int main()
{

cout<<"String Input Console \n";
string str1,str2,str3;
cout<<"Enter 3 string variables \n";
cin>>str1>>str2>>str3;
str1=reverse(str1);
str2=reverse(str2);
str3=reverse(str3);
cout<<"Inverted Variables \n";
cout<<str1<<endl<<str2<<endl<<str3<<endl;
}
