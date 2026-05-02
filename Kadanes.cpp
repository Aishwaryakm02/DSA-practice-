#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {1, -2, 3, 4, -1};
    int n = 5;

    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++) {
        currSum += arr[i];

        if(currSum > maxSum) {
            maxSum = currSum;
        }

        if(currSum < 0) {
            currSum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum;

    return 0;
}
