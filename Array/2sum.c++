// Problem: Given an array of integers, find two numbers such that they add up to a specific target number.
#include <bits/stdc++.h>
using namespace std;

pair<int, int> twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return {arr[left], arr[right]};
        }
        else if (sum < target) left++;
        else right--;
    }
    return {-1, -1};  // use this to indicate "NO"
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    pair<int, int> ans = twoSum(n, arr, target);

    if (ans.first == -1) {
        cout << "This is the answer for variant 1: NO" << endl;
    } else {
        cout << "This is the answer for variant 1: "
             << ans.first << " + " << ans.second << " = " << target << endl;
    }

    return 0;
}
