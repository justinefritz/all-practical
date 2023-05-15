#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void circle(){
    float r, radius;
    printf("Enter the number : ");
    scanf("%f", &r);
    system("cls");
    radius = (3.14 * (r * r));
    printf("The radius is %.2f\n\n", radius);
    main();
}

void factorial(){
    int num, total = 1;
    printf("Enter the number : ");
    scanf("%d", &num);
    system("cls");
    for (int x = 1; x <= num; num--){
        total = total * num;
        if (num == 1){
            printf("%d ", num);
        }
        else{
        printf("%d * ", num);
        }
    }
    printf("= %d\n\n", total);
    main();
}

void multi(){
    int num = 1, total;
    printf("Enter the number : ");
    scanf("%d", &num);
    system("cls");
    for (int w = 1; w <= 10; w++){
        for (int x = 1; x <= num; x++){
            total = w * x;
            printf("%d\t", total);
        }
    printf("\n");
    }
    printf("\n");
    main();
}

void summa(){
    int num = 0, total = 0, totalnum;
    printf("Enter the number : ");
    scanf("%d", &num);
    system("cls");
    for (int x = 1; x <= num; num--){
        total = total + num;
        if (num != x){
            printf("%d + ", num);
        }
        else{
            printf("%d = %d\n\n", num, total);
            main();
        }
    }
}

void rectangle(){
    float l, w, area;
    printf("Enter the length : ");
    scanf("%f", &l);
    printf("Enter the width : ");
    scanf("%f", &w);
    system("cls");
    area = (l * w);
    printf("The area of rectangle is %.2f\n\n", area);
    main();  
}

void asterisk(){
    int ast;
    printf("Enter the height of triangle : ");
    scanf("%d", &ast);
    system("cls");
    for (int x = 1; x <= ast; x++){
        for(int y = 1; y <= x; y++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    main();
}

void fibo(){
    int nth, x = -1, y = 1, next;
    printf("Enter the nth term : ");
    scanf("%d", &nth);
    system("cls");
    for (int w = 1; w <=nth; w++){
        next = x + y;
        x = y;
        y = next;
    }
    printf("%d term of fibonacci sequence is %d\n\n", nth, next);
    main();
}

void pascal(){
    int nth, x = 0, y = 1, next;
    printf("Enter the nth term : ");
    scanf("%d", &nth);
    system("cls");
    for (int w = 1; w <=nth; w++){
        if (w < 2){
            next = x + y;
            x = y;
            y = next;
        }
        else{
            next = next * 2;
        }
    }
    printf("%d term of pascal sequence is %d\n\n", nth, next);
    main();
}

void bingo(){
    char* type;
    char letter;
    int numb, reverse;
    printf("Enter the integer : ");
    scanf("%d", &numb);
    system("cls");
    if (numb >= 1 && numb <= 75){
    type = numb % 2 == 0 ? "even" : "odd";
        if (numb <= 15){
            letter = 'B';
            }
            else if (numb >= 16 && numb <= 30){
                letter = 'I';
                }
                else if (numb >= 31 && numb <= 45){
                    letter = 'N';;
                    } 
                    else if (numb >= 46 && numb <= 60){
                        letter = 'G';
                        } 
                        else if (numb >= 61 && numb <= 75){
                            letter = 'O';
                            }
    }
    else if (numb < 1){
        reverse == abs(numb);
        system("cls");
        printf("%d is not a valid input and its absolute value is %d", numb, reverse);
        bingo();
            }
            else{
                system("cls");
                printf("Goodbye");
                }
    system("cls");
    printf("%d is a an %s number that belongs to letter %c", numb, type, letter);
    main();
}

void evenodd(){
    int numb, choice, reverse;
    printf("Enter the integer : ");
    scanf("%d", &numb);
    system("cls");
    if (numb >= 1){
        printf("1. Get Even Number\n");
        printf("2. Get Odd Number\n");
        printf(" : ");
        scanf("%d", choice);
        system("cls");
        if (choice == 1 ){
            for (int w =1 ; w <= numb ; w++){
                if (w%2 == 0){
                    printf("%d\n", w);
                }
            }
        system("cls");
        evenodd();
        }
        else if (choice == 2){
            for (int w = 1; w <= numb ; w++){
                if (w%2 != 0){
                    printf("%d\n", w);
                }
            }
        system("cls");
        evenodd();
        }
        else{
            system("cls");
            printf("Invalid Input!.....");
            evenodd();
        }
    }
    else if (numb < 1){
        reverse = abs(numb);
        system("cls");
        printf("%d\n", reverse);
        evenodd();
    }
    else if (numb == 0){
        system("cls");
        printf("Goodbye!");
    }
}

void dice(){
    int roll, rand_num, total = 0, choice;
    srand(time(NULL));
    printf("How many times would you like to roll the dice?\n");
    scanf("%d", &roll);
    printf("Rolling the dice %d times\n", roll);
    for (int w = 1; w <= roll; w++){
        rand_num = (rand() % 6) + 1;
        printf("Roll %d : %d\n", w, rand_num);
        total = total + rand_num;
    }
    printf("Total score : %d", total);
    while (choice != 1 && choice != 0){
        printf("\nDo you want to try again? 1. Yes  0. No\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                system("cls");
                dice();
            case 0:
                break;
            default:
                system("cls");
                printf("\nYou've entered the wrong key, try again....");
        }
    }
}

void nine(){
    int choice, rad, total, reverse;
    srand(time(NULL));
    printf("Your hand is: ");
    for (int x = 1; x <= 3; x++){
        rad = (rand() % 10) + 1;
        printf("%d ", rad);
        total = total + rad;
    }
    if (total >= 10 && total <= 19){
    total = total - 10;
    }
    else if (total >= 20 && total <= 29){
        total = total - 20;
    }
    else if (total > 30){
        total = total - 30;
    }
    printf("\nYour final score is: %d\n", total);
    if (total == 9){
        printf("Congratulations, you win!");
    }
    else {
        printf("Sorry, you lose.");
    }
    while (choice != 1 && choice != 0){
        printf("\nDo you want to try again? 1. Yes  0. No\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                system("cls");
                dice();
            case 0:
                break;
            default:
                system("cls");
                printf("\nYou've entered the wrong key, try again....");
        }
    }
}

void guess(){
    int rand_num, guess1, total  = 0;
    srand(time(NULL));
    while ( guess1 != rand_num){
        printf("Guess a number between 1 and 5: ");
        scanf("%d", &guess1);
        rand_num = (rand() % 5) + 1;
        if (guess1 < rand_num){
            printf("Too low, Try again!\n");
            total = total + 1;
            }
            else if (guess1 > rand_num){
                printf("Too high, try again!\n");
                total = total + 1;          
                }
    }
    total = total + 1;
    system("cls");
    printf("Congratulations, you guessed the number in %d guesses!", total);
    main();
}

void card(){
    int guess, ran_num, total = 0, choice;
    srand(time(NULL));
    for (int w = 1; w <= 2; w++){
        ran_num = (rand() % 13 ) + 1;
        printf("Card %d : %d\n", w, ran_num);
        total = total + ran_num;
    }
    if (total > 21){
        printf("You won!");
        } 
        else if ( total == 21){
            printf("You win the bonus prize!");
            } 
            else {
                printf("You lost!");
                }
    printf("\nDo you still want to play?  1 = Yes  0 = No\n");
    scanf("%d", &choice);
    switch(choice){
        case 1: 
            system("cls");
            main();
        case 0:
            system("cls");
            break;
        default:
            system("cls");
            printf("\nYou've entered the wrong key, try again....");
            card();
    }
}

void mineral(){
    int perfect = 0, acceptable = 0, rejected = 0, choice = 1, ran1, ran2;
        while (choice >= 1 && choice != 0){
            srand(time(NULL));
            ran1 = (rand() % 1000);
            ran2 = (rand() % 100);
            printf("Minerals have arrived: %d\n", ran1);
            printf("Purity: %d percent\n", ran2);
            if (ran2 > 90){
                printf("Perfect.\n");
                perfect = perfect + ran1;
                }
                else if (ran2 >= 70 && ran2 <= 89){
                    printf("Acceptable.\n");
                    acceptable = acceptable + ran1;
                    }
                    else {
                        printf("Rejected.\n");
                        rejected = rejected + ran1;
                        }
        printf("Total minerals PERFECT: %d, ACCEPTALBE: %d, REJECTED: %d", perfect, acceptable, rejected);
        printf("\n\nContinue? ");
        scanf("%d", &choice);
        system("cls");
        switch (choice){
            case 0:
                system("cls");
                printf("Thank you for using the program...");
                break;  
        }
    }
}

void immigrants(){
    int rand_num, children = 0, adolescents = 0, adult = 0, choice = 1;
    while (choice >= 1 && choice != 0){
        srand(time(NULL));
        printf("The immigrants arrived by age are : ");
        for (int w = 1 ; w <= 5; w++){
            rand_num = (rand() % 100);
            printf("%d ", rand_num);
            if (rand_num >= 1 && rand_num <= 12){
                children = children + 1;
                }
                else if (rand_num >= 13 && rand_num <= 17 ){
                    adolescents = adolescents + 1;
                    }
                    else{
                        adult = adult + 1;
                        }
        }
    printf("\nTotal ADULT are: %d, Total ADOLESCENT are: %d, Total CHILDREN are: %d", adult, adolescents, children);
    printf("\nDo you still want to accept immigrants? ");
    scanf("%d", &choice);
    switch(choice){
        case 0:
            system("cls");
            printf("Thank you for using the program....");
            break;
        default:
            system("cls");
        }
    }
}

int main(){
    int choice;
    printf("1. Radius\n");
    printf("2. Factorial\n");
    printf("3. Multiplication Table\n");
    printf("4. Summation of Number\n");
    printf("5. Rectangle\n");
    printf("6. Triangle(*)\n");
    printf("7. Fibonnaci Sequence\n");
    printf("8. Pascal Sequence\n");
    printf("9. Bingo\n");
    printf("10. Even or Odd\n");
    printf("11. Dice\n");
    printf("12. Lucky Nine\n");
    printf("13. Guess\n");
    printf("14. Card\n");
    printf("15. Mineral\n");
    printf("16. Immigrants\n");
    printf("17. Exit\n");
    printf(" : ");
    scanf("%d", &choice);
    if(choice == 1){
        system("cls");
        circle();
        }
        else if (choice == 2){
            system("cls");
            factorial();
            }
            else if (choice == 3){
                system("cls");
                multi();
                }
                else if (choice == 4){
                    system("cls");
                    summa();
                    }
                    else if (choice == 5){
                        system("cls");
                        rectangle();
                        }
                        else if (choice == 6){
                            system("cls");
                            asterisk();
                            }
                            else if (choice == 7){
                                system("cls");
                                fibo();
                                }
                                else if (choice == 8){
                                    system("cls");
                                    pascal();
                                    }
                                    else if (choice == 9){
                                        system("cls");
                                        bingo();
                                        }
                                        else if (choice == 10){
                                            system("cls");
                                            evenodd();
                                            }
                                            else if (choice == 11){
                                                system("cls");
                                                dice();
                                                }
                                                else if (choice == 12){
                                                    system("cls");
                                                    nine();
                                                    }
                                                    else if (choice == 13){
                                                        system("cls");
                                                        guess();
                                                        }
                                                        else if (choice == 14){
                                                            system("cls");
                                                            card();
                                                            }
                                                            else if (choice == 15){
                                                                system("cls");
                                                                mineral();
                                                                }
                                                                else if (choice == 16){
                                                                    system("cls");
                                                                    immigrants();
                                                                    }
                                                                    else if (choice == 17){
                                                                        system("cls");
                                                                        printf("Thank you for using the program.....");
                                                                        }
                                                                        else{
                                                                            system("cls");
                                                                            printf("You've entered the wrong key\n\n");
                                                                            main();
                                                                            }
}
