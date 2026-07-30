#include <stdio.h>

int main() {

    char name_first;
    int age;
    

    printf(Enter the first name character of your name: ");
    scanf("%c", &name_first);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hi %c. You are are %d years oid.\n" name_first, age);

    return 0;
    }
