#include <iosteam>
using namespace std;

int a[20];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya element pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 element.\n";
		}
	}
	cout << endl;
	cout << "=====================";
	cout << "Masukkan Element Array";
	cout << "=====================";

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> a[i];
	}

}
