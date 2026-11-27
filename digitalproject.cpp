#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int* a = (int*)malloc(sizeof(int) * 11);
	a[0] = 0;
	string q = "Имя__\tid___\tИА\tДМ\tИЯ\tЛА\tМА\tОП\tОА\tФ_\tЯП\nИвано\t1\t3\t3\t3\t3\t5\t5\t5\t5\t5\nИвано\t1\t5\nИвано\t1\t5\t5\t5\t5\t5\t5\t5\t5\t5";
	ofstream spisok("studlist.txt");
	for (;;) {
		int y;
		cout << "Что вы хотите сделать\n";
		cout << "1-добавить студента\n";
		cout << "2-убрать студента\n";
		cout << "3-вывести список студентов\n";
		cout << "4-вывести список студентов с малым количеством троек\n";
		cin >> y;
		if (y == 1) {
			int r;
			cin >> r;
			if (r == 1) {
				spisok << q;
			}
			int n;
			cin >> n;
			if (n == 1) {
				string a;
				cin >> a;
				a.insert(5, "\t");
				a.insert(7, "\t");
				a.insert(9, "\t");
				a.insert(11, "\t");
				a.insert(13, "\t");
				a.insert(15, "\t");
				a.insert(17, "\t");
				a.insert(19, "\t");
				a.insert(21, "\t");
				a.insert(23, "\t");
				q.append(a);
				spisok << q << "\n";
			}
			if (n == 2) {
				int t;
				cin >> t;
				t = 14 + (t - 1) * 10;
				q.erase(t, 10);
				spisok << q;
			}
			if (n == 3) {
				string u;
				ifstream spisok("studlist.txt");
				while (getline(spisok, u)) {
					cout << u;
				}
			}
			if (n == 4) {
				int g = 0;
				int k = 0;
				for (int r = 0, int o = 0; r < q.rfind("\n"); r += 1, o += 1) {
					if (r % 38 == 0) {
						g += 1;
						o = 0;
						if (int(q[r]) == 3) {
							k += 1;
							if (k >= 3) {
								if (o > 12) {
									cout << q.substr(g * 38, (g + 1) * 38);
								}
							}
						}
					}
				}
			}
			if (n == 5) {
				ofstream shifr("studshifr.txt");
				ofstream shifrkey("studshifrkey.txt");
				int v;
				int p;
				int p1;
				string crypt;
				string alp = "ёйцукенгшщзхъфывапролджэячсмитьбю1234567890_\t\n";
				int start = 0;
				int end = 9;
				int a1 = rand() % (end - start + 1) + start;
				int a2 = rand() % (end - start + 1) + start;
				int a3 = rand() % (end - start + 1) + start;
				int a4 = rand() % (end - start + 1) + start;
				cout << a1;
				cout << a2;
				cout << a3;
				cout << a4;
				cout << "введите количество студетов\n";
				cin >> v;
				int f[v];
				int numbers[v * 26 + 39];
				for (int g = 0; g < v; g += 1) {
					p = (a1 * a1) * (g * g * g * g) + (a2 * a2 * a2) * (g * g * g) + (a3 * a3) * (g * g) + (a4 * a4 * a4) * (g);
					p1 = p % 47;
					crypt.append(alp[p1]);
					f.append(p)
						shifr << crypt;
					shifrkey << f
				}
			}
		}
	}
}
