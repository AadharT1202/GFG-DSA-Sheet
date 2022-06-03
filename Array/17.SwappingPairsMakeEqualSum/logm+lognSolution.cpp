#include<iostream>
#include<vector>
using namespace std;

int getSum(vector<int> arr, int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
        sum+=arr[i];
    return sum;
}

vector<int> swappingPair(vector<int> arr1, int n, vector<int> arr2, int m)
{
    vector<int> ans(2,0);
    int s1 = getSum(arr1,n);
    int s2 = getSum(arr2,m);
    int reqSum = (s2-s1)/2;
    sort(arr2.begin(),arr2.end());
    for(int i=0; i<n; i++)
    {
        int a = arr1[i];
        int b = a + reqSum;
        int left = 0;
        int right = m-1;

        while(left<=right)
        {
            int mid = (left+right)/2;
            if(arr2[mid] == b)
            {
                ans[0] = a;
                ans[1] = b;
                return ans;
            }

            else if(arr2[mid]>b)
                right = mid-1;

            else
                left = mid+1;
        }
    }
    return ans;
}
int main()
{
    int n,m;
    cin>>n;
    vector<int> arr1(n,0);
    cin>>m;
    vector<int> arr2(m,0);
    for(int i=0; i<n; i++)
        cin>>arr1[i];

    for(int j=0; j<m; j++)
        cin>>arr2[j];
    
    vector<int> ans = swappingPair(arr1,n,arr2,m);
    cout<<"Pair is: "<<ans[0]<<" "<<ans[1]<<endl;
}