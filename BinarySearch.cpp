#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &A,int n,int k)
{
    sort(A.begin(),A.end());
    int l=0,r=n-1,m;
    while(l<=r)
    {
        m=l+(r-l)/2;
        if(A[m]==k)
        return m;
        else if(A[m]<k)
        l=m+1;
        else
        r=m-1;

    }
    return -1;
}

int main()
{
    int n;
    cout<<"Input array limit: ";
    cin>>n;
    
    int key,flag=0;
    vector<int> arr(n,0);
    cout<<"Input array elements: ";
    for(auto &i:arr)
    cin>>i;

    cout<<"Input key value to search in array: ";
    cin>>key;

    int index;  
    index = binarySearch(arr,n,key);

    if(index!=-1)
    cout<<"Element found at index: "<<index;
    else
    cout<<"Element not found.";
}