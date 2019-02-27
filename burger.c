#include <stdio.h>

int main(void) {

    char hungry== 'y';
    int burgerinbelly=0;
    
    while (hungry=='y'){
        printf("Here is a burger");
        burgerinbelly=burgerinbelly+1;
        printf("If you are still hungry press y");
        scanf("\n%c", &hungry);
    }
    printf("Okay");
    printf("You have %d burgers in your belly\n\n", burgerinbelly);
    
    return 0;
}
