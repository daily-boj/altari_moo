//Baekjoon OJ P1340 
//altari_moo
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string month[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
string M2, T, D2;
int Y, D, M = 0;
double h, min2, days2, days = 0;
double day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
	cin >> M2 >> D2 >> Y >> T;
	cout.precision(17);

	D2.erase(D2.size() - 1);
	D = atoi(D2.c_str()); //remove , in day

	if ((Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0) {
		day[1] = 29;
		days2 += 1;
	}

	for (int i = 0; i < 12; i++)
		if (M2 == month[i]) M = i + 1;

	for (int i = 0; i < M; i++) 
		days += day[i];

	days2 += 365;
	days -= day[M - 1] - D + 1;
	
	string hour, minu;
	hour = T.substr(0, 2); minu = T.substr(3, 4); //get time
	h = atoi(hour.c_str()); min2 = atoi(minu.c_str());
	h *= 3600; days *= 86400; min2 *= 60;

	double result = ((days + min2 + h) / (days2 * 86400))*100;
	cout << result;
}