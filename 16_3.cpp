#include <iostream>
#include <cstdlib>

int main()
{
	setlocale(0, "");
	double summ = 0;
	int f = 0, f1 = 0;
	int pr[12];
	for (int i = 1; i <= 12; i++)
	{
		std::cout << "Прибыль за " << i << " месяц: ";
		std::cin >> pr[i - 1];
	}
	for (int i = 0; i < 12; i++)
	{
		summ += pr[i];
	}
	for (int i = 0; i < 12; i++)
	{
		if (pr[i]>f)
		{
			f1 = i;
			f = pr[i];
		}
	}
	std::cout << "Максимальная прибыль в " << f1 + 1 << "месяце";
	for (int i = 0; i < 12; i++)
	{
		if (pr[i]<f)
		{
			f1 = i;
			f = pr[i];
		}
	}
	std::cout << "Минимальная прибыль в " << f1 + 1 << "месяце";
	std::cout << "Суммарная прибыль: " << summ << '\n' << "Средняя прибыль: " << summ / 12.0;
	system("pause");
	return 0;
}