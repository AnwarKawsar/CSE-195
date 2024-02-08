#include <stdio.h>
#include<string.h>

// Structure declaration
struct student {
    int stdID;
    int age;
};

int main() {
    // Example usage
    struct student students[] = {
        {101, 23},
        {102, 28},
        {103, 22},
        {104, 29},
        {105, 30},
        {106, 31},
        // Add more student records as needed
    };
    //int num=sizeof(students)/sizeof(students[0]);
    int num =sizeof(students)/sizeof(students[0]);
    for (int i = 0;i<num; ++i) {
        if (students[i].age > 25) {
            printf("Student ID: %d\n", students[i].stdID);
        }
    }


    return 0;
}
