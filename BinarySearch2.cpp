#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,m,input;
    vector<int> vect;
    vector<int>::iterator fp;
    vector<int>::iterator ep;

    cout<<"Enter the size of the array:"<<endl;
    cin>>n;

    cout<<"Enter the elements in the array:"<<endl;
    for(int i=0; i <n; i++)
    {
        cin>>input;
        vect.push_back(input);
    }
    
    cout<<"Enter the elements to search: ";
    cin>>m;

    fp = vect.begin();
    ep = vect.end();
    sort(fp,ep);
    if(binary_search(fp,ep,m))
        cout<<"Element found"<<endl;
    else
    {
        cout<<"Element not found"<<endl;
    }
    
    
}   