#include<iostream>
using namespace std;

int merge(int arr[], int temp[], int low, int mid, int high)
{
    int i=low;
    int j=mid;
    int k=low;
    int inv_count=0;
    while(i<=mid-1 && j<=high)
    {
        if(arr[i]<=arr[j])
            temp[k++] = arr[i++];
        else   
        {
            temp[k++] = arr[j++];
            inv_count+=mid-i;
        } 
            
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= high)
        temp[k++] = arr[j++];
  
    for (i = low; i <= high; i++)
        arr[i] = temp[i];
  
    return inv_count;
}

int mergeSort(int arr[], int temp[], int low, int high)
{
    int count=0;
    if(low<high)
    {
        int mid = (low+high)/2;
        count+=mergeSort(arr,temp,low,mid);
        count+=mergeSort(arr,temp,mid+1,high);
        count+=merge(arr,temp,low,mid+1,high);
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int temp[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Inversion count: "<<mergeSort(arr,temp,0,n-1)<<endl;
}