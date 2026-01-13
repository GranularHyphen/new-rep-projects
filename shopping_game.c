#include <stdio.h>
#include <string.h>

int main () {
    int quantity;
    float price = 0.0f;
    float total;
    char item[30] = "";
    char currency = '$';

    printf("What do you want to buy?: ");
    fgets(item, sizeof(item), stdin);
    printf("How much does each cost?:");
    scanf("%f", &price); 
    printf("How many?:");
    scanf("%d", &quantity);

    total = price * quantity;
    
    if (quantity > 1) {printf("You bought %d %s's for %f", quantity, item, total);}
    else if (quantity <= 1) {printf("You bought %d %s for %f", quantity, item, total);}
    


    return 0;
}
