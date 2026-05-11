#include <stdio.h>

int main() {

    char items[5][20] = {
        "1.Soap",
        "2.Sugar",
        "3.Rice",
        "4.Milk",
        "5.Tea"
    };

    float prices[5] = {
        150.0,
        240.0,
        210.0,
        450.0,
        300.0
    };

    int choice;
    float total = 0;

    printf("--- Welcome to Smart Shop ---\n\n");

    printf("--- Price List ---\n");

    for(int i = 0; i < 5; i++) {
        printf("%s : %.2f\n", items[i], prices[i]);
    }

    while(1) {

        printf("\nEnter item number (1-5) or 0 to finish: ");
        scanf("%d", &choice);

        if(choice == 0) {
            break;
        }

        if(choice >= 1 && choice <= 5) {

            printf("Added: %s\n", items[choice-1]);

            total += prices[choice-1];

        } else {

            printf("Invalid choice!\n");

        }
    }

    printf("\n--- Final Bill: %.2f ---\n", total);

    return 0;
}
