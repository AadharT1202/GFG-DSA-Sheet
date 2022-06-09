#include<iostream>
using namespace std;

int findMin(int arr[], int n)
{
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;
        
        if(arr[mid]<arr[next] && arr[mid]<arr[prev])
            return mid;
        else if(arr[mid]>arr[left])
            left = mid+1;
        else
            right = mid-1;
    }
    return -1;
}

int binarySearch(int arr[], int left, int right, int x)
{
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid] == x)
            return mid;
        
        else if(arr[mid]>x)
            right = mid-1;
        
        else 
            left = mid + 1;
    }
    return -1;
}

bool findNumInRotatedSortedArray(int arr[], int n, int mid, int x)
{
    int leftAns = binarySearch(arr,0,mid-1,x);
    int rightAns = binarySearch(arr,mid,n-1,x);
    if(leftAns!=-1 || rightAns!=-1)
        return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int x;
    cin>>x;
    int mini = findMin(arr,n);
    bool ans = findNumInRotatedSortedArray(arr,n,mini,x);
    if(ans==true)
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;
}