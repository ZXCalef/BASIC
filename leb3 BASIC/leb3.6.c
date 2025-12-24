#include <stdio.h>

struct Transaction {
 char description[50];
 float amount;
};

int main() {
 int N, i;
 float totalIncome = 0.0;
 float totalExpense = 0.0;
 float netBalance = 0.0;

 if (scanf("%d", &N) != 1) {
 return 1;
 }
 struct Transaction transactions[N];

 for (i = 0; i < N; i++) {
 if (scanf("%f", &transactions[i].amount) != 1) {
 return 1;
 }
 if (scanf("%s", transactions[i].description) != 1) {
 return 1;
 }

 if (transactions[i].amount >= 0.0) {
 totalIncome += transactions[i].amount;
 } else {
 totalExpense += -transactions[i].amount;
 }
 }

 netBalance = totalIncome - totalExpense;

 printf("Total Income: %.2f\n", totalIncome);
 printf("Total Expense: %.2f\n", totalExpense);
 printf("Net Balance: %.2f\n", netBalance);
 return 0;
}