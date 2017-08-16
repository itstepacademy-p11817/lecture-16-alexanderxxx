#include <iostream>
#include <cstdlib>

int main()
{
	setlocale(0, "");
	int m[10], m2[10];
	int f0 = 9, f1 = 0;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> m[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (m[i] == 0)
		{
			m2[f0] = -1;
			f0--;
		}
		else
		{
			m2[f1] = m[i];
			f1++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << m2[i];
	}

	system("pause");
	return 0;
}