#include <iostream>

using namespace std;

void shellsort(int A[], int n); //deklarasi (prosedur)

int main()
{
    //Deklarasi Variabel
    int A[10];
    int n;

    //Judul
    cout << "******************************************\n" << endl;
    cout << "\t\tShell Sort" << endl;
    cout << "\n******************************************" << endl;

    //Input
    cout << "Inputkan jumlah array yang akan digunakan : ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Inputkan angka ke-" << i << " : ";
        cin >> A[i];
    }
    cout << endl;

    //Cetak Array Awal
    cout << "Element array saat ini (sebelum diurutkan) adalah : ";
    for(int j=0; j<n; j++){
        cout << A[j] << " ";
    }
    cout << endl << endl;

    //Shell Sort
    cout << "=============== Proses Pengurutan Array ===============" << endl;
    shellsort(A,n);

    cout << endl;

    //Cetak Array Hasil
    cout << "Element array setelah diurutkan adalah : ";
    for(int x=0; x<n; x++){
        cout << A[x] << " ";
    }
    cout << endl;

    return 0;
}

void shellsort(int A[], int n)  //deklarasi & deskripsi
{
    for(int a = n/2; a > 0; a=a/2)
    {
        for(int b = a; b < n; b++)
        {
            for(int c = b-a; c >= 0; c-=a)
            {
                //proses swapnya
                if(A[c+a] < A[c])
                {
                    //proses penampungan & swap
                    int x = A[c+a];
                    A[c+a] = A[c];
                    A[c] = x;
                }
            }
        }
    }
}
