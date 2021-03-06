#include<iostream>
#include<vector>
using namespace std;
/*
A Simple Solution is to first sort the array. After sorting, exclude the first element, swap the remaining elements in pairs. (i.e. keep arr[0] as it is, swap arr[1] and arr[2], swap arr[3] and arr[4], and so on). 
Time complexity: O(N log N) since we need to sort the array first.
*/
void zigzagSort(vector<int> &arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(i%2==0)
        {
            if(arr[i]>arr[i+1])
                swap(arr[i],arr[i+1]);
        }
        else
        {
            if(arr[i]<arr[i+1])
                swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);

    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Before zig zag sort: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    zigzagSort(arr,n);
    cout<<endl;
    cout<<"After zig zag sort: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}