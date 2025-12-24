#include <stdio.h>

struct Student {
    char name[50];
    int studentId;
    float score;
};

int main() {
    int N, i;
    float totalScore = 0.0, averageScore;
    
    if (scanf("%d", &N) != 1) {
        return 1;
    }
    
    if (N <= 0) {
        printf("Average Score: 0.00\n");
        return 0;
    }
    
    struct Student students[N];
    
    for (i = 0; i < N; i++) {
        if (scanf("%d %f %s", 
                  &students[i].studentId,
                  &students[i].score, 
                  students[i].name) != 3) {
            return 1;
        }
        totalScore += students[i].score;
    }
    
    averageScore = totalScore / N;
    printf("Average Score: %.2f\n", averageScore);
    
    return 0;
}