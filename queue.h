#include <iostream>
#include "antri.h"
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
		cout<<"Masukkan Data : ";
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
