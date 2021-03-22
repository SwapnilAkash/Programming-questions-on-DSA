//Program to find if there exists a pair of nos in an array that add up to k.

#include<iostream>
#include<bits\stdc++.h>

using namespace std;

int main()
{
    int k, c=0;
    array<int,4> arr = {10, 15, 3, 7};
    unordered_set<int> s;

    cout<<"Enter the value of k: ";
    cin>>k;

    for(auto i: arr)
    {
        if(s.find(k-i) == s.end())
            s.insert(i);

        else
        {
            c = 1;
            cout<<"There exists a pair ("<<i<<","<<k-i<<") in the array with sum = "<<k<<endl;
            break;
        }
    }

    if(!c)
        cout<<"No pair exists in the array with sum = "<<k<<endl;    

    return -1;
}