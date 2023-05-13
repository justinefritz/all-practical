import java.util.Scanner;
import java.util.Random;

public class allpractical{
    public static void main(String[] args){
    int choice;
    Scanner scanner = new Scanner(System.in);
    System.out.println("1. Radius");
    System.out.println("2. Factorial");
    System.out.println("3. Multiplication Table");
    System.out.println("4. Summation of Number");
    System.out.println("5. Rectangle");
    System.out.println("6. Triangle(*)");
    System.out.println("7. Fibonnaci Sequence");
    System.out.println("8. Pascal Sequence");
    System.out.println("9. Bingo");
    System.out.println("10. Even or Odd");
    System.out.println("11. Dice");
    System.out.println("12. Lucky Nine");
    System.out.println("13. Guess");
    System.out.println("14. Card");
    System.out.println("15. Mineral");
    System.out.println("16. Immigrants");
    System.out.println("17. Exit");
    System.out.print(" : ");
    choice = scanner.nextInt();
    if(choice == 1){
        System.out.print("\033c");
        circle();
    }else if (choice == 2){
        System.out.print("\033c");
        factorial();
    }else if (choice == 3){
        System.out.print("\033c");
        multi();
    }else if (choice == 4){
        System.out.print("\033c");
        summa();
    }else if (choice == 5){
        System.out.print("\033c");
        rectangle();
    }else if (choice == 6){
        System.out.print("\033c");
        asterisk();
    }else if (choice == 7){
        System.out.print("\033c");
        fibo();
    }else if (choice == 8){
        System.out.print("\033c");
        pascal();
    }else if (choice == 9){
        System.out.print("\033c");
        bingo();
    }else if (choice == 10){
        System.out.print("\033c");
        evenodd();
    }else if (choice == 11){
        System.out.print("\033c");
        dice();
    }else if (choice == 12){
        System.out.print("\033c");
        nine();
    }else if (choice == 13){
        System.out.print("\033c");
        guess();
    }else if (choice == 14){
        System.out.print("\033c");
        card();
    }else if (choice == 15){
        System.out.print("\033c");
        mineral();
    }else if (choice == 16){
        System.out.print("\033c");
        immigrants();
    }else if ( choice == 17){
        System.out.print("\033c");
        System.out.println("Thank you for using the program.....");
    }else{
        System.out.print("\033c");
        System.out.println("You've entered the wrong key\n\n");
        main(args);
    }
}

private static void circle(){
    float r, radius;
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the number : ");
    r = scanner.nextInt();
    radius = (float) (3.14 * (r * r));
    System.out.print("\033c");
    System.out.println("The radius is " + radius);
    main(new String[]{});
}

private static void factorial(){
    int num, total = 1;
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the number : ");
    num = scanner.nextInt();
    System.out.print("\033c");
    for (int x = 1; x <= num; num--){
        total = total * num;
        if (num == 1){
            System.out.print( num + " ");
        }
        else{
        System.out.print(num + " * ");
        }
    }
    System.out.print(num + " = " + total + "\n\n");
    main(null);
}

private static void multi(){
    int num = 1, total;
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the number : ");
    num = scanner.nextInt();
    System.out.print("\033c");
    for (int w = 1; w <= 10; w++){
        for (int x = 1; x <= num; x++){
            total = w * x;
            System.out.print( total + "\t");
        }
        System.out.print("\n");
    }
    System.out.print("\n");
    main(null);
}

private static void summa(){
    int num = 0, total = 0;
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the number : ");
    num = scanner.nextInt();
    System.out.print("\033c");
    for (int x = 1; x <= num; num--){
        total = total + num;
        if (num != x){
            System.out.print(num + " + ");
        }
        else{
            System.out.println(num + " = " + total);
            main(null);
        }
    }
}

private static void rectangle(){
    float l, w, area;
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the length : ");
    l = scanner.nextFloat();
    System.out.print("Enter the width : ");
    w = scanner.nextFloat();
    area = (float) (l * w);
    System.out.print("\033c");
    System.out.print("The area of rectangle is " + area + "\n\n");
    main(null);  
}

private static void asterisk(){
    int ast;
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the height of triangle : ");
    ast = scanner.nextInt();
    System.out.print("\033c");
    for (int x = 1; x <= ast; x++){
        for(int y = 1; y <= x; y++){
            System.out.print("* ");
        }
        System.out.println();
    }
    System.out.println();
    main(null);
}

private static void fibo(){
    int nth, x = -1, y = 1, next = 0;
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the nth term : ");
    nth = scanner.nextInt();
    System.out.print("\033c");
    for (int w = 1; w <=nth; w++){
        next = x + y;
        x = y;
        y = next;
    }
    System.out.print(nth + " term of fibonacci sequence is " + next + "\n\n");
    main(new String[]{});
}

private static void pascal(){
    int nth, x = 0, y = 1, next = 1;
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the nth term : ");
    nth = scanner.nextInt();
    System.out.print("\033c");
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
    System.out.print(nth + " term of pascal sequence is " + next + "\n\n");
    main(new String[]{});
}

private static void bingo(){
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the integer : ");
    int numb = scanner.nextInt();
    System.out.print("\033c");
    if (numb >= 1 && numb <= 75){
    String type = (numb % 2 == 0) ? "even" : "odd";
    char letter;
    if (numb <= 15){
        letter = 'B';
    }else if (numb <= 30){
        letter = 'I';
    }else if (numb <= 45){
        letter = 'N';
    }else if (numb < 60){
        letter = 'G';
    }else{
        letter = 'O';
    }
    System.out.println(numb + " is a " + type + " number and belongs to letter " + letter);
    main(null);
    }else{
        int reverse = Math.abs(numb);
        System.out.println(numb + "is not a valid input and its absolute value is " + reverse);
        main(null);
    }
}

private static void evenodd(){
    int numb, reverse;
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the integer : ");
    numb = scanner.nextInt();
    System.out.print("\033c");
    if (numb >= 1){
        System.out.println("1. Get Even Number");
        System.out.println("2. Get Odd Number");
        System.out.print(" : ");
        byte choice = scanner.nextByte();
        System.out.print("\033c");
        if (choice == 1 ){
            for (int w =1 ; w <= numb ; w++){
                if (w%2 == 0){
                    System.out.println(w);
                }
            } 
        evenodd();
        }
        else if (choice == 2){
            for (int w = 1; w <= numb ; w++){
                if (w%2 != 0){
                    System.out.println(w);
                }
            }
        evenodd();
        }
        else{
            System.out.print("Invalid Input!.....\n");
            evenodd();
        }
    }
    else if (numb < 0){
        reverse = Math.abs(numb);
        System.out.print("\033c");    
        System.out.println(reverse);
        evenodd();
    }
    else if (numb == 0){
        System.out.print("\033c");
        System.out.print("Goodbye!");
    }
}

public static void dice(){
        int roll, rand_num, total = 0;
        Scanner scanner = new Scanner(System.in);
        Random rand = new Random();
        System.out.println("How many times would you like to roll the dice?");
        roll = scanner.nextInt();
        System.out.println("Rolling the dice " + roll + " times...");
        for (int w = 1; w <= roll; w++){
            rand_num = rand.nextInt(6) + 1;
            System.out.println("Roll " + w + " : " + rand_num);
            total = total + rand_num;
        }
        System.out.print("Total score: " + total);
        System.out.println("\nDo you want to try again? 1. Yes 0. No");
        byte choice = scanner.nextByte();
        if (choice == 1){
            System.out.print("\033c");
            dice();
        }
        else if(choice == 0){
            System.out.print("\033c");
            main(null);
        }
        else {
            System.out.print("\033c");
            dice();
        }
}       

public static void nine(){
    int rad, total = 0, reverse;
    Random rand = new Random();
    Scanner scanner = new Scanner(System.in);
    System.out.print("Your hand is: ");
    for (int x = 1; x <= 3; x++){
        rad = rand.nextInt(6) + 1;
        System.out.print(rad + " ");
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

    reverse = total * 1;
    System.out.print("\nYour final score is: " + reverse + "\n");
    if (reverse == 9){
        System.out.print("Congratulations, you win!");
    }
    else {
        System.out.print("Sorry, you lose.");
    }
    System.out.print("\nDo you want to try again? 1. Yes  0. No\n");
    byte choice = scanner.nextByte();
    if (choice == 1){
        System.out.print("\033c");
        nine();
    }
    else if (choice == 0){
        System.out.print("\033c");
        main(null);
    }
    else {
        System.out.print("\033c");
        nine();
    }
}

public static void guess(){
    int guess = 0, ran_num = 0, total = 0;
    Scanner sc = new Scanner(System.in);
    Random rand = new Random();
    ran_num = rand.nextInt(5) + 1;
    while ( guess != ran_num ){
        System.out.print("Guess a number between 1 and 5 : ");
        guess = sc.nextInt();
        if(guess < ran_num){
            System.out.println("Too Low, try again...");
            total = total + 1;
        }else if (guess > ran_num){
            System.out.println("Too High, try again...");
            total = total + 1;
        }
    }
    total = total + 1;
    System.out.print("\033c");
    System.out.println("Congratulations, you guessed the number in " + total + " guesses");
    main(null);
}

public static void card(){
    int guess, ran_num, total = 0, choice = 0;
    Scanner sc = new Scanner(System.in);
    Random rand= new Random();
    for (int w = 1; w <= 2; w++){
        ran_num = rand.nextInt(13) + 1;
        System.out.println("Card " + w + " : " + ran_num);
        total = total + ran_num;
    }
    if (total > 21){
        System.out.println("You won!");
    } else if ( total == 21){
        System.out.println("You win the bonus prize!");
    } else {
        System.out.println("You lost!");
    }
    while (choice != 1){
    System.out.println("\nDo you still want to play?  1 = Yes  0 = No");
    choice = sc.nextInt();
        switch(choice){
            case 1: 
                System.out.print("\033c");
                card();
            case 0:
                System.out.print("\033c");
                System.out.print("Thank you for using the program...");
                System.exit(0);
            default:
                System.out.print("\033c");
                System.out.println("\nYou've entered the wrong key, try again....");
                break;
        }
    }
}

public static void mineral(){
    int perfect = 0, acceptable = 0, rejected = 0, choice = 1, ran1, ran2;
        while (choice >= 1 && choice != 0){
            Scanner sc = new Scanner(System.in);
            Random rand = new Random();
            ran1 = rand.nextInt(1000) + 1;
            ran2 = rand.nextInt(100) + 1;
            System.out.println("Minerals have arrived: " + ran1 + " ");
            System.out.println("Purity: " + ran2 + " percent");
            if (ran2 > 90){
                System.out.println("Perfect.");
                perfect = perfect + ran1;
                }
                else if (ran2 >= 70 && ran2 <= 89){
                    System.out.println("Acceptable.");
                    acceptable = acceptable + ran1;
                    }
                    else {
                        System.out.println("Rejected.");
                        rejected = rejected + ran1;
                        }
        System.out.print("Total minerals PERFECT: " + perfect + ", ACCEPTALBE: " + acceptable + ", REJECTED: " + rejected);
        System.out.print("\n\nContinue? ");
        choice = sc.nextInt();
        System.out.print("\033c");
        switch (choice){
            case 0:
                System.out.print("\033c");
                System.out.print("Thank you for using the program...");
                break;  
        }
    }
}

public static void immigrants(){
    int rand_num, children = 0, adolescents = 0, adult = 0, choice = 1;
    Scanner sc = new Scanner(System.in);
    while (choice >= 1 && choice != 0){
        Random rand = new Random();
        System.out.print("The immigrants arrived by age are : ");
        for (int w = 1 ; w <= 5; w++){
            rand_num = rand.nextInt(100);
            System.out.print(rand_num +" ");
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
    System.out.print("\nTotal ADULT are: " + adult + ", Total ADOLESCENT are: " + adolescents + ", Total CHILDREN are:" + children);
    System.out.print("\nDo you still want to accept immigrants? ");
    choice = sc.nextInt();
    switch(choice){
        case 0:
            System.out.print("\033c");
            System.out.print("Thank you for using the program....");
            break;
        default:
            System.out.print("\033c");
        }
    }
}

}