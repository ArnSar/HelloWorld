#include "Header.h"

int main()
{
	int n;

	std::cout << "Enter a number between 2 and 50." << std::endl;

	while (true)
	{
		std::cin >> n;
		if (n > 50 || n < 2)
		{
			std::cout << "Invalid number. Try again." << std::endl;
		}
		else
		{
			break;
		}
	}

	std::vector<int> series(n);
	series[0] = 0;
	series[1] = 1;

	int PrintVector(std::vector<int> series);

}