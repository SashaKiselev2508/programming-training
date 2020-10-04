#include <iostream>

int main()
{
	int n, x;
	std::cin >> n;
	std::cin >> x;
	
	int y = 0;
	
	if(n > 2)
	{
		int z = 0;

		y = (n - 2)/x + 1;
		z = (n - 2)%x;

		if(z != 0)
			y++;
	}
	else
		y = 1;

	std::cout << y;

	return 0;
}
