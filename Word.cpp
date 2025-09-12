#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string str;
    int up=0,low=0;
    getline(cin,str);
    for(char c:str)
    {
        if(isupper(c))
            up++;
        else if(islower(c))
            low++;
    }
    if(up>low)
    {
        for(char &ch: str)
        {
            ch=toupper(ch);
        }
        cout<<str<<endl;
    }
    else
    {
        for(char &ch:str)
        {
            ch=tolower(ch);
        }
        cout<<str<<endl;
    }



    return 0;
}
