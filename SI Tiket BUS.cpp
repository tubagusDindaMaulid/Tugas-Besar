/*
	TUBES ASD RA
	Kelompok 6
	Anggota :
		1. Tubagus Dinda Maulid (118140087)
		2. Annastasia Puteri Dewi (118140127)
		3. Annisa Jufe Aryani (118140124)
*/

#include <iostream>
#include <stdlib.h>
#include "double.h"
#include "conio.h"
using namespace std;

typedef struct data_tujuan *address;
typedef struct data_tujuan{//Isi element di single liked list
	int no;
    string kota;
    string terminal;
    address next;
}data_tujuan1;

struct List {//alamat first untuk single linked list
    address first;
}List1;

/****************** PEMBUATAN LIST KOSONG ******************/
void CreateEmpty(List *L){//membuat list dalam kondisi kosong
/* I.S. L sembarang  */
/* F.S. Terbentuk list kosong. Lihat definisi di atas. */
    (*L).first = NULL;
}

/****************** Manajemen Memori ******************/
address Allocation(int no,string kota, string terminal){//memesan NewElmt di memory untuk single linked list
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak NULL. */
/* Misalnya: menghasilkan P, maka Info(P)=no,kota,terminal, Next(P)=NULL*/
/* Jika alokasi gagal, mengirimkan NULL. */
	address NewElmt = new data_tujuan1;
	
	NewElmt->no=no;
	NewElmt->kota=kota;
	NewElmt->terminal=terminal;
	NewElmt->next=NULL;

    return NewElmt;
}

/****************** TEST LIST KOSONG ******************/
bool IsEmpty(List L){
/* Mengirim true jika list kosong. Lihat definisi di atas. */
    return ((L).first == NULL);
}

void Deallocation(address hapus){
/* I.S. hapus terdefinisi */
/* F.S. hapus dikembalikan ke sistem */
/* Melakukan dealokasi/pengembalian address hapus */

    delete(hapus);
 }

/****************** PRIMITIF BERDASARKAN NILAI ******************/
/*** PENAMBAHAN ELEMEN ***/
void InsertFirst(List  *L, int no, string kota, string terminal){
    address P;
    P = Allocation(no,kota,terminal);

    if(P != NULL){
        P->next = (*L).first;
        (*L).first = P;
    }
}


void InsertAfter(address *PredElmt, int no, string kota, string terminal){
    address NewElmt;
    NewElmt = Allocation(no, kota, terminal);

    if(NewElmt != NULL){
        NewElmt->next = (*PredElmt)->next;
        (*PredElmt)->next = NewElmt;
    }
}


/****************** PROSES SEMUA ELEMEN LIST ******************/
void printInfo (List L){
	/*	I.S. List mungkin kosong
		F.S. Jika list tidak kosong,
		Semua info yg disimpan pada elemen list diprint dengan format [elemen-1, elemen-2, elemen-3, ...]
		Jika list kosong, hanya menuliskan "[]"
	*/
	int i=0;
	if(L.first != NULL){
		address p = L.first;
		cout<<"\n\t\t+------------------------------------------+";
		cout<<"\n\t\t|              MENU TUJUAN                 |";
		cout<<"\n\t\t+------------------------------------------+"<<endl;
		while(p->next != NULL){
			cout<<"\t\t\t" << ++i << ". " << p->kota<< "\t" << p->terminal <<endl;
			p = p->next;
		}
			cout<< "\t\t\t" << ++i <<". " << p->kota<< "\t" << p->terminal<<endl;
	}		
}

void cetakgaris(int n){//Untuk menampilkan garis tepi header
	for(int i=0;i<=79;i++){
		cout << "=";
	}
	cout << endl;
}

void header(){//Untuk menampilkan header program
	cetakgaris(79);
		cout << "\t\t\t    Selamat Datang!		" << endl;
		cout << "\t\t\t  PT.ABC Bus LAMPUNG		" << endl;
		cout << "\t\t\t Created by Kelompok 6	" << endl;
	cetakgaris(79);
}

struct bus{//struct data bus sebagai array of struct
	int kode_bus;
	string nama_bus,tujuan,berangkat;
	int kapasitas;
	string tipe_bus;
	int harga;
}bus1;

struct user{ //data user sebagai Array of Struct
	string nik;
	string nama;
	int umur;
	char jk;
	int no_hp;
}user1;

void Jakarta(bus a[]){ //menampilkan jadwal keberangkatan bus tujuan "Jakarta"
	for(int i=0;i<=5;i++){
		if(a[i].tujuan=="Jakarta"){
			cout<< "\t " << a[i].kode_bus << "\t     " << a[i].nama_bus << "\t   " << a[i].tujuan << "\t " << a[i].berangkat << "\t\t" << a[i].kapasitas << "\t  " << a[i].tipe_bus << "\t" << a[i].harga <<endl;
		} 
	}
}

void Bandung(bus a[]){//menampilkan jadwal keberangkatan bus tujuan "Bandung"
	for(int i=6;i<=10;i++){
		if(a[i].tujuan=="Bandung"){
			cout<< "\t " << a[i].kode_bus << "\t     " << a[i].nama_bus << "\t   " << a[i].tujuan << "\t " << a[i].berangkat << "\t\t" << a[i].kapasitas << "\t  " << a[i].tipe_bus << "\t" << a[i].harga <<endl;
		}
	}
}

void Semarang(bus a[]){//menampilkan jadwal keberangkatan bus tujuan "Semarang"
	for(int i=11;i<=13;i++){
		if(a[i].tujuan=="Semarang"){
			cout<< "\t " << a[i].kode_bus << "\t     " << a[i].nama_bus << "\t   " << a[i].tujuan << "\t " << a[i].berangkat << "\t\t" << a[i].kapasitas << "\t  " << a[i].tipe_bus << "\t" << a[i].harga <<endl;
		}
	}
}

void Surabaya(bus a[]){//menampilkan jadwal keberangkatan bus tujuan "Surabaya"
	for(int i=14;i<=17;i++){
		if(a[i].tujuan=="Surabaya"){
			cout<< "\t " << a[i].kode_bus << "\t     " << a[i].nama_bus << "\t   " << a[i].tujuan << "\t " << a[i].berangkat << "\t\t" << a[i].kapasitas << "\t  " << a[i].tipe_bus << "\t" << a[i].harga <<endl;
		}
	}
}

void tampilan_bus(){
	cout<<"\n  +---------------------------------------------------------------------------------------------+";
	cout<<"\n  |\t\t\t\t\t\tPILIH BUS\t\t\t\t\t|";
	cout<<"\n  +---------------------------------------------------------------------------------------------+";
	cout<<"\n      Kode Bus      Nama Bus	    Tujuan     Berangkat     Kapasitas     Tipe Bus     Harga ";
	cout<<"\n      --------    ------------    --------    ----------   -----------   ----------    -------"<<endl;
}
void tampilan_jumlah(){
	cout<<"\n\t+=========================================================+";
	cout<<"\n\t|                  Jumlah Penumpang                       |";
	cout<<"\n\t+=========================================================+";
}

void tampilan_biodata(){
	cout<<"\n\t+=========================================================+";
	cout<<"\n\t|                   BIODATA PENUMPANG                     |";
	cout<<"\n\t+=========================================================+";	
	cout<<endl;
}
void tampilan_tiket(){
	cout<<"\n  +-------------------------------------------------------------------------+";
	cout<<"\n  |                             DATA PENUMPANG                              |";
	cout<<"\n  +-------------------------------------------------------------------------+";
	cout<<"\n        ID       Nama Penumpang      Nama Bus      tujuan     berangkat";
	cout<<"\n      -------   ----------------   ------------   ---------   ----------"<<endl;
}

void menu(){
  cout<<"Pilihan Menu"<<endl;
  cout<<"1.Tampilkan Data Penumpang"<<endl;
  cout<<"2.Tambah Data Penumpang"<<endl;
  cout<<"3.Update Data Penumpang"<<endl;
  cout<<"4.Hapus Data Penumpang"<<endl;
  cout<<"5.Cari Data Penumpang"<<endl;
  cout<<"6.Keluar"<<endl;
}

int total(int x,bus y[],int kb){//Rumus harga tiket 
	int total,idx;
	for(int i=0; i<18; i++){
		if(kb==y[i].kode_bus) idx=y[i].harga ;
	}
		total=x*idx;
	
	return total;
}

int main(){	
	bus data_bus[18];//panggil fungsi struct sebagai array of struct
	
	data_bus[0]={1,"Damri","Jakarta","10:00",47,"Eksekutif",230000};
	data_bus[1]={2,"Puspa","Jakarta","10:00",35,"Ekonomi",190000};
	data_bus[2]={3,"Handoyo","Jakarta","09:45",50,"Eksekutif",275000};
	data_bus[3]={4,"Damri","Jakarta","09:00",30,"Ekonomi",150000};
	data_bus[4]={5,"Handoyo","Jakarta","08:45",44,"Bisnis",225000};
	data_bus[5]={6,"Puspa","Jakarta","07:00",45,"Bisnis",225000};
	data_bus[6]={7,"Damri","Bandung","20:00",47,"Executif",230000};
	data_bus[7]={8,"Puspa Jaya","Bandung","19:30",35,"Ekonomi",220000};
	data_bus[8]={9,"Damri","Bandung","18:45",30,"Ekonomi",230000};
	data_bus[9]={10,"Handoyo","Bandung","18:30",44,"Bisnis",280000};
	data_bus[10]={11,"Puspa","Bandung","18:15",45,"Bisnis",275000};
	data_bus[11]={12,"Damri","Semarang","23:30",30,"Ekonomi",300000};
	data_bus[12]={13,"Handoyo","Semarang","22:15",44,"Bisnis",350000};
	data_bus[13]={14,"Handoyo","Semarang","22:00",55,"Eksekutif",435000};
	data_bus[14]={15,"Puspa","Surabaya","18:10",35,"Ekonomi",400000};
	data_bus[15]={16,"Puspa","Surabaya","17:00",50,"Executif",500000};
	data_bus[16]={17,"Damri","Surabaya","17:00",30,"Ekonomi",390000};
	data_bus[17]={18,"Handoyo","Surabaya","16:45",44,"Bisnis",460000};
	
	List L;//Single Linked list
	CreateEmpty(&L);
	InsertFirst(&L,5,"Keluar","");
	InsertFirst(&L,4,"Surabaya","Adi Sucipto");	
	InsertFirst(&L,3,"Semarang","Diponogoro");
	InsertFirst(&L,2,"Bandung","Lebak Bulus");
	InsertFirst(&L,1,"Jakarta","Gambir");
	
	
	
	List2 D;//Double Linked List
	createList2(&D);
	InsertFirst2(&D,"1871012806990001","Tubagus Dinda",20,'L',"087820933376","Jakarta");
	InsertFirst2(&D,"1871010207970005","Annisa Jufe",23,'P',"085381481234","Bandung");
	InsertFirst2(&D,"1871011001020006","Anastasia Putri",17,'P',"087843211234","Semarang");		
	InsertFirst2(&D,"1871011405010004","Ariq Rafi",18,'L',"081244443333","Surabaya");
		
	home://kembali ketampilan awal
	system("cls");//membersihkan layar output
	menu();//menu tampilan
	int a;
	cout << "Pilih nomor(1-6) : "; cin >>a;
	if(a==1){//Tampilkan Data Penumpang
		
		PrintForward(D);
		goto home;
		
	} else if(a==2){//Tambah Data Penumpang
		system("cls");
		header();
		cout<<endl;
		printInfo(L);
			int tujuan;
				cout<<"\n\t\t   KODE TUJUAN : "; cin>>tujuan;
				cout << endl;
			system("cls");
			
			tampilan_bus();
			if(tujuan==1){
				Jakarta(data_bus);
			} else if(tujuan==2){
				Bandung(data_bus);	
			} else if(tujuan==3){
				Semarang(data_bus);
			} else if(tujuan==4){
				Surabaya(data_bus);
			} else if(tujuan==5){
				system("cls");
				exit(0);
			} else {
				system("cls");
				exit(0);
			}
			
		int kb;
			cout << "=>Kode Bus = "; cin >> kb;		
			
		system("cls");
		
		int jumlah;
		tampilan_jumlah();
			cout<<"\n\t  => Jumlah Penumpang = "; cin>> jumlah;
			cout<<"\n\t  => Total = "<<total(jumlah,data_bus,kb);
		

		char y;
			cout<<"\n\t+---------------------------------------------------------+";
			cout<<"\n\t  => Apakah Setuju ? [Y/N] : "; cin>>y;
			cout<<"\n\t+---------------------------------------------------------+"<<endl;
			
			
		string nik, nama;
		int umur;
		char jk;
		string no_hp;
		string kota;
		
			if(y=='Y'||y=='y'){
				for (int i=1; i<=jumlah; i++){
					cout<<"\n\t+---------------------------------------------------------+";
					cout<<"\n\t|                  PENUMPANG ke-"<<i<<"                         |";
					cout<<"\n\t+---------------------------------------------------------+";
					tampilan_biodata();
					cout<<"\tNIK\t: "; cin>>nik;
					cout<<"\tNama\t: "; cin.ignore();
					getline(cin,nama); 
					cout<<"\tUmur\t: "; cin >> umur;
					cout<<"\tJK(P/L)\t: "; cin >> jk;
					cout<<"\tNo.HP\t: "; cin >> no_hp;
					cout <<"\tKota\t: "; cin >> kota;
					InsertFirst2(&D,nik, nama, umur,jk,no_hp,kota);
				} 
				goto home;		
			} else {
				goto home;
			}
			
	} else if(a==3){//Update Data Penumpang 
		string ubah;//cari berdasarkan NIK
		cout << "Update data berdasarkan NO HP" << endl;
		cout << "Masukkan NIK untuk mengupdate No HP: ";
		cin >> ubah;//ubah No HP
		cout << endl;
		cout << "\t\t " << update(D,ubah);
		goto home;
		
	} else if(a==4){//Hapus Data Penumpang berdasarkan NIK
		string hapus;
		cout << "Hapus data berdasarkan NIK" << endl;
		cout << "Masukkan NIK yang di cari : ";
		cin >> hapus;
		cout << endl;
		DelP(&D,hapus);
		goto home;
		
	} else if(a==5){//Cari Data Penumpang
		string cari;
		cout <<"Cari data penumpang berdasarkan NIK" << endl;
		cout << "Masukkan NIK untuk menghapus No HP :";
		cin >> cari;
		address2 temp;
		temp=Search(D,cari);
		if(temp!=NULL){
			temp->nik;
			temp->nama;
			temp->umur;
			temp->jk;
			temp->no_hp;
			temp->kota;
			getch();
		} else {
			cout << " ";
		}
		goto home;
		
	} else if(a==6){//Keluar dari Program
		goto keluar;
	}
	keluar:
	
	system("cls");
	
	return 0;
}
