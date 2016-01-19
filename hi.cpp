#include <iostream>
using namespace std;

int main()
{
	bool isprime = true;
	{for (int n = 3; n <= 100; n++)
		for (int d = 2; d < n; d++)
			if (n % d == 0)
			{
				isprime = false;
				break;
			}

	if (isprime == true)
		cout << n << '\t';
	}

	return 0;

}
