#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    long sum = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("numbers.txt not found\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        double avg = (double)sum / count;
        printf("Sum: %ld\n", sum);
        printf("Average: %.2f\n", avg);
    } else {
        printf("No numbers found\n");
    }

    return 0;
}
