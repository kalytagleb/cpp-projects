#include <iostream>
#include <string>
using namespace std;

int main() {
    const int size = 5;
    int arr[size] {4, 55, 60, 1, 8};

    for (int i = 0; i < size; i++) {
        cout << *(arr+i) << endl;
    }
    cout << "===================" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
    cout << "===================" << endl;

    int *pArr = arr;
    for (int i = 0; i < size; i++) {
        cout << pArr[i] << endl;
    }
}