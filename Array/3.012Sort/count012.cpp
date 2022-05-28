#include<iostream>
#include<vector>
using namespace std;

void sort012(vector<int> &arr, int n)
{
    int zeros=0;
    int ones = 0;
    int twos = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
            zeros++;
        else if(arr[i]==1)
            ones++;
        else    
            twos++;
    }
    int i=0;
    while(zeros>0)
    {
        arr[i] = 0;
        i++;
        zeros--;
    }

    while (ones>0)
    {
        arr[i] = 1;
        i++;
        ones--;
    }

    while (twos>0)
    {
        arr[i] = 2;
        i++;
        twos--;
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