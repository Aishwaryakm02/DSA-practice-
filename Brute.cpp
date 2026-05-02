#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, -2, 3, 4, -1};
    int n = 5;

    int maxSum = INT_MIN;

    for(int st = 0; st < n; st++) {
        for(int end = st; end < n; end++) {
            
            int sum = 0;

            for(int i = st; i <= end; i++) {
                sum += arr[i];
            }

            if(sum > maxSum) {
                maxSum = sum;
            }
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum;

    return 0;
}
