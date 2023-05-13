#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

void circle();
void factorial();
void multi();
void summa();
void rectangle();
void asterisk();
void fibo();
void pascal();
void bingo();
void evenodd();
void dice();
void nine();
void guess();
void card();
void mineral();
void immigrants();

int main(){
    int choice;
    cout << "1. Radius\n";
    cout << "2. Factorial\n";
    cout << "3. Multiplication Table\n";
    cout << "4. Summation of Number\n";
    cout << "5. Rectangle\n";
    cout << "6. Triangle(*)\n";
    cout << "7. Fibonnaci Sequence\n";
    cout << "8. Pascal Sequence\n";
    cout << "9. Bingo\n";
    cout << "10. Even or Odd\n";
    cout << "11. Dice\n";
    cout << "12. Lucky Nine\n";
    cout << "13. Guess\n";
    cout << "14. Card\n";
    cout << "15. Mineral\n";
    cout << "16. Immigrants\n";
    cout << "17. Exit\n";
    cout << " : ";
    cin >> choice;
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
                                                                        cout << "Thank you for using the program.....";
                                                                        }
                                                                        else{
                                                                            system("cls");
                                                                            cout << "You've entered the wrong key\n\n";
                                                                            main();
                                                                            }
}

void circle(){
    float r, radius;
    cout << "Enter the number : ";
    cin >> r;
    system("cls");
    radius = (3.14 * (r * r));
    cout << "The radius is " << radius << "\n\n";
    main();
}

void factorial(){
    int num, total = 1;
    cout << "Enter the number : ";
    cin >> num;
    system("cls");
    for (int x = 1; x <= num; num--){
        total = total * num;
        if (num == 1){
            cout << num << " ";
        }
        else{
        cout << num << " * ";
        }
    }
    cout << "= " << total << "\n\n";
    main();
}

void multi(){
    int num = 1, total;
    cout << "Enter the number : ";
    cin >> num;
    system("cls");
    for (int w = 1; w <= 10; w++){
        for (int x = 1; x <= num; x++){
            total = w * x;
            cout << total <<"\t";
        }
    cout << "\n";
    }
    cout << "\n";
    main();
}

void summa(){
    int num = 0, total = 0, totalnum;
    cout << "Enter the number : ";
    cin >> num;
    system("cls");
    for (int x = 1; x <= num; num--){
        total = total + num;
        if (num != x){
            cout << "%d + ", num;
        }
        else{
            cout << num <<" = " << total << "\n\n";
            main();
        }
    }
}

void rectangle(){
    float l, w, area;
    cout << "Enter the length : ";
    cin >> l;
    cout << "Enter the width : ";
    cin >> w;
    system("cls");
    area = (l * w);
    cout << "The area of rectangle is " << area << "\n\n";
    main();  
}

void asterisk(){
    int ast;
    cout << "Enter the height of triangle : ";
    cin >> ast;
    system("cls");
    for (int x = 1; x <= ast; x++){
        for(int y = 1; y <= x; y++){
            cout << "* ";
        }
        cout << "\n";
    }
    cout << "\n";
    main();
}

void fibo(){
    int nth, x = -1, y = 1, next;
    cout << "Enter the nth term : ";
    cin >> nth;
    system("cls");
    for (int w = 1; w <=nth; w++){
        next = x + y;
        x = y;
        y = next;
    }
    cout << nth <<" term of fibonacci sequence is " << next << "\n\n";
    main();
}

void pascal(){
    int nth, x = 0, y = 1, next;
    cout << "Enter the nth term : ";
    cin >> nth;
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
    cout << nth << " term of pascal sequence is : " << next << "\n\n";
    main();
}

void bingo(){
    string type;
    char letter;
    int numb, reverse;
    cout << "Enter the integer : ";
    cin >> numb;
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
        cout << numb << " is not a valid input and its absolute value is " << reverse;
        bingo();
            }
            else{
                system("cls");
                cout << "Goodbye";
                }
    system("cls");
    cout << numb << " is a an " << type << "number that belongs to letter " << letter;
    main();
}

void evenodd(){
    int numb, choice, reverse;
    cout << "Enter the integer : ";
    cin >> numb; 
    system("cls");
    if (numb >= 1){
        cout << "1. Get Even Number\n";
        cout << "2. Get Odd Number\n";
        cout << " : ";
        cin >> choice;
        system("cls");
        if (choice == 1 ){
            for (int w =1 ; w <= numb ; w++){
                if (w%2 == 0){
                    cout << w << endl;
                }
            }
        system("cls");
        evenodd();
        }
        else if (choice == 2){
            for (int w = 1; w <= numb ; w++){
                if (w%2 != 0){
                    cout << w << endl;
                }
            }
        system("cls");
        evenodd();
        }
        else{
            system("cls");
            cout << "Invalid Input!.....";
            evenodd();
        }
    }
    else if (numb < 1){
        reverse = abs(numb);
        system("cls");
        cout << "%d\n", reverse;
        evenodd();
    }
    else if (numb == 0){
        system("cls");
        cout << "Goodbye!";
    }
}

void dice(){
    int roll, rand_num, total = 0, choice;
    srand(time(NULL));
    cout << "How many times would you like to roll the dice?\n";
    cin >> roll;
    cout << "Rolling the dice %d times\n", roll;
    for (int w = 1; w <= roll; w++){
        rand_num = (rand() % 6) + 1;
        cout << "Roll " << w << " : " << rand_num << endl;
        total = total + rand_num;
    }
    cout << "Total score : %d", total;
    while (choice != 1 && choice != 0){
        cout << "\nDo you want to try again? 1. Yes  0. No\n";
        cin >> choice;
        switch(choice){
            case 1:
                system("cls");
                dice();
            case 0:
                break;
            default:
                system("cls");
                cout << "\nYou've entered the wrong key, try again....";
        }
    }
}

void nine(){
    int choice, rad, total, reverse;
    srand(time(NULL));
    cout << "Your hand is: ";
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
    cout << "\nYour final score is: " << total << endl;
    if (total == 9){
        cout << "Congratulations, you win!";
    }
    else {
        cout << "Sorry, you lose.";
    }
    while (choice != 1 && choice != 0){
        cout << "\nDo you want to try again? 1. Yes  0. No\n";
        scanf("%d", &choice);
        switch(choice){
            case 1:
                system("cls");
                dice();
            case 0:
                break;
            default:
                system("cls");
                cout << "\nYou've entered the wrong key, try again....";
        }
    }
}

void guess(){
    int rand_num, guess1, total  = 0;
    srand(time(NULL));
    while ( guess1 != rand_num){
        cout << "Guess a number between 1 and 5: ";
        cin >> guess1;
        rand_num = (rand() % 5) + 1;
        if (guess1 < rand_num){
            cout << "Too low, Try again!\n";
            total = total + 1;
            }
            else if (guess1 > rand_num){
                cout << "Too high, try again!\n";
                total = total + 1;          
                }
    }
    total = total + 1;
    system("cls");
    cout << "Congratulations, you guessed the number in " << total << " guesses!";
    main();
}

void card(){
    int guess, ran_num, total = 0, choice;
    srand(time(NULL));
    for (int w = 1; w <= 2; w++){
        ran_num = (rand() % 13 ) + 1;
        cout << "Card " << w << " : " << ran_num << "\n";
        total = total + ran_num;
    }
    if (total > 21){
        cout << "You won!";
        } 
        else if ( total == 21){
            cout << "You win the bonus prize!";
            } 
            else {
                cout << "You lost!";
                }
    cout << "\nDo you still want to play?  1 = Yes  0 = No\n";
    cin >> choice;
    switch(choice){
        case 1: 
            system("cls");
            main();
        case 0:
            system("cls");
            break;
        default:
            system("cls");
            cout << "\nYou've entered the wrong key, try again....";
            card();
    }
}

void mineral(){
    int perfect = 0, acceptable = 0, rejected = 0, choice = 1, ran1, ran2;
        while (choice >= 1 && choice != 0){
            srand(time(NULL));
            ran1 = (rand() % 1000);
            ran2 = (rand() % 100);
            cout << "Minerals have arrived: : " << ran1 << "\n";
            cout << "Purity: " << ran2 << " percent\n";
            if (ran2 > 90){
                cout << "Perfect.\n";
                perfect = perfect + ran1;
                }
                else if (ran2 >= 70 && ran2 <= 89){
                    cout << "Acceptable.\n";
                    acceptable = acceptable + ran1;
                    }
                    else {
                        cout << "Rejected.\n";
                        rejected = rejected + ran1;
                        }
        cout << "Total minerals PERFECT: " << perfect << ", ACCEPTALBE: " << acceptable << ", REJECTED: " << rejected;
        cout << "\n\nContinue? ";
        cin >> choice;
        system("cls");
        switch (choice){
            case 0:
                system("cls");
                cout << "Thank you for using the program...";
                break;  
        }
    }
}

void immigrants(){
    int rand_num, children = 0, adolescents = 0, adult = 0, choice = 1;
    while (choice >= 1 && choice != 0){
        srand(time(NULL));
        cout << "The immigrants arrived by age are : ";
        for (int w = 1 ; w <= 5; w++){
            rand_num = (rand() % 100);
            cout << "%d ", rand_num;
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
    cout << "\nTotal ADULT are: " << adult << ", Total ADOLESCENT are: " << adolescents << ", Total CHILDREN are: " << children;
    cout << "\nDo you still want to accept immigrants? ";
    cin >> choice;
    switch(choice){
        case 0:
            system("cls");
            cout << "Thank you for using the program....";
            break;
        default:
            system("cls");
        }
    }
}