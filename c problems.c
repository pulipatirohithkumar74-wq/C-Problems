#include <stdio.h>
struct Student {
    char name[20];
    int marks;
};
int main() {
    struct Student students[3] = {
        {"Alice", 85},
        {"Bob", 92},
        {"Charlie", 78}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (students[j].marks < students[j + 1].marks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%s: %d\n", students[i].name, students[i].marks);
    }
    return 0;
}
