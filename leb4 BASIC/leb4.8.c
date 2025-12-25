#include <stdio.h>

#define MAX_SIZE 10
#define UNVISITED 0
#define VISITED -1

int main() {
    int data[MAX_SIZE];
    int status[MAX_SIZE];
    int N;
    int i, j;
    int count;

    for (i = 0; i < MAX_SIZE; i++) {
        status[i] = UNVISITED;
    }

    if (scanf("%d", &N) != 1) {
        return 1;
    }
    
    if (N > MAX_SIZE || N < 1) {
        N = MAX_SIZE;
    }

    for (i = 0; i < N; i++) {
        if (scanf("%d", &data[i]) != 1) {
            return 1;
        }
    }

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n");
    printf("Total elements recorded (N): %d\n", N);
    printf("Recorded Numbers: ");
    for (i = 0; i < N; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    printf("--- FREQUENCY TABLE ---\n");
    printf("Number | Frequency\n");
    printf("-------|----------\n");

    for (i = 0; i < N; i++) {
        if (status[i] == VISITED) {
            continue;
        }
        
        count = 1;
        for (j = i + 1; j < N; j++) {
            if (data[i] == data[j]) {
                count++;
                status[j] = VISITED;
            }
        }
        
        printf("%6d | %9d\n", data[i], count);
    }
    
    return 0;
}