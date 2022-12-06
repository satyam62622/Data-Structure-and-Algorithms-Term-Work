#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Input array limit: ";
    cin>>n;
    
    int arr[n],key,flag=0;
    cout<<"Input array elements: ";
    
    for(auto &i:arr)
    cin>>i;

    cout<<"Input key value to search in array: ";
    cin>>key;

    for(auto &i:arr)
        if(i==key)
        {
            flag=1;
            break;
        }
    
    if(flag)
    cout<<"Key found.";
    else
    cout<<"Key not found.";

}