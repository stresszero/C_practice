#include <stdio.h> // preprocessor directive

void function_without_return();

int main(void) {
    function_without_return();
    return 0;
}

void function_without_return() {
    printf("No return function. \n");
}