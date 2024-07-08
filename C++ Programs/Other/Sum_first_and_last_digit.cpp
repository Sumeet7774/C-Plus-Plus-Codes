#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your number: ";
    cin>>n;

    int rem;
    rem = n % 10;

    while(n >= 10)
    {
        n = n/10;
    }

    int sum = n + rem;
    cout<<"The sum is: "<<sum<<endl;


    return 0;
}