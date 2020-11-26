#include<stdio.h>
#include"var.h"

int main() {
	int n=5;
	float varr;	
	int t[5] = {2, 5, 7, 2, 9};
	var(t, n, &varr);
	printf("%f", varr);
	return 0;
}
