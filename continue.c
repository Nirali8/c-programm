// C program to explain the use
// of continue statement with for loop

#include <stdio.h>

int main()
{
	// for loop to print 1 to 8
	for (int i = 1; i <= 8; i++) {
		// when i = 4, the iteration will be skipped and for
		// will not be printed
		if (i == 4) {
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");

	int i = 0;
	// while loop to print 1 to 8
	while (i < 8) {
		// when i = 4, the iteration will be skipped and for
		// will not be printed
		i++;
		if (i == 5) {
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");
	 for ( i = 1; i <= 3; i++) {
        // inner loop to print integer 1 to 4
        for (int j = 0; j <= 4; j++) {
 
            // continue to skip printing number 3
            if (j == 3) {
                continue;
            }
            printf("%d ", j);
        }
        printf("\n");
	 }
	return 0;
}
