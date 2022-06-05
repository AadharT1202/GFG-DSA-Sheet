#include<iostream>
#include<vector>
using namespace std;
void alternateSort(vector<int> &arr, int n)
{
    vector<int> vec;
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        vec.push_back(arr[j--]);
        vec.push_back(arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    alternateSort(arr,n);
}