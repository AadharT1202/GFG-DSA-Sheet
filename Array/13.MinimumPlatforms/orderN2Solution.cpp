#include <iostream>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    int plat_needed = 1, result = 1;
    int i = 1, j = 0;
 
    for (int i = 0; i < n; i++) {
        plat_needed = 1;
 
        for (int j = i + 1; j < n; j++) {
            if (max(arr[i], arr[j]) <= min(dep[i], dep[j]))
                plat_needed++;
        }
        result = max(result, plat_needed);
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