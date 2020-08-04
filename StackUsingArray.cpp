#include<iostream>
using namespace std;

class stack
{
    public:
    int size;
    int top;
    int *st;
}s;


int main()
{
    cout<<"Enter size:";
    cin>>s.size;
    s.st=new int [s.size];
    s.top=-1;

    return 0;
    
}

