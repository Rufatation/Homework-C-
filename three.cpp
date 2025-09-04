#include <iostream>
using namespace std;
int main()
{
    int a,b,p,s;
    cout<<"Hello! Please input some numbers to find the Perimeter and the Square."<<endl;
    cin>>a>>b;
    p = a*2+b*2
    s = a*b
    while (a == 0 || b == 0) 
    {
        cout<<"A side cant be 0! Input everything again."
        cin>>a>>b;
    }
    cout<<"Perimeter:"<<endl;
    cout<<p<<endl;
    cout<<"Square:"<<endl;
    cout<<s<<endl;
}
