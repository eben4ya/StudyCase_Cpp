#include <iostream>
using namespace std;

#define MAX 10
char loop, keluar = 'n';
string dataList[MAX];
int post = 0;

void Display()
{
    do
    {
        if (post > 0)
        {
            system("cls");
            cout << "Data : " << endl;
            for (int i = 0; i < post; i++)
            {
                cout << i + 1 << ". " << dataList[i] << endl;
            }
        }
        else
        {
            system("cls");
            cout << "Data kosong! \nSilahkan tambah data" << endl;
        }
        cout << "Lanjutkan (y/n) ? : ";
        cin >> loop;

    } while (loop == 'y' || loop == 'Y');
}

void Add()
{
    do
    {

        if (post < MAX)
        {
            system("cls");
            Display();
            cout << "Tambah : ";
            cin.ignore();
            getline(cin, dataList[post]);
            post++;
        }
        else
        {
            system("cls");
            cout << "Data sudah penuh! \nSilahkan update / hapus data yang sudah ada." << endl;
        }
        cout << "Tambah lagi (y/n) ? : ";
        cin >> loop;

    } while (loop == 'y' || loop == 'Y');
}

void Update()
{
    do
    {
        if (post > 0)
        {
            system("cls");
            Display();
            int index;
            cout << "Ubah data ke : ";
            cin >> index;
            cout << "Tambah : ";
            cin.ignore();
            getline(cin, dataList[index - 1]);
        }
        else
        {
            system("cls");
            cout << "Data kosong! \nSilahkan tambah data" << endl;
        }
        cout << "Ulangi (y/n) : ";
        cin >> loop;

    } while (loop == 'y' || loop == 'Y');
}

void Delete()
{
    do
    {
        if (post > 0)
        {
            system("cls");
            Display();
            int index;
            cout << "Hapus data ke : ";
            cin >> index;
            for (int i = index - 1; i < post; i++)
            {
                dataList[i] = dataList[i + 1];
            }
            post--;
        }
        else
        {
            system("cls");
            cout << "Data kosong! \nSilahkan tambah data" << endl;
        }
        cout << "Ulangi (y/n) : ";
        cin >> loop;

    } while (loop == 'y' || loop == 'Y');
}

void Option()
{
    do
    {
        system("cls");
        char pill;
        cout << "Pilih : \n1. Tambah \n2. Tampilkan \n3. Ubah \n4. Hapus \n5. Keluar " << endl;
        cin >> pill;

        switch (pill)
        {
        case '1':
            Add();
            break;
        case '2':
            Display();
            break;
        case '3':
            Update();
            break;
        case '4':
            Delete();
            break;
        case '5':
            cout << "Yakin ingin keluar (y/n) ? : ";
            cin >> keluar;
            break;
        default:
            cout << "Pilih 1 - 5" << endl;
            break;
        }
    } while (keluar == 'n' || keluar == 'N');
    cout << "Program Selesai" << endl;
}

int main()
{
    Option();

    return 0;
}