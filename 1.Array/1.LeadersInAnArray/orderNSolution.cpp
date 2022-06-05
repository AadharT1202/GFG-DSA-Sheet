//Link: https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

#include<iostream>
#include<vector>
using namespace std;

vector<int> leaders(vector<int> arr, int n)
{
    vector<int> ans;
    int maxi = arr[n-1];
    ans.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--)
    {
        if(arr[i]>=maxi)
        {
            maxi = arr[i];
            ans.push_back(arr[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    int n;
    vector<int> arr(n,0);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr[i] = x;
    }
    vector<int> sol = leaders(arr,n);
    for(int i=0; i<sol.size(); i++)
    {
        cout<<sol[i]<<" ";
    }
    cout<<endl;
}