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
#include "conio.h"
using namespace std;

typedef struct data_penumpang *address2;
typedef struct data_penumpang{//Isi element di double linked list
    string nik;
    string nama;
    int umur;
    char jk;
    string no_hp;
    string kota;
    address2 next;
    address2 prev;
} data_penumpang1;

struct List2 {//alamat first dan last untuk double linked list
    address2 first;
    address2 last;
}List3 ;

 //SELEKTOR 
#define info(P) (P)->info
#define Next(P) (P)->next
#define Prev(P) (P)->prev
#define First(L) ((L).first)
#define Last(L) ((L).last)

//KONSTANTA
#define Nil NULL
#define Infinity 99999


/****************** TEST LIST KOSONG ******************/
bool IsEmpty2(List2 D) {
/* Mengirim true jika list kosong. Lihat definisi di atas. */
    return (First(D) == NULL && Last(D) == NULL);
}


/****************** PEMBUATAN LIST KOSONG ******************/
void createList2(List2 *D) {
/* I.S. D sembarang  */
/* F.S. Terbentuk list kosong. Lihat definisi di atas. */
    First(*D) = NULL;
    Last(*D) = NULL;
}


/****************** Manajemen Memori ******************/
address2 Allocation2(string nik,string nama,int umur, char jk, string no_hp,string kota) {
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak nil. */
/* Misalnya: menghasilkan P, maka Info(P)=nik,nama,umur,jk,no_hp,kota, Next(P)=Nil, Prev(P)=Nil */
/* Jika alokasi gagal, mengirimkan Nil. */
    address2 NewElmt;
    NewElmt = new data_penumpang1;
    NewElmt->nik = nik;
    NewElmt->nama = nama;
    NewElmt->umur = umur;
    NewElmt->jk = jk;
    NewElmt->no_hp = no_hp;
    NewElmt->kota = kota;
    NewElmt->next = Nil;
    NewElmt->prev = Nil;
    return NewElmt;
}

void Deallocation(address2 hapus) {
/* I.S. hapus terdefinisi */
/* F.S. hapus dikembalikan ke sistem */
/* Melakukan dealokasi/pengembalian address hapus */
    delete(hapus);
}


/****************** PENCARIAN SEBUAH ELEMEN LIST ******************/
address2 Search (List2 D, string nik){
/* Mencari apakah ada elemen list dengan Info(P)=nama */
/* Jika ada, mengirimkan address elemen tersebut. */
/* Jika tidak ada, mengirimkan Nil */
	address2 P = First(D);
	while (P != NULL){
		if (P->nik == nik){
			cout <<"\tNIK 	: " << P->nik  << endl;
			cout <<"\tNama	: " << P->nama << endl;
			cout <<"\tUmur	: " << P->umur << endl;
			cout <<"\tJK(P/L)	: " << P->jk   << endl;
			cout <<"\tNo.HP	: " << P->no_hp<< endl;
			cout <<"\tKota	: " << P->kota << endl;
			return P;
		}
		P = Next(P);
	}
	return Nil;
}

/****************** PENGUBAH SEBUAH ELEMEN LIST ******************/
address2 update(List2 D, string nik){
/* Mencari apakah ada elemen list dengan Info(P)=nama */
/* Jika ada, mengirimkan address elemen tersebut. */
/* Jika tidak ada, mengirimkan Nil */
	string ubah;
	address2 P = First(D);
	while (P != NULL){
		if (P->nik == nik){
			cout << "Update No.HP menjadi = ";
			cin>> ubah;
			P->no_hp= ubah;
			return P;
		}
		P = Next(P);
	}
	return Nil;
}


/****************** PRIMITIF BERDASARKAN NILAI ******************/
/*** PENAMBAHAN ELEMEN ***/
void InsertFirst2(List2 *D, string nik, string nama,int umur, char jk, string no_hp,string kota) {
/* I.S. D mungkin kosong */
/* F.S. Melakukan alokasi sebuah elemen dan */
/* menambahkan elemen pertama dengan nik,nama,umur,jk,no_hp,kota jika alokasi berhasil */
    address2 NewElmt;
    NewElmt = Allocation2(nik,nama,umur,jk,no_hp,kota);
    if (NewElmt != NULL) {
        if(IsEmpty2(*D)){
        	D->first = NewElmt;
        	D->last = NewElmt;
        } else{
        	Next(NewElmt) = First(*D);
        	Prev(First(*D)) = NewElmt;
        	First(*D) = NewElmt;
        }
    }
}

void InsertLast2(List2 *D, string nik, string nama, int umur, char jk, string no_hp,string kota) {
/* I.S. D mungkin kosong */
/* F.S. Melakukan alokasi sebuah elemen dan */
/* menambahkan elemen list di akhir: elemen terakhir yang baru */
/* bernilai nik,nama,umur,jk,no_hp,kota jika alokasi berhasil. Jika alokasi gagal: I.S.= F.S. */
    address2 NewElmt;
    NewElmt = Allocation2(nik,nama,umur,jk,no_hp,kota);
    if (NewElmt != NULL) {
        if(IsEmpty2(*D)){
        	InsertFirst2(D,nik,nama,umur,jk,no_hp,kota);
        } else{
        	Next(Last(*D)) = NewElmt;
        	Prev(NewElmt) = Last(*D);
        	Last(*D) = NewElmt;
        }
    }
}


/****************** PRIMITIF BERDASARKAN ALAMAT ******************/
/*** PENAMBAHAN ELEMEN BERDASARKAN ALAMAT ***/
void InsertFirst2(List2 *D, address2 P){
/* I.S. Sembarang, P sudah dialokasi  */
/* F.S. Menambahkan elemen ber-address P sebagai elemen pertama */
	if(IsEmpty2(*D)){
       	First(*D) = P;
    	Last(*D) = P;
    } else{
       	Next(P) = First(*D);
       	Prev(First(*D)) = P;
       	First(*D) = P;
    }
}

void InsertLast2 (List2 *D, address2 P){
/* I.S. Sembarang, P sudah dialokasi  */
/* F.S. P ditambahkan sebagai elemen terakhir yang baru */
	if(IsEmpty2(*D)){
       	InsertFirst2(D,P);
    } else{
       	Next(Last(*D)) = P;
       	Prev(P) = Last(*D);
       	Last(*D) = P;
    }
}

void InsertAfter2 (List2 *D, address2 P, address2 Prec){
/* I.S. Prec pastilah elemen list; P sudah dialokasi  */
/* F.S. Insert P sebagai elemen sesudah elemen beralamat Prec */
	if(Next(Prec) == Nil){
		InsertLast2(D,P);
	}else{
		Next(P) = Next(Prec);
		Prev(P) = Prec;
		Prev(Next(Prec))= P;
		Next(Prec) = P;
	}
}

void InsertBefore2 (List2 *D, address2 P, address2 Succ){
/* I.S. Succ pastilah elemen list; P sudah dialokasi  */
/* F.S. Insert P sebagai elemen sebelum elemen beralamat Succ */
	if(Succ == First(*D)){
		InsertFirst2(D,P);
	}else{
		Next(Prev(Succ)) = P;
		Prev(P) = Prev(Succ);
		Next(P) = Succ;
		Prev(Succ) = P;
	}
}


/*** PENGHAPUSAN SEBUAH ELEMEN ***/

void DelFirst (List2 *D, address2 *P){
/* I.S. List tidak kosong */
/* F.S. P adalah alamat elemen pertama list sebelum penghapusan */
/*      Elemen list berkurang satu (mungkin menjadi kosong) */
/* First element yg baru adalah suksesor elemen pertama yang lama */
	*P = First(*D);
	First(*D) = Next(*P);
	if(First(*D)!=NULL) Prev(First(*D)) = Nil;
	else Last(*D)=NULL;
	Deallocation(*P);
}

void DelLast (List2 *D, address2 *P){
/* I.S. List tidak kosong */
/* F.S. P adalah alamat elemen terakhir list sebelum penghapusan  */
/*      Elemen list berkurang satu (mungkin menjadi kosong) */
/* Last element baru adalah predesesor elemen pertama yg lama, jika ada */
	*P = Last(*D);
	Last(*D) = Prev(*P);
	Next(Last(*D)) = Nil;
	Prev(*P) = Nil;
	Deallocation(*P);
}



void DelAfter (List2 *D, address2 *Pdel, address2 Prec){
/* I.S. List tidak kosong. Prec adalah anggota list. */
/* F.S. Menghapus Next(Prec): */
/*      Pdel adalah alamat elemen list yang dihapus  */
	*Pdel = Next(Prec);
	Next(Prec) = Next(*Pdel);
	Prev(Next(*Pdel)) = Prec;
	Prev(*Pdel) = Nil;
	Next(*Pdel)= Nil;
	Deallocation(*Pdel);
}

void DelBefore (List2 *D, address2 *Pdel, address2 Succ){
/* I.S. List tidak kosong. Succ adalah anggota list. */
/* F.S. Menghapus Prev(Succ): */
/*      Pdel adalah alamat elemen list yang dihapus  */
	*Pdel = Prev(Succ);
	Next(Prev(*Pdel)) = Succ;
	Prev(Succ) = Prev(*Pdel);
	Prev(*Pdel) = Nil;
	Next(*Pdel) = Nil;
	Deallocation(*Pdel);
}

void DelP (List2 *D, string nik){//hapus Elemen yang ditunjuk dengan parameter pencari, yaitu nama
/* I.S. Sembarang */
/* F.S. Jika ada elemen list beraddress P, dengan Info(P)=nik  */
/* maka P dihapus dari list dan didealokasi */
/* Jika tidak ada elemen list dengan Info(P)=nama, maka list tetap */
/* List mungkin menjadi kosong karena penghapusan */
	address2 P = Search(*D,nik);
	address2 prec = Prev(P);
	if (P != Nil){
		if(P == First(*D)){
			DelFirst(D,&P);
		}else if(P == Last(*D)){
			DelLast(D,&P);
		}else{
			DelAfter(D,&P,prec);
		}
	}
}


/****************** PROSES SEMUA ELEMEN LIST ******************/
void PrintForward (List2 D){
/* I.S. List mungkin kosong */
/* F.S. Jika list tidak kosong, isi list dicetak dari elemen pertama */
/* ke elemen terakhir secara horizontal ke kanan: [e1,e2,...,en] */
/* Contoh : jika ada tiga elemen bernilai 1, 20, 30 akan dicetak: [1,20,30] */
/* Jika list kosong : menulis [] */
/* Tidak ada tambahan karakter apa pun di awal, akhir, atau di tengah */
	string s;
	if(!IsEmpty2(D)){
		address2 temp =First(D);
		while(Next(temp)!=NULL){
		cout<<"\tNIK\t:"<<temp->nik << endl;
		cout<<"\tNama\t:"<<temp->nama << endl;
		cout<<"\tUmur\t:"<<temp->umur << endl;
		cout<<"\tJK(P/L)\t:"<<temp->jk << endl;
		cout<<"\tNo.HP\t:"<<temp->no_hp << endl;
		cout<<"\tKota\t:"<<temp->kota << endl;
		cout<<endl<<endl;
		temp=Next(temp);		
		}
		cout<<"\tNIK\t:"<<temp->nik << endl;
		cout<<"\tNama\t:"<<temp->nama << endl;
		cout<<"\tUmur\t:"<<temp->umur << endl;
		cout<<"\tJK(P/L)\t:"<<temp->jk << endl;
		cout<<"\tNo.HP\t:"<<temp->no_hp << endl;
		cout<<"\tKota\t:"<<temp->kota << endl;
		cout<<endl<<endl;
		getch();
	} 
}
