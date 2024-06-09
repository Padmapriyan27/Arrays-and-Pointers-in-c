#include<stdio.h>
#include<string.h>
#include<ctype.h>

int check_password(char *password);

int main(){
    char password[15];

    printf("**********Password Validation**********\n");
    printf("Enter your password: ");
    scanf("%s",password);

    int range = check_password(password);

    if(range==0){
        printf("Your password is weakest\n");
        printf("Length of the password: %ld\n",strlen(password));
        printf("Password range is: %d\n",range);    
    }
    if(range>0 && range<3){
        printf("Your password is weak\n");
        printf("Length of the password: %ld\n",strlen(password));
        printf("Password range is: %d\n",range); 
    }
    if(range>2 && range<5){
        printf("Your password is average\n");
        printf("Length of the password: %ld\n",strlen(password));
        printf("Password range is: %d\n",range); 
    }
    if(range>4 && range<7){
        printf("Your password is medium\n");
        printf("Length of the password: %ld\n",strlen(password));
        printf("Password range is: %d\n",range); 
    }
    if(range>6 && range<9){
        printf("Your password is strong\n");
        printf("Length of the password: %ld\n",strlen(password));
        printf("Password range is: %d\n",range); 
    }
    if(range==9){
        printf("Your password is strongest\n");
        printf("Length of the password: %ld\n",strlen(password));
        printf("Password range is: %d\n",range); 
    }

    if(range<9){
        printf(">>>>>>>>>>>>>>Your password must have satisfied under these conditions<<<<<<<<<<<<<<\n");
        printf("\t[*]Your password must be minimum of 8 characters...\n");
        printf("\t[*]Your password must have one uppercase character...\n");
        printf("\t[*]Your password must have three lowercase characters...\n");
        printf("\t[*]Your password must have one symbol...\n");
        printf("\t[*]Your password must have three numeric characters...\n");
    }
    return 0;
}

int check_password(char *password){
    int uppeRCAse = 0, loweRCAse = 0, spCHAr = 0, diGIt = 0;
    int seq = 0;
    int seq_count = 0;
    for(int i=0; i<strlen(password); i++){
        if(isupper(password[i])){
            uppeRCAse++;
        }else if(islower(password[i])){
            loweRCAse++;
        }else if(isdigit(password[i])){
            diGIt++;
            if(i > 0 && isdigit(password[i-1])){
                if((password[i] == password[i-1] + 1) || (password[i] == password[i-1] - 1)){
                    seq_count++;
                    if(seq_count >= 2){
                        seq++;
                    }
                } else{
                    seq_count = 0;
                }
            }
        }else{
            spCHAr++;
        }
    }

    int range = 0;
    if(strlen(password)>=8){
        range = 1;
    }
    if(uppeRCAse>=1){
        range = range+2;
    }
    if(loweRCAse>=3){
        range = range+2;
    }
    if(diGIt>=3){
        range = range+2;
    }
    if(spCHAr>=1){
        range = range+2;
    }
    if(seq){
        printf("Your password contains sequential numbers\n");
    }
    return range;
}
