#include <iostream>
#include <vector>
using namespace std;

vector<string> ent;
string L;
unsigned long long T, R, C, A;

int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> R >> C;
		A = 0;
		for (int j = 0; j < R; j++) {
			cin >> L;
			ent.push_back(L);
		}
		for (int j = 0; j < R; j++) {
			for (int k = 0; k < C; k++) {
				if (ent[j][k] == 'o') {
					if (k != 0 || k != C - 1) {
						if (ent[j][k - 1] == '>' && ent[j][k + 1] == '<') {
							A += 1;
						}
					}
					if (j != 0 || j != R - 1) {
						if (ent[j - 1][k] == 'v' && ent[j + 1][k] == '^') {
							A += 1;
						}
					}
				}
			}
		}
		cout << A << endl;
	}
}