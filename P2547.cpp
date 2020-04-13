#include <iostream>
using namespace std;

unsigned long long T, N, S, P;

int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		S = 0;
		for (int j = 0; j < N; j++) {
			cin >> P;
			S += P % N;
		}
		(S % N == 0) ? cout << "YES" << endl : cout << "NO" << endl;
	}
}