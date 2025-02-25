#include <stdio.h>

int main() {
    int myNum = 15;
    int myOtherNum = 23;
    int x = 5;
    int y = 6;
    int sum = x + y;

    myNum = myOtherNum;

    printf("%d\t%d\n", myNum, sum);
}