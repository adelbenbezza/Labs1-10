#include<stdio.h>
#include"max.h"
#include"min.h"
#include"var.h"


int main() {
	int n=10;
	int t[10] = {4, 9, 10, 11, 12, 15, 12, 9, 0 ,30};
	int maxx, minn;
	float varr;	
	min(t, n, &minn);
	max(t, n, &maxx);
	var(t, n, &varr);
	printf("max = %d\n", maxx);
	printf("min = %d\n", minn);
	printf("var = %f\n", varr);
	return 0;
}
