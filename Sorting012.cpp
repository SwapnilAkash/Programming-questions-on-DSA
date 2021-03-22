//Sort an array comprising of elements 0,1,2 only without a sorting algorithm
#include<bits\stdc++.h>
#include<iostream>

using namespace std;

int c_sort(vector<int> &vect)
{
    unordered_map<int,int> umap;
    unordered_set<int> s;

    for(int i = 0; i < vect.size(); i++)
    {
        if(s.find(vect[i]) != s.end())
            umap[vect[i]]+= 1;
        else
        {
            s.insert(vect[i]);
            umap[vect[i]] = 1;
        }
    }

    for(int i=0; i<umap[0]; i++)
        vect[i] = 0;
    
    for(int i=umap[0]; i<umap[0]+umap[1]; i++)
        vect[i] = 1;
    
    for(int i=umap[0]+umap[1]; i<umap[0]+umap[1]+umap[2]; i++)
        vect[i] = 2;
    
}

int main()
{
    vector<int> v;
    int n,input;

    cout<<"Enter the size of the array: ";
    cin>>n;
    
    cout<<"Ente the elements in the array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>input;
        v.push_back(input);
    }

    c_sort(v);

    cout<<"Sorted array:"<<endl;
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}