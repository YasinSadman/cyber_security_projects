#include <stdio.h>

int main() {

    int n,count;

    count = 0;

    printf("This program takes a sentence from you and then encrypts in a language following a special numeric code.\n Enter the numeric code (must be between 1 - 25)...:");
    scanf("%d",&n);

    if(n < 1 || n > 25){
        printf("Invalid Input !\n");
        return 0;
    }

    char arra[1000];

    printf("Enter the required sentence one letter by one...(remember if you type a . the line ends there)...: ");

    for(int i = 1;i > 0;i++,count++){
        scanf("%c",&arra[i-1]);
        if(arra[i-1] == '\n'){
            i--;
            count--;
            continue;
        }
        if(arra[i-1] == '.'){
            break;
        }
    }

    for(int m = 0;m < count;m++){
        if(arra[m] == '.'){
            printf(".");
        }
        else if(arra[m] == ' '){
            printf(" ");
        }
        else if(arra[m] >= 'a' && arra[m] <= 'z'){
            if(arra[m]+n > 'z'){
            printf("%c",arra[m]+n-26);
        }
            else{
                printf("%c",arra[m]+n);
            }
        }
        else if(arra[m] >= 'A' && arra[m] <= 'Z'){
            if(arra[m]+n > 'Z'){
            printf("%c",arra[m]+n-26);
        }
            else{
                printf("%c",arra[m]+n);
            }
        }
    }

    printf("\n");



    return 0;
}
