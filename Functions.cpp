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

void insertSort(abonent arr[], int n, SortKey key, SortDirection dir) {
    for (int i = 1; i < n; ++i) {
        abonent temp = arr[i];
        int j = i - 1;

        while (j >= 0 && less(temp, arr[j], key, dir)) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}


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

void MakeHeap(int sequence[], const int L, const int R, int& M, int& C) {
    // int x = sequence[L];
    // int i = L;
    //
    // while (true) {
    //     int j = 2 * i + 1; // Левый дочерний узел
    //     C++; // Счётчик сравнений
    //
    //     if (j > R) break; // Если нет дочерних узлов, выходим
    //
    //     C += 2; // Счётчик сравнений
    //     // Проверяем, есть ли правый дочерний узел и сравниваем
    //     if (j + 1 <= R && sequence[j + 1] > sequence[j]) {
    //         j++; // Переходим к правому дочернему узлу
    //     }
    //
    //     C++; // Счётчик сравнений
    //     if (x >= sequence[j]) break; // Если текущий узел больше или равен, выходим
    //
    //     sequence[i] = sequence[j]; // Перемещаем дочерний узел вверх
    //     M++; // Счётчик присваиваний
    //     i = j; // Переходим к следующему узлу
    // }
    // sequence[i] = x; // Вставляем элемент на его место
    // M++; // Счётчик присваиваний


    // M=0,C=0;
    // int X = sequence[L], i = L, j;
    // M++;
    // while (true)
    // {
    //     j = 2*i;
    //     if (j > R)
    //         break;
    //     C++;
    //     if ((j < R) && (sequence[j + 1] <= sequence[j]))
    //         j++;
    //     C++;
    //     if (X <= sequence[j])
    //         break;
    //     sequence[i] = sequence[j];
    //     M++;
    //     i = j;
    // }
    // sequence[i] = X;
    // M++;

    int x = sequence[L];
    int i = L;
    while (true) {
        int j = 2 * i;
        if (j > R)
            break;
        if (j < R) {
            if (sequence[j + 1] > sequence[j]) {
                C++;
                j = j + 1;
            }
        }
        if (x >= sequence[j]) {
            C++;
            break;
        }
        M++;
        sequence[i] = sequence[j];
        i = j;
    }
    if (i != L) {
        M++;
    }
    M++;
    sequence[i] = x;
}


void HeapSort(int sequence[], const int n, int& M, int& C) {
    M = 0;
    C = 0;
    int L = n / 2 - 1;

    while (L >= 0) {
        MakeHeap(sequence, L, n - 1, M, C);
        L--;
    }

    int R = n - 1;

    while (R > 0) {
        std::swap(sequence[0], sequence[R]);
        R--;
        MakeHeap(sequence, 0, R, M, C);
    }


    // int L = n/2, t; //шаг 1
    // while (L > 0){
    //     MakeHeap(sequence, L, n, M, C);
    //     L--;
    // }
    // int R=n; //шаг 2
    // while (R>1){
    //     t = sequence[1];
    //     sequence[1] = sequence[R];
    //     sequence[R] = t;
    //     M += 3;
    //     R--;
    //     MakeHeap(sequence, 1, R, M, C);
    // }
}

void BuildHeap(int sequence[], const int size, int& M, int& C) {
    M = 0; C = 0;
    for (int i = size / 2 - 1; i >= 0; i--) {
        MakeHeap(sequence, i, size - 1, M, C);
    }
}

// void quicksort(int arr[], int L, int R, int& m, int& c) {
//     if (L < R) {
//         int x = arr[L];  // Опорный элемент
//         int i = L;
//         int j = R;
//
//         while (i <= j) {
//             while (arr[i] < x) i++;
//             while (arr[j] > x) j--;
//
//             if (i <= j) {
//                 std::swap(arr[i], arr[j]);
//                 i++;
//                 j--;
//             }
//         }
//
//         if (L < j)
//             quicksort(arr, L, j, m, c);
//         if (j+1 < R)
//             quicksort(arr, j+1, R, m, c);
//     }
// }

void quicksort(int arr[], int L, int R, int& M, int& C, int depth, int& maxDepth) {

    int i, j;
    int x; // Опорный элемент

    i = L;
    j = R;

    x = arr[L]; // Выбор опорного элемента как первого элемента

    // Обновляем максимальную глубину рекурсии
    if (depth > maxDepth) {
        maxDepth = depth;
    }

    while (i <= j) {
        while (arr[i] < x) {
            i++;
            C++;
        }

        while (arr[j] > x) {
            j--;
            C++;
        }

        C++;
        if (i <= j) {
            std::swap(arr[i], arr[j]);
            M++;
            i++;
            j--;
        }
    }

    if (L < j)
        quicksort(arr, L, j, M, C, depth + 1, maxDepth);
    if (i < R)
        quicksort(arr, i, R, M, C, depth + 1, maxDepth);
}

// void quicksort2(int arr[], int L, int R, int& M, int& C, int depth, int& maxDepth) {
//     int i, j; int x; // Опорный элемент
//
//     i = L;
//     j = R;
//     x = arr[(L + R) / 2]; // Выбор опорного элемента как среднего элемента
//
//     // Обновляем максимальную глубину рекурсии
//     if (depth > maxDepth) {
//         maxDepth = depth;
//     }
//
//     while (i <= j) {
//         while (arr[i] < x) {
//             i++;
//             C++;
//         }
//         C++;
//
//         while (arr[j] > x) {
//             j--;
//             C++;
//         }
//         C++;
//
//         if (i <= j) {
//             std::swap(arr[i], arr[j]);
//             M++;
//             i++;
//             j--;
//         }
//     }
//
//     if (L < j)
//         quicksort2(arr, L, j, M, C, depth + 1, maxDepth);
//     if (i < R)
//         quicksort2(arr, i, R, M, C, depth + 1, maxDepth);
// }

void quicksort2(int arr[], int L, int R, int& M, int& C, int depth, int& maxDepth) {
    int i, j;
    int x; // Опорный элемент
    if (depth > maxDepth) {
        maxDepth = depth;
    }

    do {
        // Выбор опорного элемента как среднего элемента
        x = arr[(L + R) / 2];
        i = L;
        j = R;

        while (i <= j) {
            while (arr[i] < x) {
                i++;
                C++;
            }
            C++;

            while (arr[j] > x) {
                j--;
                C++;
            }
            C++;

            if (i <= j) {
                std::swap(arr[i], arr[j]);
                M++;
                i++;
                j--;
            }
        }

        // Проверяем, какая часть длиннее
        if (j - L > R - i) {
            // Сортируем правую часть
            if (i < R) {
                quicksort2(arr, i, R, M, C, depth + 1, maxDepth);
            }
            R = j; // Обновляем R
        } else {
            // Сортируем левую часть
            if (L < j) {
                quicksort2(arr, L, j, M, C, depth + 1, maxDepth);
            }
            L = i; // Обновляем L
        }

        // Обновляем максимальную глубину рекурсии
        maxDepth++;
    } while (L < R);
}


void MakeDataQuick(std::string sortName, int massive[], int m, int c, void (*func)(int mass[], int L, int R, int& m, int& c, int depth, int& maxDepth)) {
    m = 0, c = 0; int maxDepth = 0;
    std::cout << sortName << std::endl;
    FillRand(massive, 10);
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << std::endl;
    func(massive, 0, 9, m, c, 1, maxDepth);
    std::cout << "Sorted: ";
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << "Mf = " << m << " Cf = " << c << std::endl;
    std::cout << std::endl;

    m = 0, c = 0;
    FillInc(massive, 10);
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << std::endl;
    func(massive, 0, 9, m, c, 1, maxDepth);
    std::cout << "Sorted: ";
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << "Mf = " << m << " Cf = " << c << std::endl;
    std::cout << std::endl;

    m = 0, c = 0;
    FillDec(massive, 10);
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << std::endl;
    func(massive, 0, 9, m, c, 1, maxDepth);
    std::cout << "Sorted: ";
    PrintMas(massive, 10);
    std::cout << "Series: " << RunNumber(massive, 10) << ", CheckSum: " << CheckSum(massive, 10) << std::endl;
    std::cout << "Mf = " << m << " Cf = " << c << std::endl;
    std::cout << std::endl;
}

