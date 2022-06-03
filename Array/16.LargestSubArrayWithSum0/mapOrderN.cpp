#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int maxLen(vector<int> arr, int n)
{
    int max_length = 0;
    int sum = 0;
    unordered_map<int,int> presum;

    for(int i=0; i<n; i++)
    {
        sum+=arr[i];

        if(sum==0)
            return i+1;
        if(arr[i]==0 && max_length==0)
            max_length=1;
        if(presum.find(sum)!=presum.end())
            max_length = max(max_length, i-presum[sum]);
        else    
            presum[sum] = i;
    }
    return max_length;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);

    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Largest Subarray length: "<<maxLen(arr,n)<<endl;
}