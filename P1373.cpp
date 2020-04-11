#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string input, output;

void _insert() {
	if (input.size() % 3 != 0) {
		input.insert(input.begin(), '0');
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> input;
	_insert();
	if (input.size() % 3 != 0) {
		_insert();
	}

	int f = 4;

	for (int i = 0; i < input.size(); i += 3) {
		int o = 0;
		for (int j = 0; j < 3; j++) {
			if (input[i + j] == '1') {
				o += f;
			}
			f /= 2;
		}
		cout << o << endl;
		f = 4;
	}
}