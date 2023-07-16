#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	// 1 : 1/ 2~7 : 2/ 8~ 19 : 3 / 20 ~ 37  : 4/ 38 ~ 61 : 5

	unsigned int N;
	scanf("%d", &N);
	int temp = 2;
	if (N == 1)
		printf("%d", 1);
	else
	{
		for (int i = 1; i < 1000000000; i++) {
			if (N >= temp && N <  temp + 6*i){
				printf("%d", i+1);
				break;
			}
			temp += 6 * i;
		}
	}



	return 0;
}