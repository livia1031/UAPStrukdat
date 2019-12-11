#include <iostream>
#include "tumpuk.h"
using namespace std;

// fungsi inisialisasi stack = kosong
void inisialisasi(){
  tumpukan.atas = -1;
} 

//fungsi mengecheck apakah stack kosong
int IsEmpty(){
	if (tumpukan.atas == -1){
		return 1;
		}else{
			return 0;
		}
	}


//fungsi mengecheck apakah stack penuh

int IsFull(){
	if (tumpukan.atas == 10-1){
		return 1;
		} else{
			return 0;
		}
	} 

//fungsi untuk menyisipkan data ke stack

void push(int data){
 tumpukan.atas++;
 tumpukan.data[tumpukan.atas] = data;
}
//fungsi untuk mengeluarkan data dari stack

void pop(){
 tumpukan.atas = tumpukan.atas - 1;
 if(tumpukan.atas<0){
 	tumpukan.atas = -1;
 	}
 }
 
 void tampil(){
 	for(int i=tumpukan.atas; i>=0; i--){
 		cout<<"Nomor rumah "<<i+1<<" : "<<tumpukan.data[i]<<endl;
    }
 }
