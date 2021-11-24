#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

using namespace std;
int main()
{
    int k, n, p, m;
    cout << "n=";
    cin >> n;
    p = 10;
    for (k = 1; k <= n; k++)
    {
        m = k * k;
        if (p < k) p *= 10;
        if (m % p == k)
            cout << k << " " << m << endl;
    }
    system("pause");
}

// 15.    найти номер первого элемента, который совпадает с квад-ратом последующего.