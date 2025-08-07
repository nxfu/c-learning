#include <stdio.h>

// INTRO:
// A struct groups related values, possibly with different data types,
// into one custom type.
//
// Each value inside a struct is called a member.
// Members are accessed using the dot (.) operator.
//
// A struct is useful when we want to store related information together.
// For example, a student can have a name, age, and marks.
//
// typedef can be used with a struct to create a shorter type name.

// SYNTAX:
//
// struct StructName {
//     member_type member1;
//     member_type member2;
// };
//
// struct StructName variable = {value1, value2};
//
// variable.member1 = value;
// printf("%d", variable.member1);
//
// typedef struct {
//     member_type member1;
// } TypeName;
//
// TypeName variable;


// EXAMPLE: Basic struct

struct Student {
    char name[50];
    int age;
    float marks;
};


int main(void) {

    // Create a struct variable and initialize its members
    struct Student student1 = {"Gaurav", 18, 67.0f};

    // Access struct members using the dot operator
    printf("===== Student Details =====\n\n");

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.1f\n", student1.marks);

    // Update a member
    student1.marks = 76.0f;

    printf("\nAfter updating marks:\n");
    printf("Marks: %.1f\n", student1.marks);

    return 0;
}
