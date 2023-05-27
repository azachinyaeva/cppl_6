#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

int main()
{
	std::string str;
	std::cout << "[IN] " << '\n';
	std::getline(std::cin, str);

	std::unordered_map <char, int> ms;
	for (const auto& c : str)
	{
		auto itr = ms.find(c);
		if (itr == ms.end())
		{
			ms.insert({ c, 1 });
		}
		else
		{
			++((*itr).second);
		}
	}

	std::multimap<int, char, std::greater<char>> mm;
	for (const auto& [a, b] : ms)
	{
		mm.insert({ b, a });
	}

	std::cout << "[OUT] " << '\n';

	for (const auto& [b, a] : mm)
	{
		std::cout << b << ": " << a << '\n';
	}
	return 0;
}
