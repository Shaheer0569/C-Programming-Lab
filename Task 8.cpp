#include <stdio.h>

int main() {
    int a[3][3];
    int even = 0, odd = 0, pos = 0, neg = 0, zero = 0;

	printf("\n Enter elements of the matrix: ");
	for(int x=0; x<3; x++) {
		for(int b=0; b<3; b++) {
			scanf("%d", &a[x][b]);
		}
	}
	
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == 0) 
				zero++;
            else {
                if (a[i][j] > 0) 
					pos++;
                else 
					neg++;
                if (a[i][j] % 2 == 0) 
					even++;
                else 
					odd++;
            }
        }
    printf("\n Results: \n");
    printf("\tEven=%d \n\tOdd=%d \n\tPositive=%d \n\tNegative=%d \n\tZeros=%d\n", even, odd, pos, neg, zero);
    return 0;
}

