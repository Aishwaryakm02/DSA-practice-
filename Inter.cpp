#include <iostream>
using namespace std;

int main() {
    int n1 = 5, n2 = 5;

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {3, 4, 5, 6, 7};

    cout << "Intersection elements are: ";

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}
