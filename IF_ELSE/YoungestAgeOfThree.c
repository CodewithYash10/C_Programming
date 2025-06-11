#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the Ram Age : ");
    scanf("%d", &a);
    printf("Enter the Shyam Age : ");
    scanf("%d", &b);
    printf("Enter the Ajay Age : ");
    scanf("%d", &c);

    if (a < b) {
        if (a < c) {
            printf("Ram is Younger\n");
        } else {
            printf("Ajay is Younger\n");
        }
    } else {
        if (b < c) {
            printf("Shyam is Younger\n");
        } else {
            printf("Ajay is Younger\n");
        }
    }

    return 0;
}
