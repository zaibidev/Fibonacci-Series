#include <iostream>
using namespace std;
int main()
{
	int n, n1=0, n2=1, x=0;
	cout << "Enter the number of terms: ";
	cin >> n;
	cout << "Fibonacci Series of entered number is: ";
	for (int i = 0; i <= n; i++)
	{
		if (i == 1)
		{
			cout << " " << n1;
			continue;
		}
		if (i == 2)
		{
			cout << " " << n2;
			continue;
		}
		x = n1 + n2;
		n1 = n2;
		n2 = x;
		cout << x << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
