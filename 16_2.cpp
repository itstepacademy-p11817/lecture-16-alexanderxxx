#include <iostream>
#include <cstdlib>

int main()
{
	setlocale(0, "");
	int perimetr = 0;
	int m[5];
	for (int i = 0; i < 5; i++)
	{
		std::cout << " Сторона пятиугольника: ";
		std::cin >> m[i];
	}
	for (int i = 0; i < 5; i++)
	{
		perimetr += m[i];
	}
	std::cout << '\n' << perimetr;
	system("pause");
	return 0;
}