#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int pilih; void pilihan();
struct dataktp {
char nim[20];
char nama [40];
char gender [20];
int info;

 dataktp  *next , *prev ;
};



dataktp  *data, *Dasar=NULL, *top=NULL,*help,*del, *q;



void BUAT_SIMPUL(int X)

{

data=(SIMPUL *)malloc(sizeof(SIMPUL));

if(data!=NULL)

data->info=X;

else

{

cout<<'Membuat simpul gagal':

exit(1);

}

}



void BUAT_HEAD(void)

{

if(Dasar==NULL)

{

Dasar=data:

top=Dasar;

Dasar->next=NULL;

Dasar->info=0;

}

else

{

cout<<"                Head sudah ada";

getch():

}

}





void buat_data()//fungsi membuat data data

{

 data = new(SIMPUL);

 cout<<"               Masukkan Nama : ";cin>>data->nama;

 cout<<"               Masukkan NIM : ";cin>>data->nim;

 cout<<"               Masukkan Gender : ";cin>>data->gender;

 cout<<"               Masukkan Nilai : ";cin>>data->nilai;

 cout<<"\n          ==========================";

 cout<<"\n            Data telah dimasukkan   ";

 getch();

 data->prev=NULL;

 data->next=NULL;

}



void insert_data()

{

 buat_data();

 if(Dasar==NULL)

 {

  Dasar=data;

  top=data;

 }



 else

 {

  data->next=top;

  Dasar->prev=data;

  top=data;

 }

 cout<<endl<<endl;

}



void hapus_data()//fungsi penghapusan data

{



 int hapus;

 if(top==NULL)

 {

  cout<<"              Linked List kosong, \nPenghapusan tidak dapat dilakukan"<<endl;

 }

 else

 {

  hapus=top->info;

  cout<<'              Data terakhir sudah dihapus';

  del = top;

  top = top->next;

  delete del;

  getch();

 }



}



void cetak_data()

{

 if (top==NULL){

 cout<<"               Linked List kosong!";

 getch();

 }

 else

 {

  help=Dasar;

  while(help!=NULL)

  {

   cout<<"             Nama : "<<help->nama<<endl;

   cout<<"             NIM : "<<help->nim<<endl;//data akan muncul dengan tampilan

   cout<<"             Gender : "<<help->gender<<endl;

   cout<<"             Nilai : "<<help->nilai<<endl;

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

  cout<<"              STACK LINKED LIST WITH HEAD"<<endl;

  cout<<"              ============================="<<endl;

  cout<<"              1. INSERT DATA"<<endl;

  cout<<"              2. HAPUS DATA"<<endl;

  cout<<"              3. CETAK DATA"<<endl;

  cout<<"              4. EXIT"<<endl;

  cout<<"              ============================="<<endl;

  cout<<"              Pilihan : ";

  cin>>pilih;

  cout<<"              ============================="<<endl;

  cout<<endl;

  pilihan();





 }



 while(pilih!=4);

}

                void pilihan()//fungsi "pilihan" untuk pemrosesan

                {

                if(pilih==1){

                 insert_data();}



                else if(pilih==2)

                   hapus_data();



                else if(pilih==3)

                   cetak_data();



                else

                 {

                 cout<<"               Selamat mencoba"<<endl;

                  }

                }

