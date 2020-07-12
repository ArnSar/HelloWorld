#include "Header.h"

int PrintVector(std::vector<int> series)
{
	int n;
	for (int i = 2; i < n; i++)
	{
		series[i] = series[i - 1] + series[i - 2];
		std::cout << series.at(i) << std::endl;
	}
	return series.at(i);
}
