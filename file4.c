#include <stdio.h>

int main() {
    // Step 1: Open the file in append mode
    FILE *file = fopen("output.txt", "a");
    
    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Step 2: Append data to the file
    fprintf(file, "Appending this text to the file.\n");

    // Step 3: Close the file
    fclose(file);

    return 0;
}
