#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct to hold pricing rules
typedef struct
{
    char item;
    int unitPrice;
    int specialPriceAmount;
    int specialPrice;
} PricingRule;

// Struct to represent an item scanned
typedef struct
{
    char item;
    int count;
} ScannedItem;

// Struct for checkout
typedef struct
{
    PricingRule *pricingRules;
    ScannedItem *scannedItems;
    int itemCount;
    int total;
} Checkout;

// Function to initialize pricing rules
void initPricingRules(Checkout *co)
{
    co->pricingRules = (PricingRule *)malloc(4 * sizeof(PricingRule));

    // Set the pricing rules as provided
    co->pricingRules[0] = (PricingRule){'A', 60, 3, 150};
    co->pricingRules[1] = (PricingRule){'B', 30, 2, 45};
    co->pricingRules[2] = (PricingRule){'C', 30, 1, 30};
    co->pricingRules[3] = (PricingRule){'D', 25, 1, 25};
}

// Function to initialize checkout
void initCheckout(Checkout *co)
{
    co->scannedItems = (ScannedItem *)malloc(10 * sizeof(ScannedItem));
    co->itemCount = 0;
    co->total = 0;
}

// Function to scan an item
void scanItem(Checkout *co, char item)
{
    int i;
    for (i = 0; i < co->itemCount; ++i)
    {
        if (co->scannedItems[i].item == item)
        {
            co->scannedItems[i].count++;
            return;
        }
    }
    co->scannedItems[co->itemCount++] = (ScannedItem){item, 1};
}

// Function to calculate total price
void calculateTotal(Checkout *co)
{
    co->total = 0;
    for (int i = 0; i < co->itemCount; ++i)
    {
        char item = co->scannedItems[i].item;
        int count = co->scannedItems[i].count;

        for (int j = 0; j < 4; ++j)
        {
            if (co->pricingRules[j].item == item)
            {
                int unitPrice = co->pricingRules[j].unitPrice;
                int specialPriceAmount = co->pricingRules[j].specialPriceAmount;
                int specialPrice = co->pricingRules[j].specialPrice;

                while (count >= specialPriceAmount)
                {
                    co->total += specialPrice;
                    count -= specialPriceAmount;
                }
                co->total += count * unitPrice;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    Checkout co;
    initPricingRules(&co);
    initCheckout(&co);

    // Assuming the items are passed as command line arguments
    for (int i = 1; i < argc; ++i)
    {
        char item = argv[i][0];
        scanItem(&co, item);
    }

    calculateTotal(&co);
    printf("Total Price: %d\n", co.total);

    free(co.pricingRules);
    free(co.scannedItems);

    return 0;
}