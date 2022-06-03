#include<iostream>
#include<vector>
using namespace std;

int getSum(vector<int> arr1, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr1[i];
    return sum;
}
 
// Finds value of
// a - b = (sumA - sumB) / 2
int getTarget(vector<int> A, int n, vector<int> B, int m)
{
    // Calculation of sums from both arrays
    int sum1 = getSum(A, n);
    int sum2 = getSum(B, m);
 
    // because that the target must be an integer
    if ((sum1 - sum2) % 2 != 0)
        return 0;
    return ((sum1 - sum2) / 2);
}

void swappingPair(vector<int> A, int n, vector<int> B, int m)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
 
    // Note that target can be negative
    int target = getTarget(A, n, B, m);
 
    // target 0 means, answer is not possible
    if (target == 0)
        return;
 
    int i = 0, j = 0;
    while (i < n && j < m) {
        int diff = A[i] - B[j];
        if (diff == target) {
            cout << A[i] << " " << B[j];
            return;
        }
 
        else if (diff < target)
            i++;
 
        else
            j++;
    }
}
int main()
{
    int n,m;
    cin>>n;
    vector<int> arr1(n,0);
    cin>>m;
    vector<int> arr2(m,0);
    for(int i=0; i<n; i++)
        cin>>arr1[i];

    for(int j=0; j<m; j++)
        cin>>arr2[j];
    
    swappingPair(arr1,n,arr2,m);
}