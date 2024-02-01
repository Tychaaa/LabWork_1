#pragma once
#include <iostream>
#include <vector>

using namespace std;

// ����� ������� � �������
void displayArray(char arr[], int size);

// ������� ��� ����������� ��������� �������
void displayVector(const vector<char>& vec);

// ������� ������ �������� ���� ����������
void swap(char& a, char& b);

// ������� ����� ���������� (���������� �������)
void selectionSort(char arr[], int n);

// ���������� ����� ���������� (������� ���������� �����)
void quickSort(char arr[], int leftIndex, int rightIndex);

// �������� �����
int binarySearch(char arr[], int size, char target);