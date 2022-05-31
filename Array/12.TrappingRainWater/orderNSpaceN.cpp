#include<iostream>
#include<vector>
using namespace std;
 
int waterCollected(vector<int> arr, int n)
{
    int ans=0;
    vector<int> leftMax(n,0);
    vector<int> rightMax(n,0);

    leftMax[0] = arr[0];
    for(int i=1; i<n; i++)
        leftMax[i] = max(leftMax[i-1],arr[i]);

    rightMax[n-1] = arr[n-1];
    for(int j=n-2; j>=0; j--)
        rightMax[j] = max(rightMax[j+1],arr[j]);

    for(int i=1; i<n-1; i++)
        ans += min(leftMax[i],rightMax[i]) - arr[i];

    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The collected rain water will be: "<<waterCollected(arr,n)<<endl;
}