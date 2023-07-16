#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int prime_number(int n);


int prime_number(int n) {
	if (n == 1)
		return 0;

	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}


	return 1;
}


int main() {

	int N;
	int sum = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int number;
		scanf("%d", &number);

		sum += prime_number(number);
	}

	printf("%d", sum);
	


	return 0;
}