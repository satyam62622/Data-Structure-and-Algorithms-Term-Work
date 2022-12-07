#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,int source,int auxiliary,int destination)
{
    if(n<=0)
    return;
    towerOfHanoi(n-1,source,destination,auxiliary);
    cout<<"\nMove a Disk from"<<source<<" to "<<destination;
    towerOfHanoi(n-1,auxiliary,source,destination);
}

int main()
{
    int n;
    cout<<"Input number of disks: ";
    cin>>n;
    towerOfHanoi(n,1,2,3);
}