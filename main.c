#include <stdio.h> // preprocessor directive

int main(void) {
    int n = 2;
    switch (n) {
        case 1:
            printf("사과 \n");
        case 2:
            printf("딸기\n");
        case 3:
            printf("수박\n");
    }
    return 0;
}