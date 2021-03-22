#include<iostream>
#include<math.h>
using namespace std;

void swap(int *a, int *b);

class minheap
{
    int *addr; //for storing the address of array
    int capacity; //total size of heap
    int heapsize; //total elements in heap at a time

    public:
        minheap(int a[], int size);
        void min_heapify(int i);
        int extract_min();
        int parent(int i)
        {
            return (i-1)/2;
        }
        
        int left(int i)
        {
            return (2 * i + 1);
        }

        int right(int i)
        {
            return (2 * i + 2);
        }

        int get_min()
        {
            return addr[0];
        }
};

minheap::minheap(int a[], int size)
{
    heapsize = size;
    addr  = a;
    int i = ceil((heapsize - 1)/ 2) - 1;
    while(i >= 0)
    {
        min_heapify(i);
        i--;
    }
}

void minheap::min_heapify(int i)
{
    int l,r,min;
    l = left(i);
    r = right(i);
    min = i;

    if(l < heapsize && addr[l] < addr[i])
        min = l;
    
    if(r < heapsize && addr[r] < addr[min])
        min = r;
    
    if(min != i)
    {
        swap(&addr[i], &addr[min]);
        min_heapify(min);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int minheap::extract_min()
{
    if(heapsize == 0)
        return INT_MAX;

    int root = addr[0];

    if(heapsize > 1)
    {
        addr[0] = addr[heapsize - 1];
        min_heapify(0);
    }
    heapsize--;
    return root;
}

int kthsmallest(int arr[], int k, int n)
{
    int i,min;
    minheap mh(arr, n);
    for(i = 0; i < k-1; i++)
        mh.extract_min();

    return mh.get_min();
}

int main()
{
    int arr[] = {5,4,3,2,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout<<"Enter the value of k:";
    cin>>k;
    if(k > n)
    {
        cout<<"Please enter value of k in range 0 to "<<n<<":"<<endl;
        cin>>k;
    }
    cout<<"kth smallest element is: "<<kthsmallest(arr, k, n)<<endl;
}