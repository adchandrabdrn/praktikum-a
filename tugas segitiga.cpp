#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan tinggi segitiga bintang: ";
    cin >> n;

    int bintang = 1;

    for (int i = 0; i < n; i++)
    {
        for (int p = 0; p < n - i; p++)
        {
            cout << " ";
        }
        for (int j = 0; j < bintang; j++)
        {
            cout << "*";
        }
        cout << endl;
        bintang += 2; 
    }

    return 0;
}
