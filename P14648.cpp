#include <iostream>
#define F(x, y) for (int x = 1; x < y; x++)
#define super long long
using namespace std;

super N, Q, P[1001], T[1001], query, a, b, c, d;

super sum(super po) {
	super r = 0;
	for (int p = po; p > 0; p -= (p & -p))
		r += T[p];
	return r;
}

void update(super po, super v) {
	for (int p = po; p < N + 1; p += (p & -p)) T[p] += v;
}

void init() {
	F(i, N + 1) T[i] = 0;
	F(i, N + 1) update(i, P[i]);
}

int main() {
	ios::sync_with_stdio(false);
	cin >> N >> Q;
	F(i, N + 1) cin >> P[i];
	F(i, N + 1) update(i, P[i]);
	F(i, Q + 1) {
		cin >> query >> a >> b;
		if (query == 1) {
			cout << sum(b) - sum(a - 1) << endl;
			int SA, SB; SA = P[b]; SB = P[a];
			P[a] = SA; P[b] = SB;
			init();
		}
		if (query == 2) {
			cin >> c >> d;
			cout << (sum(b) - sum(a - 1)) - (sum(d) - sum(c - 1)) << endl;
		}
	}
}