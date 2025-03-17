#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    // Perulangan for
    cout << "Perulangan for pencacah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "Nilai n = " << n << " Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;

    // Perulangan for pencacah turun
    cout << "Perulangan for pencacah turun" << endl;
    for (n = 5; n > 0; n--)
    {
        cout << "Nilai n = " << n << " Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;

    // Perulangan while
    cout << "Perulangan while" << endl;
    srand(time(0));
    n = rand() % 10;
    cout << "Nilai awal n = " << n << endl;
    while (n < 7)
    {
        cout << "Nilai n = " << n << endl;
        n = rand() % 10;
        perulanganWhile++;
    }
    cout << "Jumlah perulangan = " << perulanganWhile << endl;
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;

    // Perulangan do while
    cout << "Perulangan do while" << endl;
    srand(time(0));
    n = rand() % 10;
    cout << "Nilai awal n = " << n << endl;
    do
    {
        cout << "Nilai n = " << n << endl;
        n = rand() % 10;
        perulanganDo++;
    } while (n < 7);
    cout << "Jumlah perulangan = " << perulanganDo << endl;
    cout << "Nilai n terakhir = " << n << endl;

    return 0;
}