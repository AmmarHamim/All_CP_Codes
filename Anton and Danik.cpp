#include<iostream>
using namespace std;
int main()
{
    int n,countA=0,countD=0;
    string str;
    cin>>n>>str;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='A')
            countA++;
        else if(str[i]=='D')
            countD++;
    }
    if(countA>countD)
        cout<<"Anton"<<endl;
    else if(countA<countD)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;

    return 0;
}
