//Raotate an array by K elements to the right

#include<bits\stdc++.h>
#include<iostream>

using namespace std;

void display(vector<int> v);

int main()
{
    int n,in,k;
    vector<int> v;

    cout<<"Enter the size of the array:";
    cin>>n;

    while(n--)
    {
        cin>>in;
        v.push_back(in);
    }

    cout<<"Enter the value of k: ";
    cin>>k;

    cout<<endl<<"Array before rotation: ";
    display(v);

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());

    cout<<"Rotated array: ";
    display(v);

}

void display(vector<int> v)
{
    for(int x: v)
        cout<<x<<" ";
    cout<<endl;
}