#include "Functions.h"

// Вывод массива в консоль
void displayArray(char arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Функция для отображения элементов вектора
void displayVector(const vector<char>& vec) {
    for (char elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
}

// Функция обмена значений двух переменных
void swap(char& a, char& b) 
{
    char temp = a;
    a = b;
    b = temp;
}

// Простой метод сортировки (Сортировка выбором)
void selectionSort(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // Находим индекс минимального элемента и сохраняем его значение
        int minIndex = i;

        // Проходим по оставшимся элементам, чтобы найти минимальный элемент
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                // Если находим элемент, меньший, чем текущий минимальный,
                // обновляем индекс минимального элемента
                minIndex = j;
            }
        }

        // Обмениваем минимальный элемент с текущим элементом на позиции i
        swap(arr[i], arr[minIndex]);
    }
}

// Улучшенный метод сортировки (Быстрая сортировка Хоара)
void quickSort(char arr[], int leftIndex, int rightIndex) 
{
    // Индексы указывают на начало и конец текущего сегмента массива
    int i = leftIndex, j = rightIndex;
    // Выбираем средний элемент в качестве опорного
    char pivot = arr[(leftIndex + rightIndex) / 2];

    // Цикл пока левый индекс не превышает правый
    while (i <= j) 
    {
        // Находим элемент справа от опорного, который меньше опорного
        while (arr[i] < pivot) i++;
        // Находим элемент слева от опорного, который больше опорного
        while (arr[j] > pivot) j--;

        // Если найдены элементы для обмена
        if (i <= j) 
        {
            // Обмениваем элементы и двигаем индексы
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    // Рекурсивно сортируем левую и правую части
    if (leftIndex < j)
        quickSort(arr, leftIndex, j);
    if (i < rightIndex)
        quickSort(arr, i, rightIndex);
}

// Бинарный поиск
int binarySearch(char arr[], int size, char key)
{
    int left = 0;          // Индекс левой границы текущего интервала
    int right = size - 1;  // Индекс правой границы текущего интервала

    // Пока левая граница не превышает правую
    while (left <= right)
    {
        // Вычисляем середину интервала
        int mid = left + (right - left) / 2;

        // Если элемент найден, возвращаем его индекс
        if (arr[mid] == key)
        {
            return mid;  
        }
        // Если элемент в правой половине, сдвигаем левую границу
        else if (arr[mid] < key)
        {
            left = mid + 1;  
        }
        // Если элемент в левой половине, сдвигаем правую границу
        else
        {
            right = mid - 1; 
        }
    }

    return -1; // Элемент не найден
}