#include <stdio.h>
int main(){
    char gender;
    printf("Enter your gender:");
    scanf("%c", &gender);
    if(!(gender=='m'|| gender=='f')){
        printf("Invalid gender !");
    }
    else {
        int age;
        printf("Enter your age:");
        scanf("%i",&age);
        if (gender == 'm' && age>=21){
            printf("He can Marry");
        }
        else if (gender == 'm' && age<=21){
            printf("Padhai likhai karo ias/yas bano");
        }
        else if (gender == 'f' && age>=18){
            printf("she can Marry");
        }
        else if(gender == 'f' && age<=18){
            printf("choti bachi ho kya");
        }
    }

}