#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ENTER THE VALUE OF SIDE 1: ";
    cin>>a;
        cout<<"ENTER THE VALUE OF SIDE 2: ";
    cin>>b;
        cout<<"ENTER THE VALUE OF SIDE 3: ";
    cin>>c;
if(a>0 && b>0 && c>0)
{
    if (a+b==c || a+c==b||b+c==a )
     cout<<"IT FORMS A TRIANGLE";
}
     else
     {
        cout<<"INVALID INPUT";
     }
     
    
}
