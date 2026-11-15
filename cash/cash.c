#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_rest(int cents);
int calculate_rest2(int cents);
int calculate_rest3(int cents);

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents <= 0);

    // Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);

    // Subtract the value of those quarters from cents
    cents = cents - (quarters * 25);

    int rest = calculate_rest(cents);
    cents = cents - (rest * 10);

    int rest2 = calculate_rest2(cents);
    cents = cents - (rest2 * 5);

    int rest3 = calculate_rest3(cents);
    cents = cents - (rest3 * 1);

    printf(" %i\n", quarters + rest + rest2 + rest3);

}

int calculate_quarters(int cents)
{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}
int calculate_rest(int cents)
{
    int rest = 0;
    while (cents >= 10)
    {
        rest++;
        cents = cents - 10;
    }
    return rest;
}
int calculate_rest2(int cents)
{
    int rest2 = 0;
    while (cents >= 5)
    {
        rest2++;
        cents = cents - 5;
    }
    return rest2;
}
int calculate_rest3(int cents)
{
    int rest3 = 0;
    while (cents >= 1)
    {
        rest3++;
        cents = cents - 1;
    }
    return rest3;
}
