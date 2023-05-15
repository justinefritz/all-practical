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
    printf("The radius is %.2f", radius);
}
void factorial(){
    long num, total = 1;
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
    printf("= %d", total);
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
            printf("%d = %d", num, total);
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
    printf("The area of rectangle is %.2f", area); 
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
    printf("%d term of fibonacci sequence is %d", nth, next);
}
void pascal(){
    long nth, x = 0, y = 1, next;
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
    printf("%d term of pascal sequence is %d", nth, next);
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
        if (numb <= 15) letter = 'B';
            else if (numb >= 16 && numb <= 30) letter = 'I';
                else if (numb >= 31 && numb <= 45) letter = 'N';
                    else if (numb >= 46 && numb <= 60) letter = 'G';
                        else if (numb >= 61 && numb <= 75) letter = 'O';
    system("cls");
    printf("%d is a an %s number that belongs to letter %c\n", numb, type, letter);
    bingo();
    }
    else if (numb < 0){
        reverse == abs(numb);
        system("cls");
        printf("%d is not a valid input and its absolute value is %d", numb, reverse);
        bingo();
            }
            else if (numb == 0 || numb > 75){
                system("cls");
                printf("Goodbye");
                }
}
void evenodd(){
    int numb, reverse, choice;
    printf("Enter the integer : ");
    scanf("%d", &numb);
    system("cls");
    if (numb >= 1){
        printf("1. Get Even Number\n2. Get Odd Number\n : ");
        scanf("%d", &choice);
        system("cls");
        if (choice == 1 ){
            for (int w =1 ; w <= numb ; w++){
                if (w%2 == 0){
                    printf("%d\n", w);
                    }
            }
            evenodd();
        }
        else if (choice == 2){
            for (int w = 1; w <= numb ; w++){
                if (w%2 != 0){
                        printf("%d\n", w);
                }
            }
            evenodd();
        }
        else{
            system("cls");
            printf("Invalid Input!.....");
            evenodd();
            }
    }
    else if (numb < 0){
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
    while (choice > 0){
        printf("How many times would you like to roll the dice?\n");
        scanf("%d", &roll);
        printf("Rolling the dice %d times\n", roll);
        for (int w = 1; w <= roll; w++){
            rand_num = (rand() % 6) + 1;
            printf("Roll %d : %d\n", w, rand_num);
            total = total + rand_num;
        }
    printf("Total score : %d\nDo you want to try again? 1. Yes  0. No\n", total);
    scanf("%d", &choice);
    system("cls");
    }
}
void nine(){
    int choice = 1, rad, total, reverse;
    srand(time(NULL));
    while (choice > 0){
        printf("Your hand is: ");
        for (int x = 1; x <= 3; x++){
            rad = (rand() % 10) + 1;
            printf("%d ", rad);
            total += rad;
        }
        if (total >= 10 && total <= 19){
            total -= 10;
            }
            else if (total >= 20 && total <= 29){
                total -= 20;
                }
                else if (total > 30){
                    total -= 30;
                    }
    printf("\nYour final score is: %d\n", total);
    if (total == 9) printf("Congratulations, you win!");
        else printf("Sorry, you lose.");
    printf("\nDo you want to try again? 1. Yes  0. No\n");
    scanf("%d", &choice);
    system("cls");
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
            total++;
            }
            else if (guess1 > rand_num){
                printf("Too high, try again!\n");
                total++;          
                }
    }
    total += 1;
    system("cls");
    printf("Congratulations, you guessed the number in %d guesses!", total);
}
void card(){
    int ran_num, choice = 1;
    srand(time(NULL));
    while (choice > 0){
    int total = 0;
    for (int w = 1; w <= 2; w++){
        ran_num = (rand() % 13 ) + 1;
        printf("Card %d : %d\n", w, ran_num);
        total += ran_num;
    }
    if (total > 21) printf("You won!"); 
        else if ( total == 21) printf("You win the bonus prize!");
            else printf("You lost!");
    printf("\nDo you still want to play?  1 = Yes  0 = No\n");
    scanf("%d", &choice);
    system("cls");
    }
    printf("Thank you for using the program...");
}    
void mineral(){
    int perfect = 0, acceptable = 0, rejected = 0, choice = 1, ran1, ran2;
        while (choice >= 1 && choice != 0){
            srand(time(NULL));
            ran1 = (rand() % 1000), ran2 = (rand() % 100);
            printf("Minerals have arrived: %d\nPurity: %d percent\n", ran1, ran2);
            if (ran2 > 90){
                printf("Perfect.\n");
                perfect += ran1;
                }
                else if (ran2 >= 70 && ran2 <= 89){
                    printf("Acceptable.\n");
                    acceptable +=  ran1;
                    }
                    else {
                        printf("Rejected.\n");
                        rejected += ran1;
                        }
        printf("Total minerals PERFECT: %d, ACCEPTALBE: %d, REJECTED: %dn\nContinue? ", perfect, acceptable, rejected);
        scanf("%d", &choice);
        system("cls");
        }
    printf("Thank you for using the program...");
}
void immigrants(){
    int rand_num, children = 0, adolescents = 0, adult = 0, choice = 1;
    while (choice >= 1 && choice != 0){
        srand(time(NULL));
        printf("The immigrants arrived by age are : ");
        for (int w = 1 ; w <= 5; w++){
            rand_num = (rand() % 100);
            printf("%d ", rand_num);
            if (rand_num >= 1 && rand_num <= 12) children++;
                else if (rand_num >= 13 && rand_num <= 17 ) adolescents++;
                    else adult++;
        }
    printf("\nTotal ADULT are: %d, Total ADOLESCENT are: %d, Total CHILDREN are: %d\nDo you still want to accept immigrants? ", adult, adolescents, children);
    scanf("%d", &choice);
    system("cls");
    }
    printf("Thank you for using the program...");
}
int main(void){
    int choice;
    printf("1. Radius\n2. Factorial\n3. Multiplication Table\n4. Summation of Number\n5. Rectangle\n6. Triangle(*)\n7. Fibonnaci Sequence\n");
    printf("8. Pascal Sequence\n9. Bingo\n10. Even or Odd\n11. Dice\n12. Lucky Nine\n13. Guess\n14. Card\n15. Mineral\n16. Immigrants\n17. Exit\n : ");
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