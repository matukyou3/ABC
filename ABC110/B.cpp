#include<iostream>
int main()
{
	int N, M;
	int X, Y;
	int x[110];
	int y[110];
	std::string res = "No War";

	std::cin >> N >> M >> X >> Y;
	for (int i = 0; i < N; i++)
	{
		std::cin >> x[i];
	}
	for (int j = 0; j < M; j++)
	{
		std::cin >> y[j];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (x[i] >= y[j] || x[i]>=Y)
			{
				res = "War";
				std::cout << res.c_str() << std::endl;
				return 0;
			}
		}
	}
	for (int j = 0; j < M; j++)
	{
		if (X >=y[j] || X >= Y)
		{
			res = "War";
			std::cout << res.c_str() << std::endl;
			return 0;
		}
	}
	
	std::cout << res.c_str() << std::endl;
	return 0;

}