#include <iostream>
using namespace std;
int main()
{
	int num;
	int mask = 1;
	int count = 0;
	int i;
	cin >> num;
	for (i = 0; i < 8; i++)
	{
		if ((mask & num) == 1)
			count++;
		num = num >> 1;
	}
	cout << count;
	return 0;
}