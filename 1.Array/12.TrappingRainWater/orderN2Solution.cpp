#include<iostream>
#include<vector>
using namespace std;
 
int waterCollected(vector<int> arr, int n)
{
    int ans=0;
    for(int i=1; i<n-1; i++)
    {
        //calculate the left max.
        int left_max = arr[i];
        for(int left=i-1; left>=0; left--)
        {
            left_max = max(left_max,arr[left]);
        }

        //calculate the right max.
        int right_max = arr[i];
        for(int right=i+1; right<n; right++)
        {
            right_max = max(right_max,arr[right]);
        }
        cout<<"Right Max: "<<right_max<<" "<<"Left Max: "<<left_max<<endl;
        ans += min(right_max,left_max) - arr[i];
    }
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