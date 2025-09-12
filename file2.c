#include <stdio.h>

int main() {
    // Step 1: Open a file in write mode
    FILE *file = fopen("output.txt", "w");
    
    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Step 2: Write to the file
    fprintf(file, "Hello, world!\n");
    fprintf(file, "This is a test file.\n");
    fputs("Adding another line to the file.\n", file);

    // Step 3: Close the file
    fclose(file);

    printf("File created and written successfully.\n");
    return 0;
}
