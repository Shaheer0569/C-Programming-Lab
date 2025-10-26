#include <stdio.h>

int main() {
    int a[3][3], t[3][3], r[3][3];
    int same = 1;	//flag

	printf("\n Enter elements of an array: \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

	//TRANSPOSE
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            t[j][i] = a[i][j];

	//Flip rows
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = t[i][2 - j];

    for (int i = 0; (i < 3 && same==1); i++) {
        for (int j = 0; j < 3; j++)
            if (r[i][j] != a[i][j]) { 
			same = 0; 
			break; 
		}
	}
    printf("Rotated Matrix: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%d ", r[i][j]);
        printf("\n");
    }
    printf(same ? "The matrix is same\n" : "The matrix is Different\n");
    return 0;
}

