// Move all negative nos to one side of the array
#include<bits\stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    vector<int> v;
    int n,input;

    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>input;
        v.push_back(input);
    }

    stable_partition(v.begin(), v.end(), [](int x)
    {
        return x<0;
    });

    cout<<"Final Array:"<<endl;
    for(int x : v)
        cout<<x<<" ";
    
    cout<<endl;

}