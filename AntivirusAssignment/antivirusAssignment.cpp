#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int str_length(char str[]) {
	int count;
	for (count = 0; str[count] != '\0'; count++);
	return count;
}

int main() {
	int DNA, i= 0, countG = 0;
	char str[100], l = 23;

	printf("Enter the genome: ");
	scanf("%s", str);

	//need to make this either NEGATIVE or POSITIVE if it contains exactly 7 g's
	while (str[i] != '\0') {
		if (str[i] == 'g' || str[i] == 'G') {
			countG++;
		}
		i++;
	}

	printf("G: %d\n", countG);

	int length = str_length(str);

	if (str_length(str) == l){
		printf("POSITIVE: length is 23");
	}
	else {
		printf("NEGATIVE: length is not 23");
	}

	return 0;
}