#include <iostream>
#include <cmath>
using namespace std;

main()
{
	double X;
	cin >> X;
	if(X>=0 && X<= 1000)
	{
		int pace;
		pace = X * (5280.0 / 4854.0) * 1000.0 + 0.5;
		cout << "" << round(pace);
	}
	
	return 0;
}

