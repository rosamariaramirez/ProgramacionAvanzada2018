#include <stdio.h>

typedef struct d{
    unsigned day:5;
    unsigned month:4;
    unsigned year;
    unsigned flags:5;
} Date;

#define LEAP_MASK 0b10000
#define PRIME_MASK 0b00100

int main(){
    Date today = {23, 4, 2018};
    printf("Size of the date %lu \n", sizeof(today));
    printf("Date %d/%d/%d \n", today.day, today.month, today.year);
    printf("Check if today is 23. ");
    if(today.day ^ 23){ //XOR
        printf("No \n");
    }else{
        printf("Yes today is 23. \n");
    }
    today.flags = 0b11010;
    if( (today.flags & LEAP_MASK | PRIME_MASK) != 0){
        printf("Year is leap and is prime \n");
    }
    
    return 0;
}