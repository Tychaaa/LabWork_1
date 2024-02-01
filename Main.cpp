#include <iostream>
#include <Windows.h>
#include "Functions.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char arr[] = { 'd', 'b', 'a', 'c', 'e' };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Исходный массив: ";
    displayArray(arr, n);

    selectionSort(arr, n);

    cout << "Отсортированный массив: ";
    displayArray(arr, n);

    return 0;
}