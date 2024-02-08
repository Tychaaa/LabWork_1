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

// ������� ��� ����������� ��������� �������
void displayVector(const vector<char>& vec) {
    for (char elem : vec) {
        cout << elem << " ";
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

        // �������� �� ���������� ���������, ����� ����� ����������� �������
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                // ���� ������� �������, �������, ��� ������� �����������,
                // ��������� ������ ������������ ��������
                minIndex = j;
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
    char pivot = arr[(leftIndex + rightIndex) / 2];

    // ���� ���� ����� ������ �� ��������� ������
    while (i <= j) 
    {
        // ������� ������� ������ �� ��������, ������� ������ ��������
        while (arr[i] < pivot) i++;
        // ������� ������� ����� �� ��������, ������� ������ ��������
        while (arr[j] > pivot) j--;

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

// �������� �����
int binarySearch(char arr[], int size, char key)
{
    int left = 0;          // ������ ����� ������� �������� ���������
    int right = size - 1;  // ������ ������ ������� �������� ���������

    // ���� ����� ������� �� ��������� ������
    while (left <= right)
    {
        // ��������� �������� ���������
        int mid = left + (right - left) / 2;

        // ���� ������� ������, ���������� ��� ������
        if (arr[mid] == key)
        {
            return mid;  
        }
        // ���� ������� � ������ ��������, �������� ����� �������
        else if (arr[mid] < key)
        {
            left = mid + 1;  
        }
        // ���� ������� � ����� ��������, �������� ������ �������
        else
        {
            right = mid - 1; 
        }
    }

    return -1; // ������� �� ������
}