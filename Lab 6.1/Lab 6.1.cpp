#include <iostream>
#include <ctime>
#include <cstdlib>

void generateArray(int b[], int size) {
    for (int i = 0; i < size; ++i) {
        b[i] = rand() % 81 + 10;
    }
}

void Output(int b[], int arraySize) {
    std::cout << "Modified Array: [";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << b[i];
        if (!(i == 20)) std::cout << " ";
    }
    std::cout << "]" << std::endl;
}
void computeCountAndSum(int b[], int size, int& count, int& sum) {
    count = 0;
    sum = 0;
    for (int i = 0; i < size; ++i) {
        if (!(b[i] % 2 != 0) || (!(b[i] % 3 == 0))) {
            count++;
            sum += b[i];
            b[i] = 0;
        }
    }
}

int main() {
    const int arraySize = 21;
    int b[arraySize];
    srand(time(0));

    generateArray(b, arraySize);
    std::cout << "Not ";
    Output(b, arraySize);
    int count, sum;
    computeCountAndSum(b, arraySize, count, sum);
    std::cout << "Count: " << count << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    Output(b, arraySize);
    std::cout << std::endl;

    return 0;
}
