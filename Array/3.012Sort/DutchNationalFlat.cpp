#include<iostream>
#include<vector>
using namespace std;

void sort012(vector<int> &arr, int n)
{
    int low=0;
    int mid = 0;
    int high = n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }

        else if(arr[mid]==1)
            mid++;
        
        else if(arr[mid]==2)
        {
            swap(arr[mid],arr[high]);
            high--;
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
    cout<<"Before sorting: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    sort012(arr,n);
    cout<<endl;
    cout<<"After sorting: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}