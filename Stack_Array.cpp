#include <iostream>
using namespace std;
int stack[2], n=2, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Full"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"Elemen yang dikeluarkan: "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack Elemen:\n";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" "<<endl;
   } else
   cout<<"Stack Kosong\n";
}
int main() {
   int ch, val;
   cout<<"\tSTACK-ARRAY"<<endl;
   cout<<"------------------------------"<<endl;
   cout<<"1) Push kedalam stack"<<endl;
   cout<<"2) Pop dari stack"<<endl;
   cout<<"3) Tampilkan stack"<<endl;
   cout<<"4) Keluar"<<endl;
   do {
      cout<<"Masukkan Pilihan: ";
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Masukkan Elemen: ";
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Keluar"<<endl;
            break;
         }
         default: {
            cout<<"Pilihan Tidak Tersedia"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
