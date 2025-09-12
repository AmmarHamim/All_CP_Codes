#include<iostream>
using namespace std;
int main()
{
    long long int n,count=0,rem;
    cin>>n;
    long long int temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        if(rem==4||rem==7)
            count++;
        temp=temp/10;
    }
    if(count==7||count==4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

