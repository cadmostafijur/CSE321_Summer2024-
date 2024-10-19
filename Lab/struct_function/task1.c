#include <stdio.h>

struct breakfast_item {
    int quantity;
    float unit_price;
};
float calculateTotal(struct breakfast_item breakfastitem) {
    return breakfastitem.quantity * breakfastitem.unit_price;
}

int main() {
    struct breakfast_item paratha, vegetable, water;
    int num_people;
    float total_bill, amount_per_person;
    printf("Quantity of Paratha: ");
    scanf("%d", &paratha.quantity);
    printf("Unit Price: ");
    scanf("%f", &paratha.unit_price);
    printf("Quantity of Vegetables: ");
    scanf("%d", &vegetable.quantity);
    printf("Unit Price: ");
    scanf("%f", &vegetable.unit_price);
    printf("Quantity of Mineral Water: ");
    scanf("%d", &water.quantity);
    printf("Unit Price: ");
    scanf("%f", &water.unit_price);
    total_bill = calculateTotal(paratha) + calculateTotal(vegetable) + calculateTotal(water);
    printf("Number of People: ");
    scanf("%d", &num_people);
    amount_per_person = total_bill / num_people;
    printf("Individual people will pay: %.2f tk\n ", amount_per_person);

    return 0;
}

