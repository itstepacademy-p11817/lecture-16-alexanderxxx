#include <iostream>
#include <cstdlib>

int main()
{
	setlocale(0, "");
	int a[6]{ 1,2,1,2,1,2 }, b[2]{ 1,2 };
	int f = 0;
	for (int i = 0; i < 6; i++)
	{

		if (a[i] == b[0] && a[i + 1] == b[1])
		{
			std::cout << i;
		}
	}
	std::cout << '\n';
	system("pause");
	return 0;
}