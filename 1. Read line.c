#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    size_t n;
    char *buf = NULL;

    printf("$ ");

    while (getline(&buf, &n, stdin) != -1)
    {
        printf("%s$ ", buf);  // Print the entered command and the prompt for the next line
        //fflush(stdout);  // Flush the output buffer

        // Free the allocated memory for the line
        free(buf);
        buf = NULL;
        n = 0;

        printf("$ ");  // Print the prompt for the next line
    }

    // Free any remaining allocated memory and exit
    free(buf);
    return 0;
}
