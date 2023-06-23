#include <iostream>
using namespace std;

class queues {
	int fornt, rear, max = 5;
	int queue_array[5];

public:
	queues() {
		fornt = -1;
		rear = -1;
	}

	void insert() {
		int num;
		cout << "enter a number: ";
		cin >> num;
		cout << endl;

		//cek apakah antrian penuh
		if ((fornt == 0 && rear == max - 1) || (fornt == rear + 1)) {
			cout << "\nqueue overflow\n";
				return;
		}

		//cek apakah antrian kosong
		if (fornt == -1) {
			fornt = 0;
			rear = 0;
		}
	}
};