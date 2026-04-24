#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a[5];
    int n = sizeof(a) / sizeof(a[0]);
    int sum = 0;

    int factor = pow(10, n - 1);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i] * factor;
        factor /= 10;
    }

    cout << sum + 1;
}
