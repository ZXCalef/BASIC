#include <stdio.h>
#include <stdlib.h>
#define FILENAME "input_data.csv"

int main() {
    FILE *fptr;
    int num1, num2, num3, num4, num5;
    int total_sum;

    fptr = fopen(FILENAME, "r");

    if (fptr == NULL) {
        printf("ERROR: Could not open file %s for reading. Make sure the file exists.\n", FILENAME);
        exit(1);
    }

    fscanf(fptr, "%d,%d,%d,%d,%d", &num1, &num2, &num3, &num4, &num5);
    
    fclose(fptr);

    total_sum = num1 + num2 + num3 + num4 + num5;

    printf("--- FILE READING PROCESS ---\n");
    printf("Reading data from %s...\n", FILENAME);
    printf("File reading complete.\n");
    printf("\n--- DATA ANALYSIS REPORT ---\n");
    printf("Data read: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
    printf("Total Sum: %d\n", total_sum);
    return 0;
}