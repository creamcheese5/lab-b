#include <stdio.h>

int main () {
    int Stock = 67;
    float Price = 721.50;
    char Size = 'L';

    printf("Hurry! Only %d of Balenciaga hoodies left in size %c!\n", Stock, Size);
    printf("Grab yours for just $%.2f before they sell out!\n", Price);

    printf ("Balenciaga Hoodies\n");
    printf ("Stock: %d items\n", Stock);
    printf ("Price: $%.2f\n", Price);
    printf ("Size: %c", Size);

return 0;
}
