#include<iostream>
#include<conio.h>
#include"tubes.h"
#include"antri.h"
using namespace std;
 


bool isFull() {
	return queue.akhir == batas;
}

bool isEmpty() {
	return queue.akhir == 0;
}

void printQueue() {
	if (isEmpty()) {
    cout << "Antrian kosong"<<endl;
	}
	else {
		cout << "QUEUE : ";
		for (int i = queue.awal; i < queue.akhir; i++)
			cout << queue.data[i] << ((queue.akhir-1 == i) ? "" : ",");
		cout << endl;
  }
}

void enqueue() {
	if (isFull())
	{
		cout << "Antrian penuh!"<<endl;
	}
	else {
		int data;
		cout << "Masukkan Data : ";
		cin >> data;
		queue.data[queue.akhir] = data;
		queue.akhir++;
		cout << "Antrian ditambahkan\n";
		printQueue();
	}
}

void dequeue() {
	if (isEmpty())
	{
		cout << "Antrian masih kosong"<<endl;
	}
	else{
		cout << "Mengambil nomor antrian ke - " << queue.data[queue.awal] << endl;
		cout<<"Antrian yang tersisa : \n";
		for (int i = queue.awal; i < queue.akhir; i++)
			queue.data[i] = queue.data[i + 1];
		queue.akhir--;
		printQueue();
	}
}


int main() {
	cout<<"SELAMAT DATANG DI 203144 KURIR EXPRESS";
	int pil;
	int pilihan,baru,i;
tumpuk.atas=-1;
a:
	do
	{
		cout << "\n [1] Masukkan No. Antrian Kurir \n"
			<< " [2] Antrian Kurir yang akan Mengantar\n"
			<< " [3] Memasukkan No. Rumah \n\n"
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
	} while (pil !=3);
y:
do
{
cout<<"1.Masukkan Nomor Rumah\n";
cout<<"2.Keluarkan Nomor Rumah\n";
cout<<"3.Tampilkan sisa Rumah\n";
cout<<"4.End\n";
cout<<"\nPilihan = ";
cin>>pilihan;
switch(pilihan)
{
case 1:
{
if(tumpuk.atas==10-1)
{
cout<<"Tumpukan Penuh";
cout<<endl;
getch();
}
else
{
cout<<"Masukkan Nomor Rumah = ";
cin>>baru;
tumpuk.atas++;
tumpuk.data[tumpuk.atas]=baru;
}
cout<<"-------------------------------------\n";
break;
}
case 2:
{
if(tumpuk.atas==-1)
{
cout<<"Tumpukan Kosong";
cout<<endl;
goto a;
getch();
}
else
{
cout<<"Rumah yang akan diantar = "<<tumpuk.data[tumpuk.atas];
tumpuk.atas--;
cout<<endl;
getch();
}
cout<<"-------------------------------------\n";
break;
}
case 3:
{
if(tumpuk.atas==-1){
cout<<"Tumpukan Kosong";
cout<<endl;
getch();
}
else
{
   cout<<"\nNomor Rumah yang Belum Diantar : \n";
for(int i=tumpuk.atas; i>=0; i--)
       {
 cout<<"Nomor rumah "<<i+1<<" : "<<tumpuk.data[i]<<endl;
       }
cout<<endl;
getch();
}
cout<<"-------------------------------------\n";
break;
}
default:
break;
}
}
while(pilihan!=4);
}
