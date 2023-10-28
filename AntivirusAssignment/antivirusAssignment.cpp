#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int str_length(char str[]) {
	int count;
	for (count = 0; str[count] != '\0'; count++);
	return count;
}

int main() {
	int DNA, i= 0, countG = 0;
	char str[100], l = 23, initial;

	printf("Enter the genome: ");
	scanf("%s", str);

	//need to make this either NEGATIVE or POSITIVE if it contains exactly 7 g's
	while (str[i] != '\0') {
		if (str[i] == 'g' || str[i] == 'G') {
			countG++;
		}
		i++;
	}
	
	//printf("G: %d\n", countG);

	int length = str_length(str);

	if (str_length(str) != l){
		printf("NEGATIVE: length is not 23\n");
	}
	else {
		printf("Length is 23\n");

		if (str[0] == 'a') {
			printf("First letter is 'a'\n");
		}
		else {
			printf("Negative: first letter is not 'a'\n");
			return 0;
		}
		if (str[22] == 't') {
			printf("Last letter is 't'\n");
		}
		else {
			printf("Negative: last letter is not 't'\n");
			return 0;
		}
		if (countG == 7) {
			printf("Contains 7 'g's'");
		}
		else {
			printf("does not contain 7 g's");
			return 0;
		}
	}
	printf("Positive: all conditions met");
	return 0;
}