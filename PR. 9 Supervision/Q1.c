#include <stdio.h>

int main()
{
    FILE *evenFile, *oddFile;
    int i;

    // Open files in write mode
    evenFile = fopen("even_file.txt", "w");
    oddFile = fopen("odd_file.txt", "w");

    // Check if files opened successfully
    if (evenFile == NULL || oddFile == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Loop through numbers 50 to 70
    for (i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
            fprintf(evenFile, "%d, ", i);
        else
            fprintf(oddFile, "%d, ", i);
    }

    // Close the files
    fclose(evenFile);
    fclose(oddFile);

    // Output to console (optional)
    printf("Even and odd numbers written to files successfully.\n");

    return 0;
}
