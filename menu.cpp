#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_SIZE = 50; //Ukuran maks array
int arry[MAX_SIZE]; //array dibuat menjadi global
int n; //jumlah elemen array


void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Bubble"<<"\n";       
cout<<"1. Memasukkan data"<<"\n";            
cout<<"2. Menampilkan data"<<"\n";            
cout<<"3. Sorting"<<"\n";           
cout<<"4. Sepatah kata"<<"\n";
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void inputData(){
  system("cls");
  cout << "Masukkan jumlah elemen array (MAKSIMAL 50) :";
  cin >> n;
  if (n > MAX_SIZE) {
    cout << "Jumlah elemen melebihi batas maksimum!" << endl;
    getch();
    return;
  }
  cout << "Masukkan " << n << " angka:\n";
  for (int i = 0; i < n; ++i) {
    cout << "Elemen ke-" << i + 1 << ": ";
    cin >> arry[i];
  }
}

void outputData() {
  system("cls");
  cout << "Array yang diinput: ";
  for (int i = 0; i < n; ++i) {
    cout << arry[i];
    if (i != n - 1) cout << ", "; 
  }
  getch();
}

void bubbleSort() {
    system("cls");
    // Melakukan bubble sort
    for (int i = 0; i < n - 1; ++i) {
      for (int j = 0; j < n - i - 1; ++j) {
        if (arry[j] > arry[j + 1]) {
          // Tukar array[j] dan array[j + 1]
          int temp = arry[j];
          arry[j] = arry[j + 1];
          arry[j + 1] = temp;
        }
      }
    }

  // Menampilkan hasil setelah pengurutan
  cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; ++i) {
      cout << arry[i];
      if (i != n - 1) cout << ", "; 
    }
  getch();
}


void sepatahKata(){
  system("cls");
  cout <<"mingyuuu saranghaeee";
  getch();
}

int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    inputData();
    break;
   case '2':
    outputData();
    break;  
    case '3':
    bubbleSort();
    break;
    case '4':
    sepatahKata();
    break;
    case '5':
    cout<<"\nannyeonghi gaseyo"<<endl;
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}