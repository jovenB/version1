#define CRT_SECURE_NO_WARNINGS

#include "manipulating.h"
#include "fundamentals.h"
#include "tokenizing.h"
#include "converting.h"

#include <stdio.h>

int main(void) {

   int choice;
   int flag = 1;

   do{
     pritnf("             Modules\n________________\n");
     printf("         Manipulating (1)\n");
     printf("         Fundamentals (2)\n");
     printf("         Tokenizing   (3)\n");
     printf("         Converting   (4)\n\n");
     pritnf("Which module would you like to use? (0 = quit) : ");
     scanf("%d", &choice);

     if (choice == 1){
          manipulating();
     } else if (choice == 2){
          fundamentals();
     } else if (choice == 3){
          tokenizing();
     } else if (choice == 4){
          converting();
     } else if (choice == 0){
          flag = 0;
     }
   } while (flag == 1);


    return 0;
}
