
#include<iostream>
using namespace std;

int main()
{
    float n1, n2;
    cout<<"Enter Input: "<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"Enter a Operator"<<endl;
    cin>>op;
    switch (op)
    {
        case '+':
        cout<<n1+n2<<endl;
        break;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<<n1/n2<<endl;
        break;
        default:
        cout<<"Enter another operator:"<<endl;
        break;
    }

    return 0;
}