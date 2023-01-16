#include <iostream>
using namespace std;

int main() {
    int size = 0;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
        cout << arr + i << endl;
    }
    delete [] arr;
}