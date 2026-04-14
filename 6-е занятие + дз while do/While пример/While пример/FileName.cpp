#include <iostream>
using namespace std;
int main() {
	int f, f1, f2;
	f1 = 1;
	f2 = 1;
	cout << f1 << " " << f2 << " ";
	while (f2 <= 1000)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		if (f2 <= 1000) cout << f2 << " ";
	}
	return 0;
}