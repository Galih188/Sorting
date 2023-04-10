#include <iostream>

using namespace std;
void selection(int A[], int n);

int main()
{
    int n;
    cout << "Masukkan Jumlah Array: ";
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++){
        cout << "Masukkan angka ke-" << i+1 << " : " ;
        cin >> arr[i];
    }
    cout << endl;
    cout << endl;
    //Cetak Arraynya
    cout << "Elemen array saat ini (sebelum diurutkan) adalah: ";
    for (int a=0; a<n; a++){
        cout << arr[a] << " ";
    }
    cout << endl;
    cout << endl;

    //proses selection sort
    cout << "===================== Proses Pengurutan Elemen Array =====================" << endl;
    selection(arr,n);

    cout << endl;
    cout << endl;

    cout << "Elemen arraynya urutnya adalah: ";
    for (int u=0; u<n; u++){
        cout << arr[u] << " ";
    }
    return 0;
}
void selection(int A[], int n){
    for (int a=0; a<n; a++){
        int temp= A[a];
        int pos=a;
        for (int b=a; b<n; b++){
            //proses swap nya
            if (A[b]<temp){
                temp=A[b];
                pos=b;
            }
        }
        A[pos]= A[a];
        A[a]= temp;

        cout << endl;
        cout << "Pengurutan ke-" << a+1 << " : ";
        for (int c=0; c<n; c++){
            cout << A[c] << " ";
        }
    }
}
