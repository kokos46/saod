#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include "Functions.h"
#include <algorithm>
#include <cmath>

void FillInc(int mass[], int n) {
    for (int i = 0; i < n; i++) {
        mass[i] = i;
    }
}

int CheckSum(int mass[], int n) {
    int check_sum = 0;

    for (int i = 0; i < n; i++) {
        check_sum += mass[i];
    }

    return check_sum;
}

void PrintMas(int mass[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << mass[i] << " ";
    }
    std::cout << "\n";
}

int RunNumber(int mass[], int n) {
    int count = 1;
    for (int i = 0; i < n - 1; i++) {
        if (mass[i + 1] < mass[i]) {
            count++;
        }
    }
    return count;
}

void FillDec(int mass[], int n) {
    for (int i = 0; i < n; i++) {
        mass[i] = n - i;
    }
}

void FillRand(int mass[], int n) {
    for (int i = 0; i < n; i++) {
        mass[i] = rand() % 100;
    }
}

double AvgLen(int mass[], int n) {
    std::vector<int> lengths;
    int len = 0;

    for (int i = 0; i < n - 1; i++) {
        if (mass[i + 1] < mass[i]) {
            lengths.push_back(len);
            len = 0;
        }
        len++;
    }

    int sum = 0;
    for (int i = 0; i < lengths.size(); i++) {
        sum += lengths.at(i);
    }

    return sum / lengths.size();
}

void SelectSortUpgr(int mass[], int n, int& M, int& C) {
    for (int i = 0; i < n - 1; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            C++;
            if (mass[j] < mass[k]) {
                k = j;
            }
        }

        if (i != k) {
            std::swap(mass[i], mass[k]);
            M += 3;
        }
    }
}

void SelectSort(int mass[], int n, int& M, int& C) {
    M = 0;
    C = 0;
    for (int i = 0; i < n - 1; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            C++;
            if (mass[j] < mass[k]) {
                k = j;
            }
        }

        std::swap(mass[i], mass[k]);
        M += 3;
    }
}

void BubbleSort(int mass[], int n, int& m, int& c) {
    m = 0;
    c = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            c++;
            if (mass[j] < mass[j - 1]) {
                std::swap(mass[j], mass[j - 1]);
                m += 3;
            }
        }
    }
}

void ShakerSort(int mass[], int n, int& m, int& c) {
    m = 0;
    c = 0;
    int L = 0;
    int R = n - 1;
    int k = n - 1;
    bool swapped;

    while (L < R) {
        swapped = false;

        for (int j = L; j < R; j++) {
            c++;
            if (mass[j] > mass[j + 1]) {
                std::swap(mass[j], mass[j + 1]);
                m += 3;
                k = j;
                swapped = true;
            }
        }

        if (!swapped) break;

        R = k;

        swapped = false;

        for (int j = R; j > L; j--) {
            c++;
            if (mass[j] < mass[j - 1]) {
                std::swap(mass[j], mass[j - 1]);
                m += 3;
                k = j;
                swapped = true;
            }
        }

        if (!swapped) break;

        L = k;
    }
}

void InsertSort(int mass[], int n, int& m, int& c) {
    m = 0; c = 0;
    int t; int j;
    for (int i = 1; i < n; i++){
        t = mass[i]; j = i - 1;
        c++;
        while (j >= 0 && t < mass[j]) {
            mass[j + 1] = mass[j]; m++;
            j--;
            c++;
        }

        if (j >= 0) {
            c++;
        }

        mass[j + 1] = t; m++;
    }
}

void MakeData(std::string sortName, int massive[], int m, int c, void (*func)(int mass[], int n, int& m, int& c)) {
    std::cout << sortName << std::endl;
    FillRand(massive, 10);
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << std::endl;
    func(massive, 10, m, c);
    std::cout << "Sorted: ";
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << "Mf = " << m << " Cf = " << c << std::endl;
    std::cout << std::endl;

    FillInc(massive, 10);
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << std::endl;
    func(massive, 10, m, c);
    std::cout << "Sorted: ";
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << "Mf = " << m << " Cf = " << c << std::endl;
    std::cout << std::endl;

    FillDec(massive, 10);
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << std::endl;
    func(massive, 10, m, c);
    std::cout << "Sorted: ";
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << "Mf = " << m << " Cf = " << c << std::endl;
    std::cout << std::endl;
}

void MakeDataShell(std::string sortName, int massive[], int m, int c, void (*func)(int mass[], int n, int& m, int& c)) {
    std::cout << sortName << std::endl;
    FillRand(massive, 10);
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << std::endl;
    func(massive, 10, m, c);
    std::cout << "Sorted: ";
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << "Mf = " << m << " Cf = " << c << std::endl;
    std::cout << std::endl;

    FillInc(massive, 10);
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << std::endl;
    func(massive, 10, m, c);
    std::cout << "Sorted: ";
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << "Mf = " << m << " Cf = " << c << std::endl;
    std::cout << std::endl;

    FillDec(massive, 10);
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << std::endl;
    func(massive, 10, m, c);
    std::cout << "Sorted: ";
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << "Mf = " << m << " Cf = " << c << std::endl;
    std::cout << std::endl;
}

void ShellSort(int mass[], int n, int& m, int& c) {
    m = 0;
    c = 0;

    std::vector<int> gaps = KnuthSeq(n);

    for (int gap : gaps) {
        for (int i = gap; i < n; i++) {
            int t = mass[i];  m++;
            int j = i - gap;

            while (j >= 0 && t < mass[j]) {
                c += 2;
                mass[j + gap] = mass[j]; m++;
                j -= gap;
            }

            c++;
            mass[j + gap] = t;
            m++;
        }
    }
}

std::vector<int> KnuthSeq(int n) {
    std::vector<int> sequence;
    int h = 1;
    int m = log2(n) - 1;

    for (int i = 1; i < m; i++) {
        sequence.push_back(h);
        h = 2 * sequence.at(i - 1) + 1;
    }

    if (h <= n) {
        sequence.push_back(h);
    }

    std::reverse(sequence.begin(), sequence.end());
    return sequence;
}



bool less(const abonent& x, const abonent& y, SortKey key, SortDirection dir) {
    const int direction = (dir == SortDirection::ASCENDING) ? 1 : -1;

    switch (key) {
        case SortKey::NAME_PHONE:
            if (x.name != y.name)
                return (x.name < y.name) * direction > 0;
        return (x.phone < y.phone) * direction > 0;

        case SortKey::PHONE_NAME:
            if (x.phone != y.phone)
                return (x.phone < y.phone) * direction > 0;
        return (x.name < y.name) * direction > 0;

        case SortKey::ID_NAME:
            if (x.id != y.id)
                return (x.id < y.id) * direction > 0;
        return (x.name < y.name) * direction > 0;
    }
    return false;
}

// Функция сортировки вставками
void insertSort(abonent arr[], int n, SortKey key, SortDirection dir) {
    for (int i = 1; i < n; ++i) {
        abonent temp = arr[i];
        int j = i - 1;

        // Compare and shift elements based on the sorting criteria
        while (j >= 0 && less(temp, arr[j], key, dir)) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

// Функция вывода справочника
void printUsers(const abonent arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "ID: " << arr[i].id << ", Name: " << arr[i].name
                  << ", Phone: " << arr[i].phone << ", Born Day: " << arr[i].bornDay << "\n";
    }
}

void phonesSort(int namesIndexArr[], int phonesIndexArr[], Record arr[], int n) {
    for (int i = 1; i < n; i++) {
        int t = namesIndexArr[i];
        int j = i - 1;
        while (j >= 0 && arr[t].name < arr[namesIndexArr[j]].name) {
            namesIndexArr[j + 1] = namesIndexArr[j];
            j--;
        }
        namesIndexArr[j + 1] = t;
    }

    for (int i = 1; i < n; i++) {
        int t = phonesIndexArr[i];
        int j = i - 1;
        while (j >= 0 && arr[t].name < arr[phonesIndexArr[j]].name) {
            phonesIndexArr[j + 1] = phonesIndexArr[j];
            j--;
        }
        phonesIndexArr[j + 1] = t;
    }
}