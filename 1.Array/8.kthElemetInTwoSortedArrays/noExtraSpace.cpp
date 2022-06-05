#include<iostream>
#include<vector>
using namespace std;

int kthElement(vector<int> arr1, vector<int> arr2, int k, int n1, int n2)
{
    int i=0; int j=0;
    int count = 0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            count++;
            if(count==k)
                return arr1[i];
            i++;
        }
        else
        {
            count++;
            if(count==k)
                return arr2[j];
            j++;
        }
    }
    while(i<n1)
    {
        count++;
        if(count==k)
            return arr1[i];
        i++;
    }
    while(j<n2)
    {
        count++;
        if(count==k)
            return arr2[j];
        i++;
    }
    return -1;
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