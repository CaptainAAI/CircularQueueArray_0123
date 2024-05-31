#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];

public:
	Queues() {
		FRONT = -1;
		REAR = -1;
	}
	void insert() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;
		//CHECK APAKAH ANTRIAN PENUH
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)); {
			cout << "\nQueue overflow\n";
			return;
		}

		//CEK APAKAH ANTRIAN KOSONG
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		else {
			//JIKA REAR BERADA DI POSISI TERAKHIR ARRAY, KEMBALI KE AWAL ARRAY
			if (REAR == max - 1)
				REAR = 0;
			else
				REAR = REAR + 1;
		}
		queue_array[REAR] = num;

	}

	void remove() {
		//CEK APAKAH ANTRIAN KOSONG
		if (FRONT == -1) {
			cout << "queue underflow\n";
			return;
		}
		cout << "\nThe element deleted from the queue is: " << queue_array[FRONT] << '\n';


	}








};