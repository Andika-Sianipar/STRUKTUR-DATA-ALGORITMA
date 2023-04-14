#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Full"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Masukkan Elemen : ";
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow "<<endl;
      return ;
   } else {
      cout<<"Elemen yang dihapus : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1 || front > rear){
   cout<<"Queue Kosong"<<endl;
   }else {
      cout<<"Queue elemen: ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"\tQUEUE-ARRAY"<<endl;
   cout<<"------------------------------"<<endl;
   cout<<"1) Masukkan elemen pada queue"<<endl;
   cout<<"2) Hapus elemen dari queue"<<endl;
   cout<<"3) Tampilkan elemen queue"<<endl;
   cout<<"4) Keluar"<<endl;
   do {
      cout<<"Masukkan Pilihan: ";
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Keluar"<<endl;
         break;
         default: cout<<"Pilihan Tidak Tersedia"<<endl;
      }
   } while(ch!=4);
   return 0;
}
