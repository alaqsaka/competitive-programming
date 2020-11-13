#include <iostream>
using namespace std;

main()
{
	int x;
	int y; 
	
	cin >> x;
	cin >> y;
	
	if(x >= -1000 && x <= 1000 && y >= -1000 && y<= 1000 && y!=0 && x!=0){
		if(x>0 && y >0){
			cout << "1";
		}
		if(x<0 && y > 0){
			cout << "2";
		}
		if(x < 0 && y <0){
			cout << "3";
		}
		if(x >0 && y < 0){
			cout << "4";
		}
	}
	
	return 0;
}
