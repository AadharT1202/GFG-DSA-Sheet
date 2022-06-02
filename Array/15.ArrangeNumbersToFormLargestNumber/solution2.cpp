//https://www.geeksforgeeks.org/arrange-given-numbers-form-biggest-number-set-2/?ref=lbp
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printLargest(vector<int> arr, int n)
{
    int maxElement = *max_element(arr.begin(), arr.end());
    cout<<maxElement<<endl;
    int count = 1;
    while(maxElement!=0)
    {
        maxElement/=10;
        count++;
    }
    /*
    1) Find number of digits in the largest number. Let number of digits be n.
    2) Create extended version of all numbers. In extended version, we have n+1 digits formed by concatenating the number of with itself and truncating extra digits.
    3) Sort original numbers according to their extended values.
    4) Concatenating the sorted numbers produces th required result.
    */
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    printLargest(arr,n);
    return 0;
}