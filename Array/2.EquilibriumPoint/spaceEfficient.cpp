#include<iostream>
#include<vector>
using namespace std;
int equilibriumPoint(vector<long long> arr, long long n) 
{
    if(n==1)
        return 1;
    if(n==2)
        return -1;
    

    //Calculating right sum for first element
    //Basically the sum of all elements except the first element.
    int right_sum = 0, left_sum = 0;
    int ans;
    // Computing right_sum
    for (int i = 1; i < n; i++)
        right_sum += arr[i];
 
    // Checking the point of partition
    // i.e. left_Sum == right_sum
    for (int i = 0, j = 1; j < n; i++, j++) {
        right_sum -= arr[j];
        left_sum += arr[i];
 
        if (left_sum == right_sum)
            ans = i+1;
    }
 
    return ans+1; //returning 1 based index.
}
int main()
{
    long long n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<long long> arr;
    for(long long i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<equilibriumPoint(arr,n)<<endl;
}