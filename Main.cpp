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

    cout << "�������� ������: ";
    displayArray(arr, size);

    selectionSort(arr, size);

    quickSort(arr, 0, size - 1);

    cout << "��������������� ������: ";
    displayArray(arr, size);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "������� " << target << " ������ �� ������� " << result << endl;
    }
    else {
        cout << "������� " << target << " �� ������" << endl;
    }

    return 0;
}