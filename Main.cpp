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
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "��������������� ������: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}