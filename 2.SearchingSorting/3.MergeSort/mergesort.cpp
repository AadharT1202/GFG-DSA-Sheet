#include<iostream>
using namespace std;

void merge(int *arr, int start, int mid, int end)
{
    int merged[end-start+1];
    int i = start;
    int j = mid+1;
    int x=0;

    while(i<=mid && j<=end)
    {
        if(arr[i]<=arr[j])
            merged[x++] = arr[i++];
        else
            merged[x++] = arr[j++];
    }

    while(i<=mid)   
        merged[x++] = arr[i++];
    while(j<=end)
        merged[x++] = arr[j++];

    int k=0;
    for(int j=start; j<=end; j++)
    {
        arr[j] = merged[k];
        k++;
    }
}

void mergeSort(int *arr, int start, int end)
{
    if(start<end)
    {
        int mid = start + (end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    cout<<"Before Sorting: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    mergeSort(arr,0,n-1);
    cout<<endl;

    cout<<"After Sorting: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}