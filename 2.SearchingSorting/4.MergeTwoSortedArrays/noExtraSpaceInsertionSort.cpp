#include<iostream>
using namespace std;
 
void mergeArrays(int arr1[], int arr2[], int n1, int n2)
{
    int i=0;
    for(int j=0; j<n2; j++)
    {
        while(i<n1)
        {
            if(arr1[i]>arr2[j])
            {
                swap(arr1[i],arr2[j]);
                for(int k=j; k<n2-1; k++)
                {
                    if(arr2[k]>arr2[k+1])
                        swap(arr2[k],arr2[k+1]);
                    else
                        break;
                }
            }
            i++;
        }
        
    }
}
 
int main()
{
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0; i<n1; i++)
        cin>>arr1[i];
 
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0; i<n2; i++)
        cin>>arr2[i];

    mergeArrays(arr1, arr2, n1, n2);
    
    for(int i=0; i<n1; i++)
        cout<<arr1[i]<<" ";
    
    for(int i=0; i<n2; i++)
        cout<<arr2[i]<<" ";
 
    return 0;
}