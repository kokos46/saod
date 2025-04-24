#pragma once

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void FillInc(int mass[], int n);
void FillDec(int mass[], int n);
void FillRand(int mass[], int n);
int CheckSum(int mass[], int n);
int RunNumber(int mass[], int n);
void PrintMas(int mass[], int n);
double AvgLen(int mass[], int n);
void SelectSort(int mass[], int n, int&, int&);
void SelectSortUpgr(int mass[], int n, int&, int&);
void BubbleSort(int mass[], int n, int&, int&);
void ShakerSort(int mass[], int n, int&, int&);
void InsertSort(int mass[], int n, int&, int&);
void MakeData(std::string sortName, int massive[], int m, int c, void (*func)(int mass[], int n, int& m, int& c));
void ShellSort(int mass[], int n, int&, int&);
void MakeDataShell(std::string sortName, int massive[], int m, int c, void (*func)(int mass[], int n, int& m, int& c));
std::vector<int> KnuthSeq(int n);

template <typename ArrayT, typename KeyT>
void CustomBinarySearch1(ArrayT mass[], KeyT key, int size, int& c) {
    c = 0;
    int L = 0, R = size - 1;
    bool isFound = false;
    while (L <= R) {
        c++;

        int m = L + (R - L) / 2;

        c++;
        if (mass[m] == key) {
            isFound = true;
            std::cout << mass[m] << " index: " << m << " c = " << c << std::endl;
            return;
        }

        c++;
        if (mass[m] < key) L = m + 1;
        else R = m - 1;
    }
    std::cout << "Element not found c = " << c << std::endl;
}

template <typename ArrayT, typename KeyT>
void CustomBinarySearch2(ArrayT mass[], KeyT key, int size, int& c) {
    c = 0;
    int L = 0, R = size - 1;
    bool isFound = false;
    while (L < R) {

        int m = L + (R - L) / 2;

        c++;
        if (mass[m] < key) {
            L = m + 1;
        }
        else R = m;
    }

    c++;
    if (mass[L] == key) {
        isFound = true;
        std::cout << mass[L] << " index: " << L << " c = " << c << std::endl;
    }
    else {
        isFound = false;
        std::cout << "Element not found c = " << c << std::endl;
    }
}

struct abonent {
    int id{};
    std::string name;
    long long phone{};
    int bornDay{};
};

// Перечисление для ключей сортировки
enum class SortKey {
    NAME_PHONE,
    PHONE_NAME,
    ID_NAME
};

// Перечисление для направления сортировки
enum class SortDirection {
    ASCENDING,
    DESCENDING
};
void insertSort(abonent arr[], int n, SortKey key, SortDirection dir);
void printUsers(const abonent arr[], int n);

typedef struct {
    int id;
    long long phone;
    std::string name;
    std::string lastname;
} Record;

void phonesSort(int namesIndexArr[], int phonesIndexArr[], Record arr[], int n);

void BuildHeap(int sequence[], const int size, int& M, int& C);
void HeapSort(int sequence[], int n, int& M, int& C);

void quicksort2(int mass[], int L, int R, int& m, int& c, int depth, int& maxDepth);
void quicksort(int arr[], int L, int R, int& M, int& C, int depth, int& maxDepth);
void MakeDataQuick(std::string sortName, int massive[], int m, int c, void (*func)(int mass[], int L, int R, int& m, int& c, int depth, int& maxDepth));

#endif