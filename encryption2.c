#include <stdio.h>

void print_string(char str[]){
    printf("\n");
    for (int i = 0; i<10; i++){
        printf("%c",str[i]);
    }
    printf("\n");
}
int main(){
    // Define local variables
    char string[10];
    char encrypted_string[10];
    char dummy_info[10];
    char deencrypted_string[10];

    printf("Input a string of characters that is a total of 10 characters long.\n");

    for(int i = 0; i - 10; i++){
        scanf("%c", &string[i]);
    }

    /*** Encryption Process ***/
    //Generate dummy_info
    for (int i = 0; i<10; i++){
        dummy_info[i] = rand()%255;
    }

    for (int i = 0; i<10; i++){
        encrypted_string[i] = string[i]^dummy_info[i];
    }
    printf("Encryption Completed!\n");
    printf_string(string);
    print_string(encrypted_string);

    /***De-encryption Process***/
    for (int i = 0; i<10; i++){
        deencrypted_string[i] = encrypted_string[i]^dummy_info[i];
    }

    printf("De-encryption Complete!\n");
    print_string(deencrypted_string);

    return 0;
}
