#include<iostream>
#include<conio.h>
#include"stack.h"
#include"queue.h"
using namespace std;

int main() {
	cout<<"SELAMAT DATANG DI 203144 KURIR EXPRESS";
	int pil;
	int pilihan,baru,i;
	tumpukan.atas=-1;
a:
	do
	{
		cout<< "\n [1] Masukkan No. Antrian Kurir \n"
			<< " [2] Antrian Kurir yang akan Mengantar\n"
			<< " [3] No. Rumah Tujuan\n\n"
			<< "-------------------\n"
			<< "Masukkan pilihan : "; 
			cin >> pil;
		switch (pil)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
			case 3:
				goto y;
		default:
			cout << "Pilihan tidak tersedia";
			break;
		}
	} while (pil!=3);
y:
	do{
		cout<<"1.Masukkan Nomor Rumah\n";
		cout<<"2.Keluarkan Nomor Rumah\n";
		cout<<"3.Tampilkan sisa Rumah\n";
		cout<<"4.End\n";
		cout<<"\nPilihan = ";
		cin>>pilihan;
		switch(pilihan){
			case 1:if(tumpukan.atas==10-1){
					cout<<"Tumpukan Penuh";
					cout<<endl;
					getch();
				}else{
					cout<<"Masukkan Nomor Rumah = ";
					cin>>baru;
					push(baru);
				}
			cout<<"-------------------------------------\n";
			break;
			
			case 2:if(tumpukan.atas==-1){
					cout<<"Tumpukan Kosong";
					cout<<endl;
					goto a;
					getch();
				}else{
					cout<<"Rumah yang akan diantar = "<<tumpukan.data[tumpukan.atas];
					pop();
					cout<<endl;
					getch();
				}
			cout<<"-------------------------------------\n";
			break;
			
			case 3:if(tumpukan.atas==-1){
					cout<<"Tumpukan Kosong";
					cout<<endl;
					getch();
				}else{
					cout<<"\nNomor Rumah yang Belum Diantar : \n";
					tampil();
					cout<<endl;
					getch();
				}
			cout<<"-------------------------------------\n";
			break;
			
			default:break;
			}
		}
		while(pilihan!=4);
	}
