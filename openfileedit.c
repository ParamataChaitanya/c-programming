#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp1;

    // Open the file in append mode
    fp1 = fopen("Substitutes.txt", "a");
    if (fp1 == NULL) {
        printf("File connection failed\n");
        return 0;
    }

    // Text to append
    char new_content[] = "\nThis is new content added to the file.";

    // Append the text to the file
    fputs(new_content, fp1);

    printf("Text appended successfully.\n");

    // Close the file
    fclose(fp1);

    return 0;
}
