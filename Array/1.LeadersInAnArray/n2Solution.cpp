//Link: https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

#include<iostream>
#include<vector>
using namespace std;

vector<int> leaders(vector<int> arr, int n)
{
    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        int j;
        for(j=i; j<n; j++)
        {
            if(arr[i]<arr[j])
                break;
        }
        if(j==n)
            ans.push_back(arr[i]);
    }
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