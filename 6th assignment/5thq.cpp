#include <iostream>
using namespace std;

int main()
{
    char  str[20], *p,a;

    cout << "Input about 10 characters of string\n";
    cin >> str;
    p=str;
    for(int j=0;*(p+j)!=NULL;j++)
    {
    for(int i=j;*(p+i)!=NULL;i++)
    {cout<<*(p+i);}
    cout<<endl;
    }
    cin>>a;
    return 0;
    }
