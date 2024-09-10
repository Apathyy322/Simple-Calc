#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
    char input1[5];
    char input2[5];
    int num1, num2, sum;
    char choice;
    printf("Simple Calculator\n\n1.Plus\n2.Minus\n3.Multiply\n4.Division\n5.Exit\n");
    do {      
        printf("Enter your choice here: ");
        scanf("%c", &choice);

        switch(choice) {
            case '1':
                printf("Plus\n\nInput 1st number:\n");
                scanf("%s", input1);
                
                printf("Input 2nd number:\n");
                scanf("%s", input2);

                num1 = atoi(input1);
                num2 = atoi(input2);
                sum = num1 + num2;
                printf("%d + %d = %d\n", num1, num2, sum);
                sleep(0.7);
                break;
                

            case '2': {
                char input3[5];
                char input4[5];
                int num3, num4, diff;

                printf("Minus\n\nInput 1st number: \n");
                scanf("%s", input3);
                printf("Input 2nd number: \n");
                scanf("%s", input4);
                
                num3 = atoi(input3);
                num4 = atoi(input4);
                diff = num3 - num4;
                printf("%d - %d = %d\n", num3, num4, diff);
                sleep(0.7);
                break;
            }

            case '3':
                char input5[5];
                char input6[5];
                int num5, num6, mul;
              
                printf("Multiply\n\nInput 1st number:\n");
                scanf("%s",input5);
                printf("Input 2nd number:\n");
                scanf("%s",input6);
                
                num5 = atoi(input5);
                num6 = atoi(input6);
                mul = num5 * num6;
                printf("%d * %d = %d\n", num5,num6,mul);
                sleep(0.7);
                break;
            case '4': 
                char input7[5];
                char input8[5];
                int num7, num8, div;
                
                printf("Division\n\nInput 1st number: \n ");
                scanf("%s", input7);
                printf("Input 2nd number: \n ");
                scanf("%s", input8);
                num7 = atoi(input7);
                num8 = atoi(input8);
                div = num7 / num8;
                printf("%d / %d = %d\n", num7,num8,div);
                sleep(0.7);
                break;
            case '5':
                printf("Exiting...\n");
                return 0;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(1);

    return 0;
}
