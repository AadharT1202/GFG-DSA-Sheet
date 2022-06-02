#include<iostream>
#include<vector>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    
    sort(arr,arr+n);
    sort(dep,dep+n);

    int platforms = 1;
    int result = 1;
    int i=1;
    int j=0;

    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            platforms++;
            i++;
        }
        else if(dep[j]<arr[i])
        {
            platforms--;
            j++;
        }
        if (platforms > result)
            result = platforms;
    }
    return result;
}

int main()
{
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findPlatform(arr, dep, n) << endl;
    return 0;
}