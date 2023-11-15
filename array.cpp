#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

void findElementsWithSumCloseToZero(int arr[], int size) {
    if (size < 2) {
        std::cout << "Array size is too small to find two elements!" << std::endl;
        return;
    }

    int closestSum = INT_MAX;
    int closestA = 0, closestB = 0;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            int currentSum = arr[i] + arr[j];
            int absSum = abs(currentSum);

            if (absSum < abs(closestSum)) {
                closestSum = currentSum;
                closestA = arr[i];
                closestB = arr[j];
            }
        }
    }

    std::cout << "Two elements with the sum nearest to zero: " << closestA << " and " << closestB << std::endl;
}

int main() {
    int array[10];


    std::cout << "Enter 10 elements: ";
    for (int i = 0; i < 10; ++i) {
        std::cin >> array[i];
    }

    findElementsWithSumCloseToZero(array, 10);

    return 0;
}
