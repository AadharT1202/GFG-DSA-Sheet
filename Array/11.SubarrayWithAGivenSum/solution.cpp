#include<iostream>
#include<vector>
using namespace std;
vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    long long sum = 0;
    int left = 0;
    vector<int> ans;
    for(int right=0; right<n; right++)
    {
        sum += arr[right];
        while(sum>s && left<right)
        {
            sum -= arr[left];
            left++;
        }
        if(sum == s)
        {
            ans.push_back(left+1);
            ans.push_back(right+1);
            return ans;
        }
    }
    ans.push_back(-1);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    long long sum;
    cin>>sum;
    vector<int> ans = subarraySum(arr,n,sum);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}