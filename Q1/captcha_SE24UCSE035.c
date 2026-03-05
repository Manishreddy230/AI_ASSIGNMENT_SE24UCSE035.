
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num1, num2, answer;

    srand(time(NULL));

    num1 = rand()%10;
    num2 = rand()%10;

    printf("--- CAPTCHA Verification ---\n");
    printf("Solve the following to verify you are human:\n");
    printf("%d + %d = ", num1, num2);

    scanf("%d",&answer);

    if(answer == num1 + num2)
        printf("CAPTCHA Passed. You are verified.\n");
    else
        printf("CAPTCHA Failed.\n");

    return 0;
}
