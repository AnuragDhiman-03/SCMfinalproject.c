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
// Function to reserve a seat
void reserve_seat(int seats[]) {
    int seat_num;
    printf("Enter seat number to reserve: ");
    scanf("%d", &seat_num);
    if (seat_num < 1 || seat_num > MAX_SEATS) {
        printf("Invalid seat number!\n");
        return;
    }
    if (seats[seat_num - 1] == 1) {
        printf("Seat already reserved!\n");
        return;
    
    }
    seats[seat_num - 1] = 1;
    printf("Seat %d reserved successfully!\n", seat_num);
<<<<<<< HEAD
int main() {
    int seats[MAX_SEATS] = {0};  // 0 = available, 1 = reserved
    int choice;}
=======
}
void cancel_reservation(int seats[]) {
    int seat_num;
    printf("Enter seat number to cancel reservation: ");
    scanf("%d", &seat_num);
if (seat_num < 1 || seat_num > MAX_SEATS) {
        printf("Invalid seat number!\n");
        return;
    }
if (seats[seat_num - 1] == 0) {
        printf("Seat not reserved!\n");
        return;
    }
seats[seat_num - 1] = 0;
    printf("Reservation for seat %d cancelled successfully!\n", seat_num);
}
int main() {
    int seats[MAX_SEATS] = {0};  // 0 = available, 1 = reserved
    int choice;
>>>>>>> 83cf7331624422ba7a6327d7b0a0de6298fd5777
    while (1) {
        printf("\n");
        printf("1. Display available seats\n");
        printf("2. Reserve a seat\n");
	printf("3. Cancel a reservation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
	switch (choice) {
            case 1:
                display_seats(seats);
                break;
            case 2:
                reserve_seat(seats);
                break;
            case 3:
                cancel_reservation(seats);
                break;
