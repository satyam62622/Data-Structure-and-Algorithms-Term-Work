#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n<=1)
    return 1;
    return n*factorial(n-1);
}

int main()
{
    int n,fact;
    cout<<"Input number: ";
    cin>>n;
    fact=factorial(n);
    cout<<"Factorial: "<<fact;
}