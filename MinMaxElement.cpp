#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void max_min(vector<int> v, int n)
{
    int max = v[0], min = v[0];
    for(int i=1; i < n; i++)
    {
        if(v[i] > max) 
            max = v[i];
        if(v[i] < min)
            min = v[i];
    }
    cout<<"Maximum element of array through function is: "<<max<<endl;
    cout<<"Minimum element of array througn function is: "<<min<<endl;
}

int main()
{
    int n,input;
    cout<<"Enter the size of the array: ";    
    cin>>n;

    vector<int> vect;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i < n; i++)
    {
        cin>>input;
        vect.push_back(input);
    }
    cout<<"Maximum element is: "<<*max_element(vect.begin(), vect.end())<<endl;
    cout<<"Minimum element is: "<<*min_element(vect.begin(), vect.end())<<endl;
    max_min(vect,n);

}