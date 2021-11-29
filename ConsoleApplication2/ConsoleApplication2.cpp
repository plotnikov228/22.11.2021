#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;

void findEvensInArray(int* array, int length);
void fillArray(int* array, int length);
void clear();

int main()
{
    
    fillArray(array, 22);
    findEvensInArray(array, 22);

    return 0;
    
    int k, n, p, m;
    cout << "n= ";
    cin >> n;
    p = 10;
    for (int k = 1; k <= n; k++)
    {
        m = k * k;
        if (p < k) p *= 10;
        if (m % p == k)
            cout << k << " " << m << endl;
    }
    system("pause");
}

void fillArray(int* array, int length, int m)
{
     
     for (int k = 1; k <= n; k++)
     {
        m = k * k;
     }
}

void findEvensInArray(int* array, int length,)
{
     cout << "n= ";
     cin >> n;
     p = 10;
    if (p < k) p *= 10;
    {
    if (m % p == k)
        {    
            cout << k << " " << m << endl;
        }
    }
}

// 15.    найти номер первого элемента, который совпадает с квад-ратом последующего.
