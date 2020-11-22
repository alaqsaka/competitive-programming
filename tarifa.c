#include <stdio.h>

int main()
{
	int X; 
	int N;
	
	
	scanf("%d", &X); // Megabytes per month
	scanf("%d", &N); // Numbers of months
	int P[N];
	int i = 1; 
	while(i<=N){
		scanf("%d", &P[i]);
		i++;
	}
	
	int sisa_Mb;
	int total = 0;
	for(i=1; i<=N; i++){
		if(i == 1)
			sisa_Mb = X - P[i];
		else
			sisa_Mb = total + X - P[i];
		total = sisa_Mb;
	}
	
	printf("%d", sisa_Mb+X);
	return 0;
}
