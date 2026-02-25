#include <stdio.h>

int main() {
    int count = 0; // Initialization outside the loop
    // Loop to print "Count: " followed by the number, from 0 to 4
    while (count < 5) { // Condition checked before each iteration
        printf("Count: %d\\n", count); // Code to be executed
        count++; // Update expression inside the loop body
    }
    return 0;
}
