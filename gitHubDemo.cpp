#include<iostream>
using namespace std;

int main() {
    int arr1[10], arr2[10], mergedArr[20];
    int temp;

    cout << "Enter 10 elements of the FIRST array: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr1[i];
    }

    cout << "Enter 10 elements of the SECOND array: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr2[i];
    }
    
    for (int i = 0; i < 10; i++) {
        mergedArr[i] = arr1[i];
        mergedArr[i + 10] = arr2[i];
    }

    for (int i = 0; i < 20 - 1; i++) {
        for (int j = i + 1; j < 20; j++) {
            if (mergedArr[i] < mergedArr[j]) {
                temp = mergedArr[i];
                mergedArr[i] = mergedArr[j];
                mergedArr[j] = temp;
            }
        }
    }

    cout << "20 elements in descending order: ";
    for (int i = 0; i < 20; i++) {
        cout << mergedArr[i] << " ";
    }

    return 0;
}