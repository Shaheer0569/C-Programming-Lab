#include <stdio.h>

int main() {
    int n;
    printf("\n Enter number of rows for Pascal's Triangle ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n - 1; j++) 
			printf(" ");
        for (int j = 0; j <= i; j++) {
            int fact_i = 1, fact_j = 1, fact_ij = 1;
            for (int k = 1; k <= i; k++) 
				fact_i *= k;
				
            for (int k = 1; k <= j; k++) 
				fact_j *= k;
            
			for (int k = 1; k <= i - j; k++) 
				fact_ij *= k;
				
            printf("%d ", fact_i / (fact_j * fact_ij));
        	//Formula use: nCr = n! / r!(n-r)!
		}
        printf("\n");
    }
    return 0;
}

