#include <iostream>
#include <set>

int main()
{
	int size, n;
	std::cout << "[IN] " << '\n';
	std::cin >> size;
	std::set<int,std::greater<int>> my_set;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> n;
		my_set.insert(n);
	}
	std::cout << "[OUT] " << '\n';
	for (const auto& elem : my_set)
		std::cout << elem << '\n';
	return 0;
}
