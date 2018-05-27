#include<iostream>

using namespace std;

int main()
{
	int h1,h2;
	int m1, m2;
	int g;
	
		cin >> h1 >> m1;
		cin >> h2 >> m2;

		g = ((h2 * 60) + m2) - ((h1 * 60) + m1);

		if (g > 30 && g < 120)
		{
			cout << (g / 30) * 30 << endl;
		}
		else if (g > 120 && g < 240)
		{
			cout << 120 + (((g - 120) / 30) * 40) << endl;
		}
		else if (g>240)
		{

			cout << 280 + (((g - 240) / 30) * 60) << endl;

		}

	
	return 0;

}
