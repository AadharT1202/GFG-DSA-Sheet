#include<iostream>
#include<vector>
using namespace std;

void reverseInGroups(vector<long long>& arr, int n, int k)
{
    int i;
    if(n <= k){
        reverse(arr.begin(),arr.end());
    }
    else{
        for(i = 0; i < n; i+=k){
            if(i+k <= n-1)
            reverse(arr.begin()+i,arr.begin()+i+k);
            else
            reverse(arr.begin()+i,arr.begin()+(n));
        }
    } 
}

int main()
{
    int n;
    cin>>n; 
    int k;
    cin>>k;
    vector<long long> arr(n,0);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverseInGroups(arr,n,k);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}