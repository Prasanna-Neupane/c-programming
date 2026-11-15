
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1024
#define REPEATS 100

int main()
{
    double *A = malloc(N * N * sizeof(double));
    double *B = malloc(N * N * sizeof(double));
    double *C = malloc(N * N * sizeof(double));

    if (A == NULL || B == NULL || C == NULL)
    {
        printf("Memory allocation failed!\n");
        free(A);
        free(B);
        free(C);
        return 1;
    }

    printf("Initializing matrices...\n");

    for (int i = 0; i < N * N; i++)
    {
        A[i] = (double)(i % 100) / 100.0;
        B[i] = (double)(i % 70) / 70.0;
        C[i] = 0.0;
    }

    clock_t start = clock();

    for (int r = 0; r < REPEATS; r++)
    {
        // Matrix multiplication
        for (int i = 0; i < N; i++)
        {
            for (int k = 0; k < N; k++)
            {
                double temp = A[i * N + k];

                for (int j = 0; j < N; j++)
                {
                    C[i * N + j] +=
                        temp * B[k * N + j];
                }
            }
        }

        // Prevent the repeated calculations
        // from becoming identical.
        A[0] += C[0] * 1e-15;
    }

    clock_t end = clock();

    double elapsed =
        (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nBenchmark completed!\n");
    printf("Matrix size: %d x %d\n", N, N);
    printf("Repetitions: %d\n", REPEATS);
    printf("Checksum: %.10f\n", C[0]);
    printf("Execution time: %.3f seconds\n", elapsed);

    free(A);
    free(B);
    free(C);

    return 0;
}
