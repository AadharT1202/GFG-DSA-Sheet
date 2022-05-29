//A simple solution will be to sort both the arrays and then compare them in linear time.
//overall time complexity will be O(logn + log m)

#include<iostream>
#include<vector>
#include<unordered_map>
#define ll long long 
using namespace std;

bool check(vector<ll> A, vector<ll> B, int N) 
{
 
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++)
        mp[A[i]]++;
 
    for (int i = 0; i < N; i++) {
        // If there is an element in arr2[], but
        // not in arr1[]
        if (mp.find(B[i]) == mp.end())
            return false;
 
        // If an element of arr2[] appears more
        // times than it appears in arr1[]
        if (mp[B[i]] == 0)
            return false;
 
        mp[B[i]]--;
    }
 
    return true;
}

int main()
 {

    int n;
    cin>>n;
    
    vector<ll> arr(n,0),brr(n,0);
    
    // increase the count of elements in first array
    for(ll i=0;i<n;i++)
        cin >> arr[i];
    
    for(ll i=0;i<n;i++)
        cin >> brr[i];

    bool x = check(arr,brr,n);
    if(x==true)
        cout<<"True";
    else
        cout<<"False";
	return 0;
} 