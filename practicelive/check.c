#include <stdio.h>

int main (){
    char ch;
    printf("Enter your gender to proceed:");
    scanf("%c", &ch);
    int age;
    if (ch == 'm'){
        printf("Enter your age:");
        scanf("%i", &age);
        if (age>=21){
            printf("He can Marry");
        }
        else if (age<=21){
            printf("Padhai likhai karo ias/yas bano");
        }
    }
    else if (ch== 'f'){
            printf("Enter your age:");
            scanf("%i", &age);
        if (age>=18){
            printf("she can Marry");
        }
        else if(age<=18){
            printf("choti bachi ho kya");
        }
    }
    
    else {
        printf("Enter valid Gender!");
    }

}
