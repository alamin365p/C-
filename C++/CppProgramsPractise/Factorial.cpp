#include<iostream>
using namespace std;


int main()
{
    int number, factorial = 1;
    cout<<"Enter The Number"<<endl;
    cin>>number;
    if(number<0)
    cout<<"Cant find the factorial for negative number";
    else if(number<=1)
    cout<<number<<"!="<<factorial;
    else
    {
        for(int counter = number; counter>=2; counter--)
    {
        factorial=factorial*counter;

    }
     cout<<number<<"!="<<factorial;
    }

    return 0;

}



