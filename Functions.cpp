#include "Functions.h"

// ����� ������� � �������
void displayArray(char arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ������� ������ �������� ���� ����������
void swap(char& a, char& b) 
{
    char temp = a;
    a = b;
    b = temp;
}

// ������� ����� ���������� (���������� �������)
void selectionSort(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // ������� ������ ������������ �������� � ��������� ��� ��������
        int minIndex = i;
        char minValue = arr[i];

        // �������� �� ���������� ���������, ����� ����� ����������� �������
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < minValue)
            {
                // ���� ������� �������, �������, ��� ������� �����������,
                // ��������� ������ ������������ �������� � ��� ��������
                minIndex = j;
                minValue = arr[j];
            }
        }

        // ���������� ����������� ������� � ������� ��������� �� ������� i
        swap(arr[i], arr[minIndex]);
    }
}

// ���������� ����� ���������� (������� ���������� �����)
void quickSort(char arr[], int leftIndex, int rightIndex) 
{
    // ������� ��������� �� ������ � ����� �������� �������� �������
    int i = leftIndex, j = rightIndex;
    // �������� ������� ������� � �������� ��������
    char middle_element = arr[(leftIndex + rightIndex) / 2];

    // ���� ���� ����� ������ �� ��������� ������
    while (i <= j) 
    {
        // ������� ������� ������ �� ��������, ������� ������ ��������
        while (arr[i] < middle_element) i++;
        // ������� ������� ����� �� ��������, ������� ������ ��������
        while (arr[j] > middle_element) j--;

        // ���� ������� �������� ��� ������
        if (i <= j) 
        {
            // ���������� �������� � ������� �������
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    // ���������� ��������� ����� � ������ �����
    if (leftIndex < j)
        quickSort(arr, leftIndex, j);
    if (i < rightIndex)
        quickSort(arr, i, rightIndex);
}