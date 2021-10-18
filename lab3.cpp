#include <iostream>
#include <cmath>
#include <random>
#include <string>

using namespace std;

int main()
{

    std::random_device rd;

    cout << "Task 1:" << endl;
    cout << "Massive = ";
    int mas[10];
    for (int i = 0; i < 10; ++i)
    {
        int randnum = rd() % 21 - 10;
        mas[i] = randnum;
        cout << mas[i] << " ";
    }
    cout << endl;
    double sum;
    sum = pow(mas[4], 3) + pow(mas[7], 3) + pow(mas[8], 3);
    cout << "Sum = " << sum << endl;



    int n;
    cout << "Task 2, enter length of massive > 10: " << endl;
    cin >> n;
    cout << "Enter numbers of mass:" << endl;
    int* m1 = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> m1[i];
    }
    cout << "The mass is:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << m1[i] << " ";
    }
    cout << endl;
    cout << "After first the mass is:" << endl;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 != 0) m1[i] = m1[i] * 2;

        cout << m1[i] << " ";
    }
    cout << endl;
    int k1, k2, sum_1;
    cout << "Enter begining and ending of sum:" << endl;
    cin >> k1 >> k2;
    sum_1 = 0;
    for (int i = k1 - 1; i < k2 - 1; ++i)
    {
        sum_1 += m1[i];
    }
    cout << "The sum is: " << sum_1 << endl;
    delete[] m1;


    int n1, m;
    cout << "Task 3, enter n and m between 5 <= x <= 10, length and hight of matrix:" << endl;
    cin >> n1 >> m;

    int** mA = new int* [n1];
    int** mB = new int* [n1];
    int** mC = new int* [n1];

    for (int i = 0; i < n1; ++i)
    {
        mA[i] = new int[m];
        mB[i] = new int[m];
        mC[i] = new int[m];
    }

    for (int i = 0; i < n1; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            mA[i][j] = rd() % 11 - 5;
            mB[i][j] = rd() % 11 - 5;
        }
        cout << endl;
    }

    cout << "The mass A:" << endl;

    for (int i = 0; i < n1; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << mA[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "The mass B:" << endl;

    for (int i = 0; i < n1; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << mB[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "The mass C:" << endl;

    for (int i = 0; i < n1; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            mC[i][j] = mA[i][j] + mB[i][j];
            cout << mC[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n1; ++i)
    {
        delete mA[i];
        delete mB[i];
        delete mC[i];
    }

    delete[] mA;
    delete[] mB;
    delete[] mC;



    cout << "Task 4, enter 2 sentenses:" << endl;


    char mAs[1000];
    char mBs[1000];

    cin.getline(mAs, 1000);
    cin.getline(mBs, 1000);
    int i = 0, j = 0;

    while (mAs[i] != '\0')
    {
        i += 1;
    }

    while (mBs[j] != '\0')
    {
        j += 1;
    }

    char mCs[i + j];

    for (int k = 0; k < i; ++k)
    {
        mCs[k] = mAs[k];
    }

    for (int k = 0; k < j; ++k)
    {
        mCs[k + i] = mBs[k];
    }

    for (int k = 0; k < i + j; ++k)
    {
        cout << mCs[k];
    }

    return 0;
}