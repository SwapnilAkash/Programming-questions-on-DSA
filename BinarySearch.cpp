#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

bool b_search(vector<int> &a, int low, int high, int n)
{
    int mid = (low + high) / 2;

    if(low > high)
    {
        return false;
    }

    if(a[mid] == n)
        return true;
    
    else if(a[mid] < n)
    {
        b_search(a,mid+1,high,n);
    }
    
    else
    {
        b_search(a,low,mid-1,n);
    }
}


int main()
{
    int n;
    vector<int> ar = {5,4,22,6,7,1};
    vector<int>::iterator ptr;
    
    ptr = ar.begin();
    sort(ptr, ptr + ar.size());   

   cout<<"Enter a number to search: ";
   cin>>n;

   if(b_search(ar,0,ar.size()-1, n))
   {
        cout<<"Element found"<<endl;
   }
   else
   {
       cout<<"Element not found"<<endl;
   }

}