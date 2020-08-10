#include <stdio.h>
#include <math.h>
int main() {
    double ave, count = 0, sum = 0, sumsd, sd;
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 < num2) {
        for (int i = num1; i <= num2; i++)
        {
            sum += i;
            count++;

        }
        ave = sum / count;
        for (int i = num1; i <= num2; i++)
        {
            sumsd += ((i - ave) * (i - ave));
        }
        sd = sqrt(sumsd / (count - 1));
        for (int i = num1; i <= num2; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
        printf("Average = %.1lf\n", ave);
        printf("SD = %.2lf\n", sd);
    }
    else if (num1 > num2) {
        for (int i = num2; i <= num1; i++)
        {
            sum += i;
            count++;

        }
        ave = sum / count;
        for (int i = num2; i <= num1; i++)
        {
            sumsd += ((i - ave) * (i - ave));
        }
        sd = sqrt(sumsd / (count - 1));
        for (int i = num1; i >= num2; i--)
        {
            printf("%d ", i);
        }
        printf("\n");
        printf("Average = %.1lf\n", ave);
        printf("SD = %.2lf\n", sd);
    }
    return 0;
}
