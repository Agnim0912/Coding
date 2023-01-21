#include<stdio.h>
struct items {
    int number;
    char name[20];
    int quantity;
    float price;
    float discount;
};
float amount(struct items i)
{
    float d, total;
    d = (i.discount * i.quantity * i.price) / 100.0;
    total = (i.price - d);
    return total;
}
int main()
{
    int j;
    struct items s[3];
    for (j = 0; j < 3; j++)
    {
        printf("Enter the number of the item: ");
        scanf("%d", &s[j].number);
        printf("Enter the name of the item: ");
        scanf("%s", s[j].name);
        printf("Enter the quantity of the item: ");
        scanf("%d", &s[j].quantity);
        printf("Enter the price of the item: ");
        scanf("%f", &s[j].price);
        printf("Enter the discount of the item: ");
        scanf("%f", &s[j].discount);
        float mrp = amount(s[j]);
        printf("The total price is: %f\n", mrp);
    }
    return 0;
    
}