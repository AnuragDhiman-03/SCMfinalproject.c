#include <stdio.h>
#include <string.h>

#define MAX_SEATS 10

// Function to display the available seats
void display_seats(int seats[]) {
    printf("Available seats: ");
    for (int i = 0; i < MAX_SEATS; i++) {
        if (seats[i] == 0) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
}
