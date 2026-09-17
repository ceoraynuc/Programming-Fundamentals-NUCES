/*
 Task 3: Student Registration - fgets() vs single character input
 Demonstrates reading a full line (with spaces) using fgets(),
 versus reading a single character.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char ch;
    char message[150];

    printf("Enter student's full name: ");
    fgets(name, sizeof(name), stdin);

    /* Remove trailing newline character left by fgets */
    name[strcspn(name, "\n")] = '\0';

    sprintf(message, "Registration successful for: %s", name);
    puts(message);

    /* Demonstrate single character input */
    printf("\nEnter a single starting letter/grade as a demo (e.g. A): ");
    scanf(" %c", &ch);
    printf("You entered a single character: %c\n", ch);

    printf("\nNote: fgets() reads a whole line including spaces,\n");
    printf("while reading with %%c or scanf(\"%%c\") only reads ONE character.\n");

    return 0;
}
