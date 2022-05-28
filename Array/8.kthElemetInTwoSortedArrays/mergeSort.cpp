#include<iostream>
#include<vector>
using namespace std;

int kthElement(vector<int> arr1, vector<int> arr2, int k, int n1, int n2)
{
    int i=0; int j=0;
    int count=0;
    vector<int> mergedArray(n1+n2,0);
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            mergedArray[count] = arr1[i];
            count++;
            i++;
        }
        else
        {
            mergedArray[count] = arr2[j];
            count++;
            j++;
        }
    }
    while(i<n1)
    {
        mergedArray[count] = arr1[i];
        count++;
        i++;
    }
    while(j<n2)
    {
        mergedArray[count] = arr2[j];
        count++;
        j++;
    }
    return mergedArray[k-1];
}

int main()
{
    int n1,n2,k;
    cin>>n1;
    vector<int> arr1(n1,0);
    for(int i=0; i<n1; i++)
        cin>>arr1[i];
    
    cin>>n2;
    vector<int> arr2(n2,0);
    for(int i=0; i<n2; i++)
        cin>>arr2[i];
    
    cin>>k;
    cout<<"kth element is: "<<kthElement(arr1,arr2,k,n1,n2)<<endl;
}