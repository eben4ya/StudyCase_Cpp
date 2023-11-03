#include <iostream>
using namespace std;

char pil, loop;

void cekAngkaPrima()
{
    do
    {
        system("cls");
        int a, post = 0;
        cout << "Cek angka : ";
        cin >> a;
        for (int i = a; i > 0; i--)
        {
            if (a % i == 0)
            {
                post++;
            }
        }
        if (post == 2)
        {
            cout << "Angka Prima" << endl;
        }
        else
        {
            cout << "Bukan angka Prima" << endl;
        }
        cout << "Lanjutkan ? (y/n) : ";
        cin >> loop;
    } while (loop == 'y' || loop == 'Y');
}

void tampilAngkaPrima()
{
    do
    {
        system("cls");
        int a, b;
        cout << "Masukan batas atas : ";
        cin >> a;
        cout << "Masukan batas bawah : ";
        cin >> b;
        for (int i = a; i <= b; i++)
        {
            int post = 0;
            for (int j = i; j > 0; j--)
            {
                if (i % j == 0)
                {
                    post++;
                }
            }
            if (post == 2)
            {
                cout << i << " ";
            }
        }

        cout << "\nLanjutkan ? (y/n) : ";
        cin >> loop;
    } while (loop == 'y' || loop == 'Y');
}

int main()
{

    do
    {
        system("cls");
        cout << "Pilih : \n1. Cek angka prima \n2. Tampilkan angka prima \n3. Keluar" << endl;
        cin >> pil;
        switch (pil)
        {
        case '1':
            cekAngkaPrima();
            break;
        case '2':
            tampilAngkaPrima();
            break;
        case '3':
            cout << "Program Selesai" << endl;
            break;
        default:
            cout << "Pilih 1 - 3" << endl;
        }
    } while (pil != '3');

    return 0;
}