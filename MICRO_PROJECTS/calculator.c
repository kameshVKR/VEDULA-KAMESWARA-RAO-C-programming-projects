#include <stdio.h>
int main () {
    char operator;
    int number1;
    int number2;
    printf("ENTER YOUR OPERATOR ( '+' , '-' , '*' , '/' ): \n");
    scanf("%c", &operator);
    printf("ENTER YOUR FIRST VALUE: \n");
    scanf("%d", &number1);
    printf("ENTER YOUR SECOND VALUE: \n");
    scanf("%d", &number2);
    if (operator == '+') {
        printf("%d", number1+number2);
    }
    else if (operator == '-') {
        printf("%d", number1-number2);
    }
    else if (operator == '*')  {
        printf("%d", number1*number2);
    }
    else if (operator == '/') {
        printf("%d", number1/number2);
    }
    else {
        printf("error999+: INVALID INPUT");
    }

    return 0;
}
