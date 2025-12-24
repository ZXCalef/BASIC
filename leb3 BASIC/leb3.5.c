#include <stdio.h>

#define SHIPPING_FEE 50.0

struct Order {
    int itemId;
    float unitPrice;
    int quantity;
};

int main() {
    int N, i;
    float grandTotal = 0.0;
    
    if (scanf("%d", &N) != 1) {
        return 1;
    }
    
    struct Order orders[N];
    
    for (i = 0; i < N; i++) {
        float itemTotal;
        
        if (scanf("%d", &orders[i].itemId) != 1) {
            return 1;
        }
        if (scanf("%f", &orders[i].unitPrice) != 1) {
            return 1;
        }
        if (scanf("%d", &orders[i].quantity) != 1) {
            return 1;
        }
        
        itemTotal = (orders[i].unitPrice * orders[i].quantity) + SHIPPING_FEE;
        
        if (itemTotal >= 500.0) {
            itemTotal = itemTotal * 0.90;
        }
        
        grandTotal += itemTotal;
    }
    
    printf("Grand Total: %.2f\n", grandTotal);
    
    return 0;
}