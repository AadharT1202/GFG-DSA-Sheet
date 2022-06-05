#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int> arr, int n)
{
    int sumofN = (n*(n+1))/2;
    int sum=0;
    for(int i=0; i<n-1; i++)
        sum += arr[i];
        
    return sumofN - sum;
}

int main()
{
    int N;
    cin>>N;
    vector<int> arr(N-1,0);
    for(int i=0; i<N-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"Missing Number is: "<<missingNumber(arr,N)<<endl;
}