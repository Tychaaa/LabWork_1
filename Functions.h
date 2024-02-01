#pragma once
#include <iostream>
#include <vector>

using namespace std;

// Вывод массива в консоль
void displayArray(char arr[], int size);

// Функция для отображения элементов вектора
void displayVector(const vector<char>& vec);

// Функция обмена значений двух переменных
void swap(char& a, char& b);

// Простой метод сортировки (сортировка выбором)
void selectionSort(char arr[], int n);

// Улучшенный метод сортировки (Быстрая сортировка Хоара)
void quickSort(char arr[], int leftIndex, int rightIndex);

// Бинарный поиск
int binarySearch(char arr[], int size, char target);