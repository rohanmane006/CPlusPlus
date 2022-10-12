#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> arr = {7, 8, 1, 5, 4, 6, 1, 2, 3, 6, 5, 4, 3};
   int n = arr.size();
   // first selects the smallest number and after
   // selection of smallest element of array swapping precedes.

   for (int i = 0; i < n - 1; i++)
   {
      int indexOfSmall = i;
      for (int j = i + 1; j < n; j++)
      {
         if (arr[indexOfSmall] > arr[j])
            indexOfSmall = j;
      }
      swap(arr[i], arr[indexOfSmall]);
   }

   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }

   return 0;
}