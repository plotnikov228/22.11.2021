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
    setlocale(LC_ALL, "Russian");
    int length;
    cout << "Введите длину массива: " << endl;
    cin >> length;
    int* array = new int[length];
    fillArray(array, length);
    int m = 0;
    cout fillArray (array, length);
    

    return 0;

}

void fillArray(int* array, int length)
{
    int m;
    for (int i = 1; i <= length; i++)
    {
        m = i * i;

        while (cc < k && m)
        {
            cc += p * (m % 10);
            m /= 10;
            p *= 10;
        }
        if (cc == k) cout << k;
    }
}

void findEvensInArray(int* array, int length, int* m)
{
    int cc = 0;
    int p = 1;
    for (int i = 1; i <= length; i++)
    {
        while (cc < k && m) 
        {
            cc += p * (m % 10);
            m /= 10;
            p *= 10;
        }
        if (cc == k) cout << k;
    }

}

// 15.    найти номер первого элемента, который совпадает с квад-ратом последующего.
