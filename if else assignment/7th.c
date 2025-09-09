#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch=='a') {
        printf("Vowel\n");
    } else {
        if (ch == 'e'){
            printf("Vowel\n");
        }else{
            if(ch == 'i'){
                printf("Vowel");
            }else{
                if(ch == 'o'){
                    printf("Vowel");
                }else{
                    if(ch == 'u'){
                        printf("Vowel");
                    }else{
                        printf("Constant");
                    }
                }
            }
        }
}
    return 0;
}
