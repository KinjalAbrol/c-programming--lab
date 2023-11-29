#include <stdio.h>

int main()
{
    int array[100], maximum, size, c, location = 1;

    printf("Enter the number of elements in array:\n");
    scanf("%d", &size);

    printf("Enter %d integers\n:", size);
  // This loop Stores number entered by the user
    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);

    maximum = array[0];
// Loop to store largest number to max
    for (c = 1; c < size; c++)
    {
    // Change < to > if you want to find the smallest element
        if (array[c] > maximum)
        {
                maximum  = array[c];
                location = c+1;
        }
    }

    printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
    return 0;
}