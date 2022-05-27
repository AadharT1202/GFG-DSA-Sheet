#include<iostream>
#include<vector>
using namespace std;
int equilibriumPoint(vector<long long> arr, long long n) 
{
    if(n==1)
        return 1;
    if(n==2)
        return -1;
        
    vector<long long> leftSum(n,0);
    vector<long long> rightSum(n,0);

    for(long long i=1; i<n; i++)
    {
        long long x = leftSum[i-1] + arr[i-1];
        leftSum[i] = x;
    }

    for(long long i=n-2; i>=0; i--)
    {
        long long x = rightSum[i+1] + arr[i+1];
        rightSum[i] = x;
    }

    int ans;
    for(int i=0; i<n; i++)
    {
        if(leftSum[i]==rightSum[i])
        {
            ans = i+1;//answer is required in 1 based indexing
            break;
        }
    }
    return ans;
}
int main()
{
    long long n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<long long> arr;
    for(long long i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<equilibriumPoint(arr,n);
}