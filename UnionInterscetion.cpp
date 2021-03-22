//Union and Intersection of two sorted arrays

#include<bits\stdc++.h>
#include<iostream>

using namespace std;

void show(set<int> a);

int main()
{
    int input,size1,size2;
    set<int> a1;
    set<int> a2;
    set<int> a3;

    cout<<"Enter the size of array 1: ";
    cin>>size1;

    cout<<"Enter elements in array 1:"<<endl;
    for(int i=0; i<size1; i++)
    {
        cin>>input;
        a1.insert(input);
        a3.insert(input);
    }

    cout<<"Enter the size of array 2: ";
    cin>>size2;

    cout<<"Enter elements in array 1:"<<endl;
    for(int i=0; i<size2; i++)
    {
        cin>>input;
        a2.insert(input);
        a3.insert(input);
    }

    cout<<"Array 1 is:"<<endl;
    show(a1);
    cout<<"Array 2 is:"<<endl;
    show(a2);
    cout<<"Union of both arrays is:"<<endl;
    show(a3);

    cout<<"Intersection of both arrays is:"<<endl;

    auto it1 = a1.begin();
    auto it2 = a2.begin();

    while(it1 != a1.end() && it2 != a2.end())
    {
        if(*it1 < *it2)
            it1++;
        else if(*it2 < *it1)
            it2++;
        else{
            cout<<*it1<< " ";
            *it1++;
            *it2++;
        }
    }
    cout<<endl;
}

void show(set<int> a)
{
    for(int x: a)
        cout<<x<<" ";
    cout<<endl;    
}