#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char S[1000000];
	int count[26] = { 0 };

	scanf("%s", S);
	int i = 0;
	while (S[i] != NULL) {
		int temp;
		S[i] = toupper(S[i]);
		temp = S[i]-65;

		count[temp] += 1;
		i++;

	}

	int max = 0;
	int temp = 0;
	

	for (int i = 1; i < 26; i++) {
		
		if (count[i] == count[temp]) {
			max = -2;
		}
		if (count[i] > count[temp]) {
			temp = i;
			max = temp;
		}
		

	}


	printf("%c", max + 65);

	


	return 0;
}