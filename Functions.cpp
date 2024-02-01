#include "Functions.h"

void displayArray(char arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
        char temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
