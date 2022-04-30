#include <iostream>
#include <iostream>

#include <conio.h>

#include <stdio.h>

#include <windows.h>

using namespace std;

int pilih;

void pilihan();

struct SIMPUL

{

	char nim[20];

	int NIM;

	char nama[40];

	char gender[20];

	int info;

	float nilai;

	SIMPUL *left, *right;

};

SIMPUL *data, *first = NULL, *last = NULL, *help, *del, *q;

void BUAT_SIMPUL(int X)

{

	data = (SIMPUL *)malloc(sizeof(SIMPUL));

	if (data != NULL)

		data->info = X;

	else

	{

		cout << "Membuat simpul gagal";

		exit(1);

	}

}



void buat_data() //fungsi membuat data data

{

	data = new (SIMPUL);

	cout << "	Masukkan Nama : ";

	cin >> data->nama;

	cout << "	Masukkan NIM : ";

	cin >> data->nim;

	cout << "	Masukkan Gender : ";

	cin >> data->gender;

	cout << "	Masukkan Nilai : ";

	cin >> data->nilai;

	cout << "\n	==========================";

	cout << "\n	  Data telah dimasukkan   ";

	getch();

	data->left = NULL;

	data->right = NULL;

}



void insert_data()

{

	buat_data();

	if (first == NULL)

	{

		first = data;

		last = data;

		last->right = NULL;

	}

	else

	{

		last->right = data;

		last = data;

		last->right = NULL;

	}

	cout << endl

		 << endl;

}

void hapus_data() //fungsi penghapusan data

{

	int hapus, NIM;

	if (last == NULL)

	{

		cout << "\n	Linked List kosong, \nPenghapusan tidak dapat dilakukan" << endl; //data yang habis maka tampilannya

		getch();

	}

	else

	{

		hapus = first->NIM;

		cout << "\n	Data NIM yang dihapus adalah :"; //pemilihan data yang akan dihapus

		cin >> NIM;

		cout << "	Data nim " << NIM << " sudah dihapus";

		del = first;

		q = first->right;

		first = q;

		delete del;

		getch();

	}

}



void cetak_data()

{

	if (last == NULL)

	{

		cout << "	==========Linked List kosong=============!";

		getch();

	}

	else

	{

		help = first;

		while (help != NULL)

		{

			cout << "	NAMA : " << help->nama << endl;

			cout << "	NIM : " << help->nim << endl; //data akan muncul dengan tampilan

			cout << "	GENDER : " << help->gender << endl;

			cout << "	NILAI : " << help->nilai  << endl;

			cout << endl;

			help = help->right;

		}

		getch();

	}

}

int main() //interface monitor

{

	system("color 036");
	system("color 056 ");

	do

	{

		system("cls");

		cout << "     LINKED LIST ANIMASI " << endl;





        cout << "   ================*===================" << endl;
        cout << "   ===============***==================" << endl;
        cout << "   ==============****==================" << endl;
        cout << "   =============******=================" << endl;
        cout << "   ============********================" << endl;
        cout << "   ===========**********===============" << endl;
        cout << "   =========**************=============" << endl;
        cout << "   ========****************============" << endl;
        cout << "   =========**************=============" << endl;
		cout << "	==========************==============" << endl;
		cout << "   ============*********===============" << endl;
		cout << "   ==============*****=================" << endl;
        cout << "   ===============***==================" << endl;
        cout << "   ================*===================" << endl;


		cout << "	1. INSERT DATA" << endl;

		cout << "	2. HAPUS DATA" << endl;

		cout << "	3. CETAK DATA" << endl;

		cout << "	4. EXIT" << endl;

		cout << "	==========================" << endl;

		cout << "	Pilihan (1-4) : ";

		cin >> pilih;

		cout << "	==========================" << endl;

		cout << endl;

		pilihan();

	}

	while (pilih != 4);

}

void pilihan() //fungsi "pilihan" untuk pemrosesan

{

	if (pilih == 1)

	{

		insert_data();

	}

	else if (pilih == 2)

		hapus_data();

	else if (pilih == 3)

		cetak_data();

	else

	{
	    cout << "=================== KRISTO DERBI RELISON TANU ====================== " << endl;

	    cout << "======================== 201011401240 =====================" << endl;

	    cout << "======================== STRUKTUR DATA =====================" << endl;



        cout << " ==============TERIMA KASIH SAMPAI JUMPA DI PERTEMUAN BERIKUT==================== " << endl;

		cout << " ==================TUGAS STRUKTUR DATA LINKED LIST ANIMASI======================= " <<endl;

		cout << " =========================TERIMA KASIH TERIMA KASIH============================== " <<endl;


	}

}
cin.sync();

 cout<<"               Masukkan Nama : ";cin.getline (data->nama,40);

 cout<<"               Masukkan NIM : ";cin.getline(data->nim,20);

 cout<<"               Masukkan Gender : ";cin.getline(data->gender,20);

 cout<<"               Masukkan Nilai : ";cin>>data->nilai;
