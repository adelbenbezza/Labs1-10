#include"min.h"

void min(int t[], int n, int *min) {
	*min = t[0];
	for (int i=1; i < n; i++) {
		if (t[i] < *min) {
			*min = t[i];		
		} 	
	}
}
