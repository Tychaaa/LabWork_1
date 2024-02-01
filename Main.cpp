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

    cout << "Исходный массив: ";
    displayArray(arr, size);

    selectionSort(arr, size);

    /*quickSort(arr, 0, size - 1);*/

    cout << "Отсортированный массив: ";
    displayArray(arr, size);

    return 0;
}