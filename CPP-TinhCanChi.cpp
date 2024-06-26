
#include <iostream>
using namespace std;
int main()
{

	string  can[10] = { "canh", "tan","nham","quy", "giap","at", "binh","dinh", "mau","ky" };
	string  chi[12] = { "than", "dau", "tuat", "hoi", "ti", "suu","dan", "meo","thin ","ty","ngo","mui"};

	int nam;
	cout << "nhap nam: ";
	cin >> nam;

	string cn = can[nam % 10];
	string ci = chi[nam % 12];
	cout << cn << " " << ci;

	return 0;

}
