#include<iostream>
#include<vector>
using namespace std;
int maxLen(vector<int> arr, int n)
{
    int max_length = 0;
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=i; j<n; j++)
        {
            sum+=arr[j];
            if(sum==0)
                max_length = max(max_length, j-i+1);
        }
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