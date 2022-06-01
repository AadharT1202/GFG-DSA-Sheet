#include<iostream>
#include<vector>
using namespace std;

long long trappingWater(vector<int> arr, int n)
{
    int left_max = 0;
    int right_max = 0;
    int left = 0;
    int right = n-1;
    long long sum = 0;
    while(left<=right)
    {
        if(arr[left] <= arr[right])
        {
            if(arr[left]<left_max)
                sum += left_max - arr[left++];
            else
                left_max = arr[left++];
        }
        else
        {
            if(arr[right]<right_max)
                sum += right_max - arr[right--];
            else
                right_max = arr[right--];
        }
    }
    
    return sum;
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
    cout<<"The collected rain water will be: "<<trappingWater(arr,n)<<endl;
}