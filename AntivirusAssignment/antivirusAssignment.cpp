#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int str_length(char str[]) {
	int count;
	for (count = 0; str[count] != '\0'; count++);
	return count;
}

int main() {
	int i= 0, countG = 0;
	char str[100], l = 23;

	printf("Enter the genome: ");
	scanf("%s", str);

	while (str[i] != '\0') {
		if (str[i] == 'g' || str[i] == 'G') {
			countG++;
		}
		i++;
	}	

	int length = str_length(str);

	if (str_length(str) != l){
		printf("NEGATIVE: Length is not 23\n");
	}
	else {
		printf("Length is 23\n");

		if (str[0] == 'a') {
			printf("First letter is 'a'\n");
		}
		else {
			printf("Negative: First letter is not 'a'\n");
			return 0;
		}
		if (str[22] == 't') {
			printf("Last letter is 't'\n");
		}
		else {
			printf("Negative: Last letter is not 't'\n");
			return 0;
		}
		if (countG == 7) {
			printf("Contains exactly 7 'g's'\n");
		}
		else {
			printf("NEGATIVE: Does not contain exactly 7 g's\n");
			return 0;
		}
	printf("POSITIVE: all conditions met\n");
	}
	
	return 0;
}