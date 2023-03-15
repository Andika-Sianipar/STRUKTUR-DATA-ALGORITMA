#include <iostream>
using namespace std;
int binary_search(int angka[], int left, int right, int key) {
    while (left <= right) {
          int mid = left + (right - left) / 2;
          if (key == angka[mid])
              return mid;
          else if (key < angka[mid])
               right = mid - 1;
          else
              left = mid + 1;
          }
          return -1;
     }
     
int main(int argc, char const* argv[]) {
    int n, key;
    cout << "Masukkan banyak array: ";
    cin >> n;
    int* angka = new int[n];
    for (int i = 0; i < n; i++) {
    	cout<<endl<<"Masukkan value array ke-"<<i<<" :";
        cin >> angka[i];
        }
    cout <<endl<< "Masukan angka yang ingin dicari : ";
    cin >> key;
   
    int res = binary_search(angka, 0, n - 1, key);
    if (res != -1){
       std::cout << key << " ditemukan pada: " << endl;
       for(int i = 0; i < n; i++){
			if(key == angka[i]){
				cout<<"- Array ke-"<<i<<endl;
			}
		}
	}
	else
       std::cout << key << " tidak ditemukan" << endl;
    
	return 0;
}
