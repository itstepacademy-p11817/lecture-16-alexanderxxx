#include <iostream>
#include <cstdlib>

int main()
{
	int m1[7]{ 1,2,3,4,5,6,7 };
	for (int i = 6; i >= 0; i--)
	{
		std::cout << m1[i];
	}
	system("pause");
	return 0;
}