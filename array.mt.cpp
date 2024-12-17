#include <stdio.h>
int main(){
	int m, n, p, i, j, k;
    printf("Enter the vauel rows");
    scanf("%d", &m);
    printf("Enter the number n");
    scanf("%d", &n);
    printf("Enter the number p");
    scanf("%d", &p);
    int A[m][n], B[n][p], C[m][p];
    printf("Enter elements of matrix A (%dx%d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B (%dx%d):\n", n, p);
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }
for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resultant matrix C after multiplication (%dx%d):\n", m, p);
        for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

