#include <stdio.h>

int main() {
    int s, i, search, found = 0;
printf("Enter the size of the array ");
    scanf("%d", &s);
    int arr[s];
    printf("Enter  elements for the array %d", s);
    for (i = 0; i < s; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &search);
for (i = 0; i < s; i++) {
        if (arr[i] == search) {
            printf("Element %d found at index %d.\n", search, i);
            found = 1;
            break; 
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
