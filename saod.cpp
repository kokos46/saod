#include <iostream>
#include <random>
#include <ctime>
#include <vector>
#include "Functions.h"
#include <iomanip>

int A[10];
int A2[10];
int n = 10;
int data10[6] = { 0 };
int data100[6] = { 0 };
int data200 = 0, data2[200];
int data300 = 0, data3[300];
int data400 = 0, data4[400];
int data500 = 0, data5[500];

int B[100];
int B2[100];

int bA[10], bM = 0, bC = 0;

int b1[100], b1data[3];
int b2[200], b2data[3];
int b3[300], b3data[3];
int b4[400], b4data[3];
int b5[500], b5data[3];

int sA[10], sM = 0, sC = 0;

int s1[100], s1data[3];
int s2[200], s2data[3];
int s3[300], s3data[3];
int s4[400], s4data[3];
int s5[500], s5data[3];

int iA[10], iM = 0, iC = 0;

int i1[100], i1data[3];
int i2[200], i2data[3];
int i3[300], i3data[3];
int i4[400], i4data[3];
int i5[500], i5data[3];

int shA[10], shM = 0, shC = 0;

int sh1[100], sh1data[3];
int sh2[200], sh2data[3];
int sh3[300], sh3data[3];
int sh4[400], sh4data[3];
int sh5[500], sh5data[3];
std::vector<int> h1;
std::vector<int> h2;
std::vector<int> h3;
std::vector<int> h4;
std::vector<int> h5;

int bsmass[10];
int bs1data[10];
int bs2data[10];

void copy(int A[], int B[], int n) {
    for (int i = 0; i < n; i++) {
        B[i] = A[i];
    }
}

int main() {
    srand(time(nullptr));

    //A 10
    int C1 = 0;
    int M1 = 0;
    std::cout << "FillInc: \n";
    FillInc(A, 10);
    copy(A, A2, 10);
    std::cout << "CheckSum: " << CheckSum(A, 10) << "\n";
    std::cout << "RunNumber: " << RunNumber(A, 10) << "\n";
    PrintMas(A, 10);
    SelectSort(A, 10, M1, C1);
    std::cout << "Sorted massive: ";
    PrintMas(A, 10);
    std::cout << "Sorted CheckSum: " << CheckSum(A, 10) << "\n";
    std::cout << "Sorted RunNumber: " << RunNumber(A, 10) << "\n";

    data10[2] = M1 + C1;


    std::cout << "Cf = " << C1 << " Mf = " << M1 << std::endl;
    std::cout << "C = 45  M = 27" << std::endl;
    std::cout << "\n";
    M1 = 0;
    C1 = 0;
    SelectSortUpgr(A2, 10, M1, C1);
    data10[5] = M1 + C1;

    int M2 = 0;
    int C2 = 0;
    std::cout << "FillDec: \n";
    FillDec(A, 10);
    copy(A, A2, 10);
    std::cout << "CheckSum: " << CheckSum(A, 10) << "\n";
    std::cout << "RunNumber: " << RunNumber(A, 10) << "\n";
    PrintMas(A, 10);
    SelectSort(A, 10, M2, C2);
    std::cout << "Sorted massive: ";
    PrintMas(A, 10);
    std::cout << "Sorted CheckSum: " << CheckSum(A, 10) << "\n";
    std::cout << "Sorted RunNumber: " << RunNumber(A, 10) << "\n";

    data10[0] = M2 + C2;

    std::cout << "Cf = " << C2 << " Mf = " << M2 << std::endl;
    std::cout << "C = 45  M = 27" << std::endl;
    std::cout << "\n";
    M2 = 0;
    C2 = 0;
    SelectSortUpgr(A2, 10, M2, C2);
    data10[3] = M2 + C2;

    int M3 = 0;
    int C3 = 0;
    std::cout << "FillRand: \n";
    FillRand(A, 10);
    copy(A, A2, 10);
    std::cout << "CheckSum: " << CheckSum(A, 10) << "\n";
    std::cout << "RunNumber: " << RunNumber(A, 10) << "\n";
    PrintMas(A, 10);
    SelectSort(A, 10, M3, C3);
    std::cout << "Sorted massive: ";
    PrintMas(A, 10);
    std::cout << "Sorted CheckSum: " << CheckSum(A, 10) << "\n";
    std::cout << "Sorted RunNumber: " << RunNumber(A, 10) << "\n";

    data10[1] = M3 + C3;

    std::cout << "Cf = " << C3 << " Mf = " << M3 << std::endl;
    std::cout << "C = 45  M = 27" << std::endl;
    std::cout << "\n";
    M3 = 0;
    C3 = 0;
    SelectSortUpgr(A2, 10, M3, C3);
    data10[4] = M3 + C3;

    //A 100
    C1 = 0;
    M1 = 0;
    std::cout << "FillInc: \n";
    FillInc(B, 100);
    copy(B, B2, 100);
    std::cout << "CheckSum: " << CheckSum(B, 100) << "\n";
    std::cout << "RunNumber: " << RunNumber(B, 100) << "\n";
    PrintMas(B, 100);
    SelectSort(B, 100, M1, C1);
    std::cout << "Sorted massive: ";
    PrintMas(B, 100);
    std::cout << "Sorted CheckSum: " << CheckSum(B, 100) << "\n";
    std::cout << "Sorted RunNumber: " << RunNumber(B, 100) << "\n";

    data100[2] = M1 + C1;

    std::cout << "Cf = " << C1 << " Mf = " << M1 << std::endl;
    std::cout << "C = 4950  M = 297" << std::endl;
    std::cout << "\n";

    M1 = 0;
    C1 = 0;
    SelectSortUpgr(B2, 100, M1, C1);
    data100[5] = M1 + C1;

    M2 = 0;
    C2 = 0;
    std::cout << "FillDec: \n";
    FillDec(B, 100);
    copy(B, B2, 100);
    std::cout << "CheckSum: " << CheckSum(B, 100) << "\n";
    std::cout << "RunNumber: " << RunNumber(B, 100) << "\n";
    PrintMas(B, 100);
    SelectSort(B, 100, M2, C2);
    std::cout << "Sorted massive: ";
    PrintMas(B, 100);
    std::cout << "Sorted CheckSum: " << CheckSum(B, 100) << "\n";
    std::cout << "Sorted RunNumber: " << RunNumber(B, 100) << "\n";

    data100[0] = M2 + C2;


    std::cout << "Cf = " << C2 << " Mf = " << M2 << std::endl;
    std::cout << "C = 4950  M = 297" << std::endl;
    std::cout << "\n";

    M2 = 0;
    C2 = 0;
    SelectSortUpgr(B2, 100, M2, C2);
    data100[3] = M2 + C2;

    M3 = 0;
    C3 = 0;
    std::cout << "FillRand: \n";
    FillRand(B, 100);
    copy(B, B2, 100);
    std::cout << "CheckSum: " << CheckSum(B, 100) << "\n";
    std::cout << "RunNumber: " << RunNumber(B, 100) << "\n";
    PrintMas(B, 100);
    SelectSort(B, 100, M3, C3);
    std::cout << "Sorted massive: ";
    PrintMas(B, 100);
    std::cout << "Sorted CheckSum: " << CheckSum(B, 100) << "\n";
    std::cout << "Sorted RunNumber: " << RunNumber(B, 100) << "\n";

    data100[1] = M3 + C3;

    std::cout << "Cf = " << C3 << " Mf = " << M3 << std::endl;
    std::cout << "C = 4950  M = 297" << std::endl;
    std::cout << "\n";

    M3 = 0;
    C3 = 0;
    SelectSortUpgr(B2, 100, M3, C3);
    data100[4] = M3 + C3;

    printf("+-----------+----------------+----------------+\n");
    printf("| N | M + C |   Isho M + C   |   Uluc M + C   |\n");
    printf("|   |       | Ubiv|Sluc|Vozr | Ubiv|Sluc|Vozr |\n");
    printf("+---+-------+-----+----+-----+-----+----+-----+\n");
    printf("| 10|   72  |%5d|%4d|%5d|%5d|%4d|%5d|n", data10[0], data10[1], data10[2], data10[3], data10[4], data10[5]);
    printf("+---+-------+-----+----+-----+-----+----+-----+\n");
    printf("|100| 5247  |%5d|%4d|%5d|%5d|%4d|%5d|\n", data100[0], data100[1], data100[2], data100[3], data100[4], data100[5]);
    printf("+---+-------+-----+----+-----+-----+----+-----+\n");
    std::cout << std::endl;
    std::cout << std::endl;


    // bubble sort
    std::cout << "BubbleSort" << std::endl;
    FillRand(bA, 10);
    PrintMas(bA, 10);
    std::cout << "Series: " << RunNumber(bA, 10) << ", CheckSum: " << CheckSum(bA, 10) << std::endl;
    std::cout << std::endl;
    BubbleSort(bA, 10, bM, bC);
    std::cout << "Sorted: ";
    PrintMas(bA, 10);
    std::cout << "Series: " << RunNumber(bA, 10) << ", CheckSum: " << CheckSum(bA, 10) << std::endl;
    std::cout << "Mf = " << bM << " Cf = " << bC << std::endl;
    std::cout << std::endl;

    FillInc(bA, 10);
    PrintMas(bA, 10);
    std::cout << "Series: " << RunNumber(bA, 10) << ", CheckSum: " << CheckSum(bA, 10) << std::endl;
    std::cout << std::endl;
    BubbleSort(bA, 10, bM, bC);
    std::cout << "Sorted: ";
    PrintMas(bA, 10);
    std::cout << "Series: " << RunNumber(bA, 10) << ", CheckSum: " << CheckSum(bA, 10) << std::endl;
    std::cout << "Mf = " << bM << " Cf = " << bC << std::endl;
    std::cout << std::endl;

    FillDec(bA, 10);
    PrintMas(bA, 10);
    std::cout << "Series: " << RunNumber(bA, 10) << ", CheckSum: " << CheckSum(bA, 10) << std::endl;
    std::cout << std::endl;
    BubbleSort(bA, 10, bM, bC);
    std::cout << "Sorted: ";
    PrintMas(bA, 10);
    std::cout << "Series: " << RunNumber(bA, 10) << ", CheckSum: " << CheckSum(bA, 10) << std::endl;
    std::cout << "Mf = " << bM << " Cf = " << bC << std::endl;

    // c = (n^2 - n)/2
    // m = 3c/2

    int m = 0, c = 0;
    // 100
    FillDec(b1, 100);
    BubbleSort(b1, 100, m, c);
    b1data[0] = m + c;

    FillRand(b1, 100);
    BubbleSort(b1, 100, m, c);
    b1data[1] = m + c;

    FillInc(b1, 100);
    BubbleSort(b1, 100, m, c);
    b1data[2] = m + c;

    // 200
    FillDec(b2, 200);
    BubbleSort(b2, 200, m, c);
    b2data[0] = m + c;

    FillRand(b2, 200);
    BubbleSort(b2, 200, m, c);
    b2data[1] = m + c;

    FillInc(b2, 200);
    BubbleSort(b2, 200, m, c);
    b2data[2] = m + c;

    // 300
    FillDec(b3, 300);
    BubbleSort(b3, 300, m, c);
    b3data[0] = m + c;

    FillRand(b3, 300);
    BubbleSort(b3, 300, m, c);
    b3data[1] = m + c;

    FillInc(b3, 300);
    BubbleSort(b3, 300, m, c);
    b3data[2] = m + c;

    // 400
    FillDec(b4, 400);
    BubbleSort(b4, 400, m, c);
    b4data[0] = m + c;

    FillRand(b4, 400);
    BubbleSort(b4, 400, m, c);
    b4data[1] = m + c;

    FillInc(b4, 400);
    BubbleSort(b4, 400, m, c);
    b4data[2] = m + c;

    // 500
    FillDec(b5, 500);
    BubbleSort(b5, 500, m, c);
    b5data[0] = m + c;

    FillRand(b5, 500);
    BubbleSort(b5, 500, m, c);
    b5data[1] = m + c;

    FillInc(b5, 500);
    BubbleSort(b5, 500, m, c);
    b5data[2] = m + c;



    printf("+---+--------------------------+--------------------------+\n");
    printf("| N |            M+C teor      |            M+C fakt      |\n");
    printf("|   |  Ubiv  |  Rand  |  Vozr  |  Ubiv  |  Rand  |  Vozr  |\n");
    printf("+------------------------------+--------------------------+\n");
    printf("|100|   19800|   12375|    4950|%8d|%8d|%8d|\n", b1data[0], b1data[1], b1data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    printf("|200|   79600|   49750|   19900|%8d|%8d|%8d|\n", b2data[0], b2data[1], b2data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    printf("|300|  179400|  112125|   44850|%8d|%8d|%8d|\n", b3data[0], b3data[1], b3data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    printf("|400|  319200|  199500|   79800|%8d|%8d|%8d|\n", b4data[0], b4data[1], b4data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    printf("|500|  499000|  311875|  124750|%8d|%8d|%8d|\n", b5data[0], b5data[1], b5data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << "Shaker Sort" << std::endl;
    FillRand(sA, 10);
    PrintMas(sA, 10);
    std::cout << "Series: " << RunNumber(sA, 10) << ", CheckSum: " << CheckSum(sA, 10) << std::endl;
    std::cout << std::endl;
    ShakerSort(sA, 10, sM, sC);
    std::cout << "Sorted: ";
    PrintMas(sA, 10);
    std::cout << "Series: " << RunNumber(sA, 10) << ", CheckSum: " << CheckSum(sA, 10) << std::endl;
    std::cout << "Mf = " << sM << " Cf = " << sC << std::endl;
    std::cout << std::endl;

    FillInc(bA, 10);
    PrintMas(bA, 10);
    std::cout << "Series: " << RunNumber(bA, 10) << ", CheckSum: " << CheckSum(bA, 10) << std::endl;
    std::cout << std::endl;
    BubbleSort(bA, 10, bM, bC);
    std::cout << "Sorted: ";
    PrintMas(bA, 10);
    std::cout << "Series: " << RunNumber(bA, 10) << ", CheckSum: " << CheckSum(bA, 10) << std::endl;
    std::cout << "Mf = " << bM << " Cf = " << bC << std::endl;
    std::cout << std::endl;

    FillDec(bA, 10);
    PrintMas(bA, 10);
    std::cout << "Series: " << RunNumber(bA, 10) << ", CheckSum: " << CheckSum(bA, 10) << std::endl;
    std::cout << std::endl;
    BubbleSort(bA, 10, bM, bC);
    std::cout << "Sorted: ";
    PrintMas(bA, 10);
    std::cout << "Series: " << RunNumber(bA, 10) << ", CheckSum: " << CheckSum(bA, 10) << std::endl;
    std::cout << "Mf = " << bM << " Cf = " << bC << std::endl;


    m = 0, c = 0;
    // 100
    FillDec(s1, 100);
    ShakerSort(s1, 100, m, c);
    s1data[0] = m + c;

    FillRand(s1, 100);
    ShakerSort(s1, 100, m, c);
    s1data[1] = m + c;

    FillInc(s1, 100);
    ShakerSort(s1, 100, m, c);
    s1data[2] = m + c;

    // 200
    FillDec(s2, 200);
    ShakerSort(s2, 200, m, c);
    s2data[0] = m + c;

    FillRand(s2, 200);
    ShakerSort(s2, 200, m, c);
    s2data[1] = m + c;

    FillInc(s2, 200);
    ShakerSort(s2, 200, m, c);
    s2data[2] = m + c;

    // 300
    FillDec(s3, 300);
    ShakerSort(s3, 300, m, c);
    s3data[0] = m + c;

    FillRand(s3, 300);
    ShakerSort(s3, 300, m, c);
    s3data[1] = m + c;

    FillInc(s3, 300);
    ShakerSort(s3, 300, m, c);
    s3data[2] = m + c;

    // 400
    FillDec(s4, 400);
    ShakerSort(s4, 400, m, c);
    s4data[0] = m + c;

    FillRand(s4, 400);
    ShakerSort(s4, 400, m, c);
    s4data[1] = m + c;

    FillInc(s4, 400);
    ShakerSort(s4, 400, m, c);
    s4data[2] = m + c;

    // 500
    FillDec(s5, 500);
    ShakerSort(s5, 500, m, c);
    s5data[0] = m + c;

    FillRand(s5, 500);
    ShakerSort(s5, 500, m, c);
    s5data[1] = m + c;

    FillInc(s5, 500);
    ShakerSort(s5, 500, m, c);
    s5data[2] = m + c;

    printf("+---+--------------------------+--------------------------+\n");
    printf("| N |            M+C Bubble    |            M+C Shaker    |\n");
    printf("|   |  Ubiv  |  Rand  |  Vozr  |  Ubiv  |  Rand  |  Vozr  |\n");
    printf("+---+--------------------------+--------------------------+\n");
    printf("|100|%8d|%8d|%8d|%8d|%8d|%8d|\n", b1data[0], b1data[1], b1data[2], s1data[0], s1data[1], s1data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    printf("|200|%8d|%8d|%8d|%8d|%8d|%8d|\n", b2data[0], b2data[1], b2data[2], s2data[0], s2data[1], s2data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    printf("|300|%8d|%8d|%8d|%8d|%8d|%8d|\n", b3data[0], b3data[1], b3data[2], s3data[0], s3data[1], s3data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    printf("|400|%8d|%8d|%8d|%8d|%8d|%8d|\n", b4data[0], b4data[1], b4data[2], s4data[0], s4data[1], s4data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    printf("|500|%8d|%8d|%8d|%8d|%8d|%8d|\n", b5data[0], b5data[1], b5data[2], s5data[0], s5data[1], s5data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    std::cout << std::endl;
    std::cout << std::endl;


    //insert sort
    MakeData("InsertSort", iA, iM, iC, InsertSort);

    m = 0, c = 0;
    // 100
    FillDec(i1, 100);
    InsertSort(i1, 100, m, c);
    i1data[0] = m + c;

    FillRand(i1, 100);
    InsertSort(i1, 100, m, c);
    i1data[1] = m + c;

    FillInc(i1, 100);
    InsertSort(i1, 100, m, c);
    i1data[2] = m + c;

    // 200
    FillDec(i2, 200);
    InsertSort(i2, 200, m, c);
    i2data[0] = m + c;

    FillRand(i2, 200);
    InsertSort(i2, 200, m, c);
    i2data[1] = m + c;

    FillInc(i2, 200);
    InsertSort(i2, 200, m, c);
    i2data[2] = m + c;

    // 300
    FillDec(i3, 300);
    InsertSort(i3, 300, m, c);
    i3data[0] = m + c;

    FillRand(i3, 300);
    InsertSort(i3, 300, m, c);
    i3data[1] = m + c;

    FillInc(i3, 300);
    InsertSort(i3, 300, m, c);
    i3data[2] = m + c;

    // 400
    FillDec(i4, 400);
    InsertSort(i4, 400, m, c);
    i4data[0] = m + c;

    FillRand(i4, 400);
    InsertSort(i4, 400, m, c);
    i4data[1] = m + c;

    FillInc(i4, 400);
    InsertSort(i4, 400, m, c);
    i4data[2] = m + c;

    // 500
    FillDec(i5, 500);
    InsertSort(i5, 500, m, c);
    i5data[0] = m + c;

    FillRand(i5, 500);
    InsertSort(i5, 500, m, c);
    i5data[1] = m + c;

    FillInc(i5, 500);
    InsertSort(i5, 500, m, c);
    i5data[2] = m + c;

    printf("+---+--------------------------+--------------------------+\n");
    printf("| N |            M+C teor      |            M+C fakt      |\n");
    printf("|   |  Ubiv  |  Rand  |  Vozr  |  Ubiv  |  Rand  |  Vozr  |\n");
    printf("+------------------------------+--------------------------+\n");
    printf("|100|   10098|    5049|     297|%8d|%8d|%8d|\n", i1data[0], i1data[1], i1data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    printf("|200|   40198|   20099|     597|%8d|%8d|%8d|\n", i2data[0], i2data[1], i2data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    printf("|300|   90298|   45149|     897|%8d|%8d|%8d|\n", i3data[0], i3data[1], i3data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    printf("|400|  160398|   80199|    1197|%8d|%8d|%8d|\n", i4data[0], i4data[1], i4data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    printf("|500|  250498|  125249|    1497|%8d|%8d|%8d|\n", i5data[0], i5data[1], i5data[2]);
    printf("+---+--------------------------+--------------------------+\n");
    std::cout << std::endl;
    std::cout << std::endl;

    m = 0; c = 0;
    FillRand(data2, 200);
    SelectSort(data2, 200, m, c);
    data200 = m + c;

    FillRand(data3, 300);
    SelectSort(data3, 300, m, c);
    data300 = m + c;

    FillRand(data4, 400);
    SelectSort(data4, 400, m, c);
    data400 = m + c;

    FillRand(data5, 500);
    SelectSort(data5, 500, m, c);
    data500 = m + c;

    printf("+---+--------+--------+--------+--------+\n");
    printf("| n | Select | Bubble | Shaker | Insert |\n");
    printf("+---+--------+--------+--------+--------+\n");
    printf("|100|%8d|%8d|%8d|%8d|\n", data100[1], b1data[1], s1data[1], i1data[1]);
    printf("+---+--------+--------+--------+--------+\n");
    printf("|200|%8d|%8d|%8d|%8d|\n", data200, b2data[1], s2data[1], i2data[1]);
    printf("+---+--------+--------+--------+--------+\n");
    printf("|300|%8d|%8d|%8d|%8d|\n", data300, b3data[1], s3data[1], i3data[1]);
    printf("+---+--------+--------+--------+--------+\n");
    printf("|400|%8d|%8d|%8d|%8d|\n", data400, b4data[1], s4data[1], i4data[1]);
    printf("+---+--------+--------+--------+--------+\n");
    printf("|500|%8d|%8d|%8d|%8d|\n", data500, b5data[1], s5data[1], i4data[1]);
    printf("+---+--------+--------+--------+--------+\n");

    MakeDataShell("ShellSort", shA, shM, shC, ShellSort);

    m = 0; c = 0;
    FillDec(sh1, 100);
    ShellSort(sh1, 100, m, c);
    sh1data[0] = m + c;

    FillRand(sh1, 100);
    ShellSort(sh1, 100, m, c);
    sh1data[1] = m + c;

    FillInc(sh1, 100);
    ShellSort(sh1, 100, m, c);
    sh1data[2] = m + c;

    h1 = KnuthSeq(100);

    // 200
    FillDec(sh2, 200);
    ShellSort(sh2, 200, m, c);
    sh2data[0] = m + c;

    FillRand(sh2, 200);
    ShellSort(sh2, 200, m, c);
    sh2data[1] = m + c;

    FillInc(sh2, 200);
    ShellSort(sh2, 200, m, c);
    sh2data[2] = m + c;

    h2 = KnuthSeq(200);

    // 300
    FillDec(sh3, 300);
    ShellSort(sh3, 300, m, c);
    sh3data[0] = m + c;

    FillRand(sh3, 300);
    ShellSort(sh3, 300, m, c);
    sh3data[1] = m + c;

    FillInc(sh3, 300);
    ShellSort(sh3, 300, m, c);
    sh3data[2] = m + c;

    h3 = KnuthSeq(300);

    // 400
    FillDec(sh4, 400);
    ShellSort(sh4, 400, m, c);
    sh4data[0] = m + c;

    FillRand(sh4, 400);
    ShellSort(sh4, 400, m, c);
    sh4data[1] = m + c;

    FillInc(sh4, 400);
    ShellSort(sh4, 400, m, c);
    sh4data[2] = m + c;

    h4 = KnuthSeq(400);

    // 500
    FillDec(sh5, 500);
    ShellSort(sh5, 500, m, c);
    sh5data[0] = m + c;

    FillRand(sh5, 500);
    ShellSort(sh5, 500, m, c);
    sh5data[1] = m + c;

    FillInc(sh5, 500);
    ShellSort(sh5, 500, m, c);
    sh5data[2] = m + c;

    h5 = KnuthSeq(500);

    printf("+--------------------------------------------------------------------+\n");
    printf("| N |     knuth h1..hm     |    Insert M + C    |    Shell M + C     |\n");
    printf("|   |                      | Ubiv | Rand | Vozr | Ubiv | Rand | Vozr |\n");
    printf("+---+----------------------+-----------------------------------------+\n");
    std::cout << "|100|     "; for (const auto& val : h1) { std::cout << val << " "; } std::cout << "     | " << i1data[0] << "|  " << i1data[1] << "|   " << i1data[2] << "|  "<< sh1data[0] << "|  " << sh1data[1] << "|  " << sh1data[2] << "|\n";
    printf("+---+----------------------+-----------------------------------------+\n");
    std::cout << "|200|   "; for (const auto& val : h2) { std::cout << val << " "; } std::cout << "    | " << i2data[0] << "| " << i2data[1] << "|   " << i2data[2] << "|  " << sh2data[0] << "|  " << sh2data[1] << "|  " << sh2data[2] << "|\n";
    printf("+---+----------------------+-----------------------------------------+\n");
    std::cout << "|300| "; for (const auto& val : h3) { std::cout << val << " "; } std::cout << "  | " << i3data[0] << "| " << i3data[1] << "|   " << i3data[2] << "|  " << sh3data[0] << "|  " << sh3data[1] << "|  " << sh3data[2] << "|\n";
    printf("+---+----------------------+-----------------------------------------+\n");
    std::cout << "|400| "; for (const auto& val : h4) { std::cout << val << " "; } std::cout << "  |" << i4data[0] << "| " << i4data[1] << "|  " << i4data[2] << "| " << sh4data[0] << "| " << sh4data[1] << "|  " << sh4data[2] << "|\n";
    printf("+---+----------------------+-----------------------------------------+\n");
    std::cout << "|500|  "; for (const auto& val : h5) { std::cout << val << " "; } std::cout << " |" << i5data[0] << "|" << i5data[1] << "|  " << i5data[2] << "| " << sh5data[0] << "| " << sh5data[1] << "|  " << sh5data[2] << "|\n";
    printf("+---+----------------------+-----------------------------------------+\n");

    // binary search
    c = 0;
    FillInc(bsmass, 10);
    CustomBinarySearch1<int, int>(bsmass, 0, 10, c);
    CustomBinarySearch1<int, int>(bsmass, 9, 10, c);
    CustomBinarySearch1<int, int>(bsmass, 10, 10, c);
    std::cout << std::endl;
    CustomBinarySearch2<int, int>(bsmass, 0, 10, c);
    CustomBinarySearch2<int, int>(bsmass, 9, 10, c);
    CustomBinarySearch2<int, int>(bsmass, 10, 10, c);

    for (int i = 100; i <= 1000; i += 100) {
        int* massive = new int[i];

        FillInc(massive, i);

        CustomBinarySearch1(massive, 0, i, c);
        bs1data[(i / 100) - 1] = c;
        CustomBinarySearch2(massive, 0, i, c);
        bs2data[(i / 100) - 1] = c;

        delete[] massive;
    }

    printf("+----+---------+---------+\n");
    printf("| N  |    C1   |    C2   |\n");
    printf("+----+---------+---------+\n");
    for (int i = 0; i < 10; i++) {
        printf("|%4d|%9d|%9d|\n", (i + 1) * 100, bs1data[i], bs2data[i]);
        printf("+----+---------+---------+\n");
    }
    std::cout << std::endl;

    abonent u1;
    u1.id = 1;
    u1.name = "Bogatyrev";
    u1.phone = 8800553535;
    u1.bornDay = 30;

    abonent u2;
    u2.id = 2;
    u2.name = "Semikasheva";
    u2.phone = 8800553535;
    u2.bornDay = 28;

    abonent u3;
    u3.id = 3;
    u3.name = "Popekhin";
    u3.phone = 8800553534;
    u3.bornDay = 31;

    abonent u4;
    u4.id = 4;
    u4.name = "Kim";
    u4.phone = 8200533535;
    u4.bornDay = 4;

    abonent u5;
    u5.id = 5;
    u5.name = "Popekhin";
    u5.phone = 8200533535;
    u5.bornDay = 3;

    abonent users[] = {
        u1, u2, u3, u4, u5
    };

    printUsers(users, 5);
    std::cout << std::endl;
    insertSort(users, 5, SortKey::NAME_PHONE, SortDirection::ASCENDING);
    printUsers(users, 5);

    Record records[] = {
        {1, 89137727022, "Konstantin", "Popekhin"},
        {2, 89137649077, "Irina", "Popekhina"},
        {3, 89139033451, "Yuriy", "Suntsov"},
        {4, 89133966526, "Sergey", "Popekhin"}
    };

    int pindexMassive[] = {0,1,2,3};
    int nindexMassive[] = {0,1,2,3};
    for (int i : pindexMassive) {std::cout << i << " ";}
    std::cout << std::endl;

    for (int i : pindexMassive) {
        std::cout << "ID: " << records[i].id << ", Name: " << records[i].name
                  << ", Phone: " << records[i].lastname << ", Born Day: " << records[i].phone << "\n";
    }

    std::cout << std::endl;
    phonesSort(nindexMassive, pindexMassive, records, 4);
    for (int i : pindexMassive) {std::cout << i << " ";}
    std::cout << std::endl;
    for (int i : pindexMassive) {
        std::cout << "ID: " << records[i].id << ", Name: " << records[i].name
                  << ", Phone: " << records[i].lastname << ", Born Day: " << records[i].phone << "\n";
    }

    std::cout << std::endl;
    for (int i : nindexMassive) {std::cout << i << " ";}
    std::cout << std::endl;
    for (int i : nindexMassive) {
        std::cout << "ID: " << records[i].id << ", Name: " << records[i].name
                  << ", Phone: " << records[i].lastname << ", Born Day: " << records[i].phone << "\n";
    }

    return 0;
}