#include <iostream>
using namespace std;
int main()
{
	int C; // test cases
	int N; // number of people in the class
	int G[N], score; // final grade
	int total; // total score
	int i, j;
	cin >> C;
	float P[C]; // store the percentage
	float above[C];
	for(i=1; i<=C;i++){
		cin>>N;
		for(j=1; j<=N; j++){
			cin >> G[i];
			total += G[i];
			P[i] = total / N;
		}
		total = 0;
	}
	int count;
	for(i=1; i<= C; i++){
		for(j=1; j<=N; j++){
			if(G[i] > P[i]){
				count++;
				
			}
		}
	}
}
