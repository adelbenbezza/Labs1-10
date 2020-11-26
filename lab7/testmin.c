#include<stdio.h>
#include"min.h"

int main() {
	int n=5;
	int minn;	
	int t[5] = {2, 5, 7, 2, 9};
	min(t, n, &minn);
	printf("%d", minn);
	return 0;
}
