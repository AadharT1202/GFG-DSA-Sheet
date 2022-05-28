#include<iostream>
#include<vector>
using namespace std;
void alternateSort(vector<int> &arr, int n)
{
    int maxi = n-1;
    int mini = 0;
    int me = arr[n-1] + 1;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            arr[i] = arr[i] + arr[maxi] % me * me;
            maxi--;
        }
        else
        {
            arr[i] = arr[i] + arr[mini] % me * me;
            mini++;
        }
    }
    for(int i=0; i<n; i++)
        arr[i] = arr[i]/me;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    alternateSort(arr,n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}