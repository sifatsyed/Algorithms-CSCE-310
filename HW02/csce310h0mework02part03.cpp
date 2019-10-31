#include "csce310h0mework02part03.h"
#include <vector>
#include <iostream>

using namespace std;

int binarySearch(vector<int> numbers, int l, int r, int x)
{
  int comparison;
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (numbers.at(mid) == x){
          comparison++;
          cout << "COMPARISON smaller::" << comparison <<endl;
          int comparisonAve = comparison/numbers.size();
          cout << "COMPARISON AVERAGE::" << comparisonAve <<endl;
          return mid;
         }
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (numbers.at(mid) > x){
          comparison++;
          cout << "COMPARISON larger::" << comparison <<endl;
          int comparisonAve = comparison/numbers.size();
          cout << "COMPARISON AVERAGE::" << comparisonAve <<endl;
          return binarySearch(numbers, l, mid - 1, x);
          }

        // Else the element can only be present
        // in right subarray
        comparison++;
        int comparisonAve = comparison/numbers.size();
        cout << "COMPARISON AVERAGE::" << comparisonAve <<endl;
        cout << "COMPARISON out::" << comparison <<endl;
        return binarySearch(numbers, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

double averageComparisons( vector<int> numbers )
{
  return -1.0;
}

int main(void)
{
    //int arr[] = { 2, 3, 4, 10, 40 };

      vector<int> numbers;
    //  vector<int> sign;
      //1 23 30 35 40 48 51 57 66 67 69 70 85 95 99 100

      numbers.push_back(1);
      numbers.push_back(23);
      numbers.push_back(30);
      numbers.push_back(35);
      numbers.push_back(40);
      numbers.push_back(48);
      numbers.push_back(51);
      numbers.push_back(57);
      numbers.push_back(66);
      numbers.push_back(67);
      numbers.push_back(69);
      numbers.push_back(70);
      numbers.push_back(85);
      numbers.push_back(95);
      numbers.push_back(99);
      numbers.push_back(100);
    //  numbers.push_back(57);

      int n = numbers.size();
      int x = 100;
      int result = binarySearch(numbers, 0, n - 1, x);
      (result == -1) ? cout << "Element is not present in array" <<endl : cout << "Element is present at index " << result << endl;
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int x = 10;
    // int result = binarySearch(arr, 0, n - 1, x);
    // (result == -1) ? printf("Element is not present in array")
    //                : printf("Element is present at index %d",
    //                         result);
    // return 0;
}
