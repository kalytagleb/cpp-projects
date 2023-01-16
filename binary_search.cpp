#include <iostream>
#include <vector>

int _bsearch(std::vector<int> numbers, int value) {
    int size = numbers.size();
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (value == numbers[mid]) {
            std::cout << value << "is located at index of " << mid << std::endl;
            return 0;
        }
        else if (value > numbers[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return 1;
}

void square_brute_force (double a) {
    
}

int main() {
    std::vector<int> numbres = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    _bsearch(numbers, 3);
    system("PAUSE");
    return 0;
}