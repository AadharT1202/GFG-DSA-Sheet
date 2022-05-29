#include<iostream>
#include<vector>
using namespace std;
int maxSubarraySum(vector<int> arr, int n)
{
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    
    for(int i=0; i<n; i++)
    {
        max_ending_here += arr[i];
        
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        
        if(max_ending_here<0)
            max_ending_here = 0;
            
    }
    
    return max_so_far;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Maximum Subarray sum is: "<<maxSubarraySum(arr,n)<<endl;
}