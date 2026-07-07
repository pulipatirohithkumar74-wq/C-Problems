#include <stdio.h>

int main()
{
    int rooms = 20, book;

    printf("Available Rooms: %d\n", rooms);
    printf("Rooms to Book: ");
    scanf("%d",&book);

    if(book <= rooms)
    {
        rooms -= book;
        printf("Booking Successful\n");
        printf("Rooms Left: %d", rooms);
    }
    else
        printf("Rooms Not Available");

    return 0;
}
