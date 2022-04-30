#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

int pilih; void pilihan();

struct SIMPUL{
 char nim[20];
 char nama [40];
 char gender [20];
 char ttl [20];
 int info;
 float nilai;
 SIMPUL *prev, *next;
};

SIMPUL *data, *front=NULL, *rear=NULL,*help,*del, *q;

void BUAT_SIMPUL(int X)
{
data=(SIMPUL *)malloc(sizeof(SIMPUL));
if(data!=NULL)
data->info=X;
else
{
cout<<"Membuat simpul gagal";
exit(1);
}
}

void buat_data()//fungsi membuat data data
{
 data = new(SIMPUL);
 cin.sync();

 cout<<"               Masukkan Nama : ";cin.getline (data->nama,40);

 cout<<"               Masukkan NIM : ";cin.getline(data->nim,20);

 cout<<"               Masukkan Gender : ";cin.getline(data->gender,20);

 cout<<"               masukkan ttl  : ";cin.getline(data->ttl,20);

 cout<<"               Masukkan Nilai : ";cin>>data->nilai;



 cout<<"\n  ==========================";
 cout<<"\n    Data telah dimasukkan   ";
 getch();
  data->prev=NULL;
 data->next=NULL;
}

void insert_data()
{
 buat_data();
 if(front==NULL)
 {
  front=data;
  rear=data;
  rear->next=NULL;
 }
 else
 {

  rear->next=data;
  rear=data;
  rear->next=NULL;
 }
 cout<<endl<<endl;
}

void hapus_data()//fungsi penghapusan data
{
 int hapus;
 if(front==NULL)
 {
  cout<<"   stack  kosong"<<endl;
  getch();
 }
 else
 {
  hapus=front->info;
  cout<<"   Data awal sudah dihapus";
  del = front;
  q = front->next;
  front=q;
  delete del;
  getch();
 }
}

void cetak_data()
{
 if (rear==NULL){
 cout<<"    Linked List kosong!";
 getch();
 }
 else
 {
  help=front;
  while(help!=NULL)
  {
   cout<<"  Nama : "<<help->nama<<endl;
   cout<<"  NIM : "<<help->nim<<endl;//data akan muncul dengan tampilan
   cout<<"  Gender : "<<help->gender<<endl;
   cout<<"  Nilai : "<<help->nilai<<endl;
   cout<<"  ttl : "<<help->ttl<<endl;
   cout<<endl;
   help=help->next;

 }
getch();

}
}

int main()//interface monitor
{
 do
 {
  system("cls");
  cout<<"   =========================LINKED LIST ===================== "<<endl;
  cout<<"   =========///======///==========================///=========///========"<<endl;
  cout<<"   1. INSERT DATA"<<endl;
  cout<<"   2. HAPUS DATA"<<endl;
  cout<<"   3. CETAK DATA"<<endl;
  cout<<"   4. SIMPAN DATA"<<endl;
  cout<<"   5.SIMPAN DATA"<<endl;
  cout<<"   6. EXIT"<<endl;
  cout<<"   ========///============///===========///==========///============="<<endl;
  cout<<"   Pilihan : ";
  cin>>pilih;
  cout<<"   ========///=============///============///==========///==========="<<endl;
  cout<<endl;
  pilihan();
 }

 while(pilih!=6);
}
    void pilihan()//fungsi "pilihan" untuk pemrosesan
    {
    if(pilih==1){
     insert_data();}

    else if(pilih==2)
       hapus_data();

    else if(pilih==3)
       cetak_data();

    else if(pilih==4)
       simpan_data();

    else
     {
     cout<<"   SELAMAT MENCOBA "<<endl;
      }
}
