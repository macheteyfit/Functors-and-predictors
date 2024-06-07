#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include "RandomGenerator.h"

using namespace std;

template <class F>
void bubbleSort(vector<int>& vec, F compare) {
    for (size_t i = 0; i < vec.size() - 1; i++) { 
        for (size_t j = 0; j < vec.size() - i - 1; j++) {
            if (compare(vec[j], vec[j + 1])) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

bool less1(int x, int y) {
    return x < y;
}

bool greater1(int x, int y) {
    return x > y;
}

void printVector(const vector<int>& vec) { 
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

int main() {
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));

    int from, to;
    cout << "Введите первое число: ";
    cin >> from;
    cout << "Введите второе число: ";
    cin >> to;

    // создаём вектор vec размером 10
    vector<int> vec(10);

    // Заполняем вектор случайными числами в диапазоне от 'from' до 'to'
    for (int& i : vec) {
        i = rand() % (to - from + 1) + from; // Generate random numbers 'from' and 'to' (inclusive)
    }

    // ПЕЧАТЬ элементов вектора
    cout << "Исходный вектор: ";
    for (auto i : vec) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Original:\t";
    printVector(vec);

    bubbleSort(vec, greater1);
    cout << "Asc:\t";
    printVector(vec);

    bubbleSort(vec, less1);
    cout << "Desc:\t";
    printVector(vec);

    return 0;
}


/*

//int to, from;
//
//int gen() {
//	int i = rand() % (to - from - 1) + from;
//	return i;
//}
*/