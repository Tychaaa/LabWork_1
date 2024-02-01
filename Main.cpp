#include <iostream>
#include <Windows.h>
#include "Functions.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char arr[] = { 'd', 'b', 'a', 'c', 'e', 'g', 'f' };
    int size = sizeof(arr) / sizeof(arr[0]);
    char target = 'd';

    cout << "»сходный массив: ";
    displayArray(arr, size);

    selectionSort(arr, size);

    quickSort(arr, 0, size - 1);

    cout << "ќтсортированный массив: ";
    displayArray(arr, size);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Ёлемент " << target << " найден на позиции " << result << endl;
    }
    else {
        cout << "Ёлемент " << target << " не найден" << endl;
    }

    return 0;
}