#include "Functions.h"

void displayArray(char arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Простой метод сортировки (сортировка выбором)
void selectionSort(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // Находим индекс минимального элемента и сохраняем его значение
        int minIndex = i;
        char minValue = arr[i];

        // Проходим по оставшимся элементам, чтобы найти минимальный элемент
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < minValue)
            {
                // Если находим элемент, меньший, чем текущий минимальный,
                // обновляем индекс минимального элемента и его значение
                minIndex = j;
                minValue = arr[j];
            }
        }

        // Обмениваем минимальный элемент с текущим элементом на позиции i
        char temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
