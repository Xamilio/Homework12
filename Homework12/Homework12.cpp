#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int p[6];
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << ": ";
        cin >> p[i];
    }
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += p[i];
    }
    cout << endl << "Прибыль: " << sum << "\n";


    srand(time(0));
    const int n(10);
    int a[n];
    cout << "Числа: ";
    for (int i = 0;i < n;++i) {
        a[i] = rand() % 5;
        cout << a[i] << " ";
    }
    cout << "\nПолучилось: ";
    for (int i = n - 1;i >= 0;--i) 
    {
        cout << a[i] << " ";
    }

    float sum1 = 0;
    float t;   
    for (int i = 0; i < 5; i++) 
    { 
        cout << "Введите размер стороны: ";
        cin >> t;
        sum1 += t;
    }    
    cout << sum1;

    double l[12];
    double min, max;
    for (int i = 0;i < 12;i++) {
        cin >> l[i];
    }
    min = l[0];
    max = l[0];
    for (int i = 1;i < 12;i++) {
        if (l[i] > max) 
        {
            max = l[i]; 
        }
        if (l[i] < min) 
        { 
            min = l[i]; 
        }
    }
}
