#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter Shivam, Soham and Vicky age: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c) {
        printf("Shivam is younger");
    }
    else if (b < a && b < c) {
        printf("Soham is younger");
    }
    else if (c < a && c < b) {
        printf("Vicky is younger");
    }
    else {
        printf("Two or more have the same age");
    }

    return 0;
}