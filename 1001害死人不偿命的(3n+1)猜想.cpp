#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n = 0;
	int t = 0;
	cin >> n; //cin����Ҫ��endl �ᱨ��
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = ((3 * n)+1) / 2;
		}
		t++;
	}
	cout << t << endl;
	return 0;
}