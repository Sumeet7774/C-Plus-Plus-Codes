#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int rem,reverse=0;

    while(n!=0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n/10;

    }
    cout<<"The Reverse Number is: "<<reverse<<endl;

    return 0;
}