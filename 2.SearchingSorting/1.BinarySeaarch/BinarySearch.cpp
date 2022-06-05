#include <iostream>
#include <vector>
using namespace std;
int
binarySearch (vector < int >arr, int n, int x)
{
  int low = 0;
  int high = n - 1;
  while (low <= high)
    {
      int mid = (high + low) / 2;
      if (arr[mid] == x)
	return 1;
      else if (arr[mid] > x)
	high = mid - 1;
      else
	low = mid + 1;
    }
  return 0;
}

int
main ()
{
  int n;
  cin >> n;
  vector < int >arr (n, 0);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int x;
  cin >> x;
  int ans = binarySearch (arr, n, x);
  if (ans == 1)
    cout << "Found";
  else
    cout << "Not Found";
}

