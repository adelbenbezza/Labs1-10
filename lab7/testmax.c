#include<stdio.h>
#include"max.h"

int main() {
	int n=5;
	int maxx;	
	int t[5] = {2, 5, 7, 2, 9};
	max(t, n, &maxx);
	printf("%d", maxx);
	return 0;
}
