#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    if(a>=48 &&a<57){
        printf("Digit");
    }
    else if((a>=65 && a<=90 )||(a>=97 &&a<=122)){
        char lower_a=(input >= 65 && input <= 90) ? input + 32 : input;
        if (lower_a='a'||lower_a='e'||lower_a='i'||lower_a='o'||lower_a="u"){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Special");
    }
return 0;
}