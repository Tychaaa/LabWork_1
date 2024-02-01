#include <iostream>
#include <Windows.h>
#include "Functions.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Создаем массив переменных типа char
    char arr[] = { 'd', 'b', 'a', 'c', 'e', 'g', 'f' };
    // Вычисляем количество элементов
    int size = sizeof(arr) / sizeof(arr[0]);
    // Устанавливаем символ для бинарного поиска
    char key = 'd';

    cout << "\t~~Сортировка выбором~~" << endl;
    cout << "-------------------------------------------" << endl;

    cout << "Исходный массив: ";
    displayArray(arr, size);

    // Вызов сортировки выбором
    selectionSort(arr, size);

    cout << "Отсортированный массив: ";
    displayArray(arr, size);

    cout << "-------------------------------------------\n\n" << endl;

    // Восстановление исходного массива
    char originalArr[] = { 'd', 'b', 'a', 'c', 'e', 'g', 'f' };
    for (int i = 0; i < size; i++) 
    {
        arr[i] = originalArr[i];
    }

    cout << "\t~~Быстрая сортировка Хоара~~" << endl;
    cout << "-------------------------------------------" << endl;

    cout << "Исходный массив: ";
    displayArray(arr, size);

    // Вызов быстрой сортировки
    quickSort(arr, 0, size - 1);

    cout << "Отсортированный массив: ";
    displayArray(arr, size);

    cout << "-------------------------------------------\n\n" << endl;

    cout << "\t~~Бинарный поиск~~" << endl;
    cout << "-------------------------------------------" << endl;

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        cout << "Элемент " << key << " найден на позиции " << result << endl;
    }
    else {
        cout << "Элемент " << key << " не найден" << endl;
    }

    cout << "-------------------------------------------\n\n" << endl;

    return 0;
}