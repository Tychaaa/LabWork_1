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

    cout << "�������� ������: ";
    displayArray(arr, n);

    selectionSort(arr, n);

    cout << "��������������� ������: ";
    displayArray(arr, n);

    return 0;
}