
void var(int t[], int n, float *var) {
	*var = 0;
	int M = 0;
	for (int i=0; i < n; i++) {
		M += t[i];
	}
	M /= n;
	for (int i=0; i < n; i++) {
		*var += (t[i]-M)*(t[i]-M);		
	}
	*var /=n;
}
