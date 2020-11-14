#include <iostream>
using namespace std;

main()
{
	int N;
	cin >> N;
	if(N>=1 && N <= 100)
	{
		int i; 
		for(i=1; i<=N; i++){
			cout << "" << i << " Abracadabra" << endl;
		}
	}
}
