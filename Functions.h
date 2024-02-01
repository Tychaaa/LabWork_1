#pragma once
#include <iostream>

using namespace std;

// ����� ������� � �������
void displayArray(char arr[], int size);

// ������� ������ �������� ���� ����������
void swap(char& a, char& b);

// ������� ����� ���������� (���������� �������)
void selectionSort(char arr[], int n);

// ���������� ����� ���������� (������� ���������� �����)
void quickSort(char arr[], int leftIndex, int rightIndex);

// �������� �����
int binarySearch(char arr[], int size, char target);