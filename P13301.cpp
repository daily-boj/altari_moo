#include <iostream>
long long fibo[80] = { 1, 1 };
int main() {
	int N;
	std::cin >> N;
	for (int i = 2; i < N; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];
	N--;
	std::cout << (fibo[N] * 4) + (fibo[N - 1] * 2);
}