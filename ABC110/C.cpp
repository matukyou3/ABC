#include <iostream>
#include<string>
int main()
{
	std::string S, T;
	std::string res = "Yes";
	std::cin >> S >> T;
	int i = 0;
	int j = 0;
	auto ite_S = S.begin();
	auto ite_T = T.begin();
	for (ite_S; ite_S != S.end(); ++ite_S, ++ite_T,i++,j++)
	{
		if ((int)S.find(*ite_S, i+1) != (int)T.find(*ite_T, j+1))
		{
			res = "No";
			std::cout << res << std::endl;
			return 0;
		}
	}
	std::cout << res << std::endl;
	return 0;
}
