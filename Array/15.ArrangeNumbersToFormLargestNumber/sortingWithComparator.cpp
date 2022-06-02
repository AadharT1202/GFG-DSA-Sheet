#include<iostream>
#include<string>
#include<vector>
using namespace std;

int myCompare(string x, string y)
{
    string xy = x.append(y);
    string yx = y.append(x);

    return xy.compare(yx) > 0 ? 1 : 0;
}

void printLargest(vector<string> arr, int n)
{
    sort(arr.begin(),arr.end(),myCompare);
    for(int i=0; i<n; i++)
        cout<<arr[i];
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<string> arr(n,"");
    for(int i=0; i<n; i++)
        cin>>arr[i];
    printLargest(arr,n);
    return 0;
}