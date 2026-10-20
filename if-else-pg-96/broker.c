// Modify the broker.c program of Section 5.2 by making both of the following changes:

// (a) Ask the user to enter the number of shares and the price per share, instead of the value
// of the trade.
// (b) Add statements that compute the commission charged by a rival broker ($33 plus 3¢ per
// share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more). Display the rival’s commission as well as the commission charged by the original broker.

/* Calculates a broker’s commission */
// #include <stdio.h>
// int main(void)
// {
//   float commission, value;
//   printf("Enter value of trade: ");
//   scanf("%f", &value);
//   if (value < 2500.00f)
//     commission = 30.00f + .017f * value;
//   else if (value < 6250.00f)
//     commission = 56.00f + .0066f * value;
//   else if (value < 20000.00f)
//     commission = 76.00f + .0034f * value;
//   else if (value < 50000.00f)s
//     commission = 100.00f + .0022f * value;
//   else if (value < 500000.00f)
//     commission = 155.00f + .0011f * value;
//   else
//     commission = 255.00f + .0009f * value;
//   if (commission < 39.00f)
//     commission = 39.00f;
//   printf("Commission: $%.2f\n", commission);
//   return 0;
// }
#include <stdio.h>

int main()
{
    float num_share, price_per_share, total_price_share, o_broker, amount_commission, share_commission, compare;

    printf("enter the number of shares: ");
    scanf("%f", &num_share);

    printf("enter the price of a share: ");
    scanf("%f", &price_per_share);

    total_price_share = price_per_share * num_share;

    if (total_price_share < 2500)
    {
        amount_commission = 30 + (1.7f / 100) * total_price_share;
    }
    else if (total_price_share >= 2500 && total_price_share < 6250)
    {
        amount_commission = 56 + (0.66f / 100) * total_price_share;
    }
    else if (total_price_share >= 6250 && total_price_share < 20000)
    {
        amount_commission = 76 + (0.34f / 100) * total_price_share;
    }
    else if (total_price_share >= 20000 && total_price_share < 50000)
    {
        amount_commission = 100 + (0.22f / 100) * total_price_share;
    }
    else if (total_price_share >= 50000 && total_price_share < 500000)
    {
        amount_commission = 155 + (0.11f / 100) * total_price_share;
    }
    else if (total_price_share >= 500000)
    {
        amount_commission = 255 + (0.09f / 100) * total_price_share;
    }
    else
    {
        amount_commission = 39;
    }
    
    o_broker = amount_commission;
    printf("The commission of original broker: %.2f", o_broker);
    return 0;
}