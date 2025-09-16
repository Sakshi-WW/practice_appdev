#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(const vector<int>& arr, int target) {
int low = 0, high = arr.size() - 1;
while (low <= high) {
int mid = low + (high - low) / 2; // Prevents overflow
if (arr[mid] == target)
return true;
else if (arr[mid] < target)
low = mid + 1;
else
high = mid - 1;
}
return false;
}

int main() {
vector<int> arr = {1, 3, 5, 7, 9};
int target = 7;
if (binarySearch(arr, target))
cout << target << " found.\n";
else
cout << target << " NOT found.\n";
return 0;
}