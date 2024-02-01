#include <iostream>
#include <Windows.h>
#include <algorithm>
#include <vector>

#include "Functions.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ������� ������ ���������� ���� char
    char arr[] = { 'd', 'b', 'a', 'c', 'e', 'g', 'f' };
    // ��������� ���������� ���������
    int size = sizeof(arr) / sizeof(arr[0]);
    // ������������� ������ ��� ��������� ������
    char key = 'd';

    cout << "\t~~���������� �������~~" << endl;
    cout << "---------------------------------------------------" << endl;

    cout << "�������� ������: ";
    displayArray(arr, size);

    // ����� ���������� �������
    selectionSort(arr, size);

    cout << "��������������� ������: ";
    displayArray(arr, size);

    cout << "---------------------------------------------------\n\n" << endl;

    // �������������� ��������� �������
    char originalArr[] = { 'd', 'b', 'a', 'c', 'e', 'g', 'f' };
    for (int i = 0; i < size; i++) 
    {
        arr[i] = originalArr[i];
    }

    cout << "\t~~������� ���������� �����~~" << endl;
    cout << "---------------------------------------------------" << endl;

    cout << "�������� ������: ";
    displayArray(arr, size);

    // ����� ������� ����������
    quickSort(arr, 0, size - 1);

    cout << "��������������� ������: ";
    displayArray(arr, size);

    cout << "---------------------------------------------------\n\n" << endl;

    cout << "\t~~�������� �����~~" << endl;
    cout << "---------------------------------------------------" << endl;

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        cout << "������� " << key << " ������ �� ������� " << result << endl;
    }
    else {
        cout << "������� " << key << " �� ������" << endl;
    }

    cout << "---------------------------------------------------\n\n" << endl;

    cout << "\t~~���������� � �������� ����� (STL)~~" << endl;
    cout << "---------------------------------------------------" << endl;

    // ������� ������ ��� �������� ���������
    vector<char> vec = { 'd', 'b', 'a', 'c', 'e', 'g', 'f' };
    char target = 'd';

    cout << "�������� ������: ";
    displayVector(vec);

    // ���������� ������� � �������������� ������� �� STL
    sort(vec.begin(), vec.end());

    cout << "��������������� ������: ";
    displayVector(vec);

    // �������� ����� � ��������������� ������� � �������������� ������� �� STL
    bool found = binary_search(vec.begin(), vec.end(), target);

    if (found) {
        cout << "������� " << target << " ������ � �������" << endl;
    }
    else {
        cout << "������� " << target << " �� ������ � �������" << endl;
    }

    cout << "---------------------------------------------------\n\n" << endl;

    return 0;
}