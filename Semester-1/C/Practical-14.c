#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp1, *fp2;
    char c;

    fp1 = fopen("L1.txt", "w");
    printf("Enter text (press Enter to stop):\n");
    while ((c = getchar()) != '\n') {
        putc(c, fp1);
    }
    fclose(fp1);

    fp1 = fopen("L1.txt", "r");
    fp2 = fopen("L2.txt", "w");
    while ((c = getc(fp1)) != EOF) {
        putc(c, fp2);
    }
    fclose(fp1);
    fclose(fp2);

    printf("Text copied to L2.txt successfully.\n");

    return 0;
}