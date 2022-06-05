#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int> arr, int N)
{
    // For xor of all the elements in array
    int x1 = arr[0];
 
    // For xor of all the elements from 1 to n+1
    int x2 = 1;
 
    for (int i = 1; i < N-1; i++)
        x1 = x1 ^ arr[i];
 
    for (int i = 2; i <= N; i++)
        x2 = x2 ^ i;
 
    return (x1 ^ x2);
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