// Coded while watching: https://www.youtube.com/watch?v=87SH2Cn0s9A&t

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    //printf("Hello World!\n");

    // This is a comment
    /*
        Multiline
        comment
    */

    /* 
        Escape sequence: char combination with a
        backslash + letter/digits:
        \n = newline
        \t = tab
        
        Code:

        printf("\"I like pizza\" - Abraham Lincoln\n\n");
    */

    /*
        Variable: Allocated space in memory to store a value.
        We refer to a variable's name to access the stored value.
        That var now behaves as if it what the value it contais.
        BUT we need to declare what type of data we are storing.
    
        Code:

        int x; // declaration
        x = 123; // initialization
        int y = 321; // declaration + initialization

        int age = 21; // integer
        float gpa = 3.95; // floating point number
        char grade = 'C'; // single character
        char name[] = "Bro"; // array of characters
        
        printf("Hello %s\n", name);
        printf("You are %d years old\n", age);
        printf("Your average grade is %c\n", grade);
        printf("Your gpa is %f\n\n", gpa);
    */

    /*
        Data types: type of value a variable has
        Most common: char, array of chars, bool and int
    
        Code:

        char a = 'C';                      // single character %c
        char b[] = "Bro";                  // array of chars %s

        float c = 3.141592;                // 4 bytes (32 bits) 6-7 digits  %f
        double d = 3.1215349853498533;     // 8 bytes (64 bits) 15-16 digits %lf

        bool e = true;                     // 1 byte (true or false) %d

        char f = 100;                      // 1 byte (-128 to +127) %d or %c
        unsigned char g = 255;             // 1 byte  (0 to +255) %d or %c

        short int h = 32767;               // 2 bytes (-32768 to +32767) %d
        unsigned short int i = 65535;      // 2 bytes (0 to +62535) %d

        int j = 2231243253;                // 4 bytes (-2147483648 to +2147483647) %d
        unsigned int k = 6544548564L;      // 4 bytes (0 to +4294967295) %u

        long long int l = 651516515615615619656;   // 8 bytes (-9 quintillion to +9 quintillion) %lld
        unsigned long long int m = 871446515615615612689U;   // 8 bytes (0 to +18 quintillion) %llu
    */

    /*
        Format specifier %: defines and formats a type of data to be displayed

        %c  = character
        %s  = string (array of characters)
        %f  = float
        %lf = double 
        %d  = integer

        %.1 = decimal precision
        %1  = minimum field width
        %-  = left align

        Code:

        float item1 = 5.75;
        float item2 = 10.00;
        float item3 = 100.99;

        printf("Item 1: %8.2f\n", item1);
        printf("Item 2: %8.2f\n", item2);
        printf("Item 3: %8.2f\n", item3);
    */
    
    /* 
        Constant = fixed value that cannot be altered by the program during its execution
        
        Code:

        const float PI = 3.14159;
        printf("%f\n\n", PI);
    */

    /*
        Arithmetic operators
        + (addition)
        - (subtraction)
        * (multiplication)
        / (division)
        % (modulus) -> division remainder
        ++ (increment)
        -- (decrement)

        Code:

        int xx = 4;
        int yy = 2;
        
        //float zz = xx / (float) yy;
        float zz = xx % yy;

        printf("%f\n\n", zz);
    */

    /*
        Augmented assignment operators = replace a statement
        where an operator takes a variable as one of its arguments
        and then assigns the result back to the same variable
        x = x + 1
        x += 1

        x = x -1
        x -= 1

        Code:

        int num = 10;
        num += 2;
        num -= 3;
        num *= 4;
        num /= 2;
        num %= 3;
    */

    /*
        Increase/Decrease operator: adds/subtracts 1 to the number

        Code:

        int x = 2;
        x++; // x = x + 1;
        x--; // x = x - 1;
    */

    /* 
        User input: 
        scanf(format specifier, variable) -> until space
        fgets(variable, size, stdin) -> until newline

        Code:

        char userName[25]; // 25 bytes
        printf("What's your name? ");
        fgets(userName, 25, stdin);
        userName[strlen(userName)-1] = '\0'; // removes newline char

        int userAge;
        printf("How old are you? ");
        scanf("%d", &userAge);

        printf("Hello %s\n", userName);
        printf("You're %d years old\n\n", userAge);
    */

    /*
        Math operations

        Code:

        double A = sqrt(9);     // square root of 9
        double B = pow(2, 4);   // 2 to the power of 4
        int C = round(3.14);    // removes decimals, leaves integer
        int D = ceil(3.14);     // round up
        int E = floor(3.14);    // round down
        double F = fabs(-100);  // find absolute from 0 
        double G = log(3);      // log of 3 
        double H = sin(45);     // sin of 45 deg
        double I = cos(45);     // cos of 45 deg
        double J = tan(45);     // tangent of 45 deg

        printf("%lf", J);

        // Find circumference and area of a circle

        const double PI = 3.14159;
        double radius, circumference, area;

        printf("\nEnter the radius of a circle: ");
        scanf("%lf", &radius);

        circumference = 2 * PI * radius;
        area = PI * radius * radius;
        printf("Circumference: %lf\n", circumference);
        printf("Area: %lf\n", area);

        // Find 3rd side of a rectangle triangle

        double A, B, C;

        printf("Enter side A: ");
        scanf("%lf", &A);
        printf("Enter side B: ");
        scanf("%lf", &B);

        C = sqrt(A*A + B*B);

        printf("Side C: %lf\n", C);
    */

    /* 
        If statements

        Code:

        int age;
        printf("Enter your age: ");
        scanf("%d", &age);

        if(age >= 18) {
            printf("You are now signed up!");
        }
        else if(age == 0) {
            printf("You can't sign up! You were just born!");
        }
        else if(age < 0) {
            printf("You haven't been born yet!");
        }
        else {
            printf("You are too young to sign up!");
        }
    */
    
    /*
        Switch: a more efficient way to using many "else if"
        statements, allows value to be tested against many cases
    
        Code:

        char grade;
        printf("Enter a letter grade: ");
        scanf("%c", &grade);

        switch (grade) {
            case 'A':
                printf("Perfect!\n");
                break;
            case 'B':
                printf("You did good!\n");
                break;
            case 'C':
                printf("You did okay!\n");
                break;
            case 'D':
                printf("At least it's not an F!\n");
                break;
            case 'E':
                printf("YOU FAILED!\n");
                break;
            default:
                printf("That's not a valid grade!\n");
                break;
        }
    */

    /*
        Convert Fahrenheit - Celsius

        Code:

        char unit; // C: Celsius or F: Fahrenheit
        float temp;

        printf("Is the temperature in (F) or (C)? ");
        scanf("%c", &unit);

        unit = toupper(unit);

        if(unit == 'C') {
            printf("\nEnter the temp in Celsius: ");
            scanf("%f", &temp);
            temp = (temp * 9 / 5) + 32;
            printf("The temp in Fahrenheit is %.1f", temp);
        }
        else if(unit == 'F') {
            printf("\nEnter the temp in Fahrenheit: ");
            scanf("%f", &temp);
            temp = ((temp - 32) * 5) / 9;
            printf("The temp in Celsius is %.1f", temp);
        }
        else {
            printf("%c is not a valid unit of measurement", unit);
        }
    */
    
    /*
        Basic Calculator

        Code: 

        char operator;
        double n1, n2, res;

        printf("Enter an operator (+, -, *, /): ");
        scanf("%c", &operator);
        printf("Enter number 1: ");
        scanf("%lf", &n1);
        printf("Enter number 2: ");
        scanf("%lf", &n2);

        switch (operator)
        {
            case '+':
                res = n1 + n2;
                break;
            case '-':
                res = n1 - n2;
                break;
            case '*':
                res = n1 * n2;
                break;
            case '/':
                res = n1 / n2;
                break;
            default:
                printf("%c is not valid\n", operator);
                break;
        }

        printf("Result: %.2lf\n", res);
    */

    /*
        Logical operators 
        && (AND): checks if two conditions are true
        || (OR): checks if at least one condition is true
        ! (NOT): reverses the state of a condition
    */

    /* 
        Function: small section of code executed whenever called

        Code:

        void birthday() {
            printf("Happy birthday to you!\n");
        }
        birthday();

        void birthday(char name[], int age) {
            printf("Happy birthday dear %s!\n", name);
            printf("You are %d years old!\n", age);
        }
        char name[] = "Bro";
        int age = 21;
        birthday(name, age);

        double square(double x) {
            return x * x;
        }
        double x = square(3);
        rintf("%lf", x);
    */

    /*
        Ternary operator: shortcut to if/else when assigning/returning a value
        condition ? value if true : value if false

        Code:

        int findMax(int x, int y) {
            return x > y ? x : y;
        }
        int max = findMax(3, 4);
        printf("%d", max);

    */

    /*
        Function prototype: function declaration, without a body, before main()
        ensures that calls to a function are made with the correct arguments
        
        NOTES: many C compilers don't check for parameter matching
        a function prototype causes the compiler to flag an error if missing args
    
        Code:

        void hello(char[], int); // function prototype
        int main() {
            char name[] = "Bernardo";
            int age = 17;
            hello(name, age);
        }
        void hello(char name[], int age) {
            printf("Hello %s\n", name);
            printf("You are %d years old\n", age);
        }
    */

    /*
        String functions

        Code:

        char str1[] = "Bro", str2[] = "Code";

        strlwr(str1); // converts to lower case
        strupr(str1); // converts to upper case
        strcat(str1, str2); // appends str2 to end of str1
        strncat(str1, str2, 1); // appends n characters from str2 to str1
        strcpy(str1, str2); // copy str2 to str1
        strncpy(str1, str2, 4); // copy n characters of str2 to str1

        strset(str1, '?'); // sets all chars of a string to a given char
        strnset(str1, 'x', 1); // sets first n chars of a string to a given char
        strrev(str1); // reverses a string

        int result = strlen(str1); // returns string length as int
        int result = strcmp(str1, str2); // string compare all chars
        int result = strncmp(str1, str2, 1); // string compare n chars
        int result = strcmpi(str1, str2); // string compare all chars (ignore case)
        int result = strnicmp(str1, str2); // string compare n chars (ignore case) 
        printf("%d", result); // -1: different strings  0: equal strings
    */

    /*
        For loop: repeats a section of code a limited amount of times
    
        Code:

        for(int i = 1; i <= 10; i++) {
            printf("%d\n", i);
        }
        for(int i = 10; i >= 1; i--) {
            printf("%d\n", i);
        }
    */

    /*
        While loop: checks a condition, THEN executes a block of code if it's true

        Code:

        char name[25];    
        while(strlen(name) == 0) {
            printf("What's your name? ");
            fgets(name, 25, stdin);
            name[strlen(name)-1] = '\0';
        } 
        printf("Hello %s", name);
    */

    /*
        Do While loop: always executes a block of code once, THEN checks a condition

        Code:

        int num = 0, sum = 0;
        do {
            printf("Enter a number above 0: ");
            scanf("%d", &num);
            if(num > 0) sum += num;
        } while(num > 0);
        printf("Sum: %d", sum);
    */

    /*
        Nested loop: a loop inside another loop

        Code:

        int rows, cols;
        char symbol;

        printf("Enter number of rows: ");
        scanf("%d", &rows);
        printf("Enter number of collumns: ");
        scanf("%d", &cols);

        while((getchar())!='\n'); // gets rid of newline

        printf("Enter symbol: ");
        scanf("%c", &symbol);

        for(int row = 1; row <= rows; row++) {
            for(int col = 1; col <= cols; col++) {
                printf("%c", symbol);
            }
            printf("\n");
        }
    */

    /*
        Continue: skips a rest of code & forces next iteration
        Break: exits a loop

        Code:

        for(int i = 0; i <= 20; i++) {
            if(i == 13) continue;
            printf("%d\n", i);
            if(i == 17) break;
        }
    */

    /*
        Array: a data structure that can store many values of the same data type
        they have FIXED size

        Code:

        double prices[] = {5.0, 2.0, 10.0};

        double prices[4];
        prices[0] = 5.0;
        prices[1] = 2.0;
        prices[2] = 10.0;

        Loop through array:

        double prices[] = {5.0, 2.0, 10.0};

        for(int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
            printf("$%lf\n", prices[i]);
        }
    */

    /*
        2D array: an array, where each element is an entire array
        useful if you need a matrix, grid or table of data

        int numbers[2][3] = {{1,2,3},{4,5,6}};
                        
        int numbers[2][3];
        numbers[0][0] = 1;
        numbers[0][1] = 2;
        numbers[0][2] = 3;
        numbers[1][0] = 4;
        numbers[2][1] = 5;
        numbers[3][2] = 6;

        int numbers[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        int rows = sizeof(numbers)/sizeof(numbers[0]);
        int cols = sizeof(numbers[0])/sizeof(numbers[0][0]);

        printf("Rows: %d\n", rows);
        printf("Cols: %d\n\n   ", cols);

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                printf("%d ", numbers[i][j]);
            }
            printf("\n");
        }

        char cars[][10] = {"Mustang", "Corvette", "Camaro"};

        //strcpy(cars[0], "Tesla");
        //printf("%s", cars[0]);
        
        for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++) {
            printf("%s\n", cars[i]);
        }
    */

    /*
        Swap variables

        Code:

        char x[15] = "water";
        char y[15] = "lemonade";
        char temp[15];

        strcpy(temp, x);
        strcpy(x, y);
        strcpy(y, temp);

        printf("x = %s\n", x);
        printf("y = %s\n", y);
    */
 
    /*
        Sort array

        Code:

        void sortarray(int array[], int size) {
            for(int i = 0; i < size - 1; i++) {
                for(int j = 0; j < size - i - 1; j++) {
                    if(array[j] > array[j+1]) {
                        int temp = array[j];
                        array[j] = array[j+1];
                        array[j+1] = temp;
                    }
                }
            }
        }

        void printarray(int array[], int size) {
            for(int i = 0; i < size; i++) {
                printf("%d ", array[i]);
            }
        }


        int array[] = {9,4,5,7,2,1,3};
        int size = sizeof(array)/sizeof(array[0]);
        sortarray(array, size);
        printarray(array, size);
    */

    /*
        Struct: collection of related members ("variables")
        they can be of different data types
        listed under one name in a block of memory
        VERY SIMILAR to classes in other languages (but no methods)
    
        Code:

        // Outside main
        struct Player {
            char name[12];
            int score;
        };

        // Inside main
        struct Player player1, player2;

        strcpy(player1.name, "Bernardo");
        player1.score = 4;
        strcpy(player2.name, "Mateus");
        player2.score = 5;
        
        printf("Player %s - Score: %d\n", player1.name, player1.score);
        printf("Player %s - Score: %d\n", player2.name, player2.score);
    */

    /*
        typedef: reserved keyword that gives an existing datatype a "nickname"
    
        Code:

        typedef char name[25]; 
        name name1 = "Bernardo";

        typedef struct {
            char name[25];
            char password[12];
            int id;
        } User;

        User user1 = {"Bro", "1223", 1};
        User user2 = {"Code", "1223443", 2};

        printf("%s %s %d\n", user1.name, user1.password, user1.id);
        printf("%s %s %d\n", user2.name, user2.password, user2.id);
    */

    /*
        Array of structs

        Code:

        struct Student {
            char name[12];
            float gpa;
        };

        struct Student st1 = {"Spongebob", 4.0};
        struct Student st2 = {"Patrick", 2.0};
        struct Student st3 = {"Sandy", 3.0};
        struct Student st4 = {"Squidward", 1.5};

        struct Student students[] = {st1, st2, st3, st4};

        printf("%-12s\t", "Name");
        printf("GPA\n");
        
        for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {
            printf("%-12s\t", students[i].name);
            printf("%.1f\n", students[i].gpa);
        }
    */
    
    /*
        Enum: a user defined type of named integer identifiers
        helps to make a program more reliable
        They are NOT STRINGS, can be treated as INTS

        Code:

        enum Day {Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

        enum Day today = Mon;
        if(today == Sun || today == Sat) {
            printf("It's weekend! Party time");
        }
        else {
            printf("I have to work today");
        }
    */

    /*
        Pseudo random numbers: A set of values or elements that
        are statistically random (don't use for cryptography)

        Code:

        // Sets seed as current time
        srand(time(0));

        // Get 3 random numbers
        int n1 = (rand() % 20) + 1;
        int n2 = (rand() % 6) + 1;
        int n3 = (rand() % 6) + 1;
        printf("%d\n%d\n%d\n", n1, n2, n3);
    */

    /*
        Number guessing game

        Code:

        const int MIN = 1, MAX = 4;
        int guess, answer;
        int guesses;

        srand(time(0));

        answer = (rand() % MAX) + MIN;

        do {
            printf("Enter a guess (%d-%d): ", MIN, MAX);
            scanf("%d", &guess);

            if(guess == answer) 
                printf("Congrats! You've got it!");
            else {
                printf("Wrong answer! You're a trash!\n");
            }
        } while (guess != answer);

        return 0; 
    */
    
    /*
        Quiz game

        Code:

        char questions[][102] = {"1. What year was Steve Jobs born?", "2. Which year was Google created?", "3. How many planets are there in the Solar System"};
        char options[][10] = {"A. 1950", "B. 1961", "C. 1955", "A. 1980", "B. 1999", "C. 1998", "A. 10", "B. 8", "C. 9"};
        char answers[3] = {'C', 'C', 'B'};
        int nQuestions = sizeof(questions) / sizeof(questions[0]);

        char guess;
        int score;

        printf("Quiz Game\n");

        for(int i = 0; i < nQuestions; i++) {
            printf("%s\n", questions[i]);
            printf("%s\n%s\n%s\n", options[i*nQuestions], options[i*nQuestions+1], options[i*nQuestions+2]);

            printf("Your answer: ");
            scanf("%c", &guess);
            
            guess = toupper(guess);

            if(guess == answers[i]) {
                score++;
                printf("Correct!\n");
            }
            else {
                printf("Wrong!\n");
            }   

            while((getchar())!='\n');
        }

        printf("Your score was: %d!\n", score);
    */

    /*
        Bitwise operators: special operators used in bit level programming

        & = AND  (if 1 and 1 -> 1)
        | = OR   (if any 1 -> 1)
        ^ = XOR (if only 1 -> 1)
        << = left shift  (x2) (shift every bit to left and adds n 0s to right)
        >> = right shift (/2) (shift every bit to right and adds n 0s to left)

        Code:

        int x = 6;  // 00000110
        int y = 12; // 00001100
        int z = 0;  // 00000000
        
        z = x & y;
        printf("AND = %d\n", z); // 4
        z = x | y;
        printf("OR = %d\n", z); // 14
        z = x ^ y;
        printf("XOR = %d\n", z); // 10
        z = x << 1;
        printf("left shift = %d\n", z);
        z = x >> 2;
        printf("left shift = %d\n", z);
    */

    /*
        Memory: an array of bytes within RAM (street)
        Memory block: a single unit (byte) within memory, hold some value (person)
        Memory address: the address of where a memory block is located (house address)
    
        Code:

        char a = 'X';
        char b = 'Y';
        char c[5];

        printf("%ld bytes ", sizeof(a));
        printf("%ld bytes ", sizeof(b));
        printf("%ld bytes\n", sizeof(c));

        printf("%p ", &a);
        printf("%p ", &b);
        printf("%p\n", &c);
    */

    /*
        Pointer: a variable-like reference that holds a memory address to another variable, array, etc.
        some tasks are performed more easily with pointers
        * = indirection operator (value at address)
        Use it to declare a pointer or to access the address

        Code:

        void printAge(int *pAge) {
            printf("You are %d yeard old\n", *pAge);
        }

        int age = 21;
        int *pAge = NULL; // = NULL if declaring and not assigning value
        pAge = &age;

        printf("size of age: %ld bytes\n", sizeof(age));
        printf("size of pAge: %ld bytes\n", sizeof(pAge));
        printf("Address: %p Value: %d\n", &age, age);
        printf("Address: %p Value: %d\n", pAge, *pAge);
        printAge(pAge);
    */

    /*
        Writing and deleting files

        Code:

        FILE *pF = fopen("test.txt", "a");
        fprintf(pF, "\nSpongebob Squarepants");
        fclose(pF);

        if(remove("test.txt") == 0) {
            printf("That file was deleted successfully!");
        } else {
            printf("That file wasn't deleted.");
        }
    */

    /*
        Reading files

        Code:

        FILE *pF = fopen("test.txt", "r");
        char buffer[255];

        if(pF == NULL) {
            printf("Unable to open file");
        }
        else {
            while(fgets(buffer, 255, pF) != NULL) {
                printf("%s", buffer); 
            }
        }
        fclose(pF);
    */

    /*
        TicTacToe

        Code:

        char board[3][3];
        const char PLAYER = 'X', COMPUTER = 'O';
        void resetBoard();
        void printBoard();
        int checkFreeSpaces();
        void playerMove();
        void computerMove();
        char checkWinner();
        void printWinner(char);

        char winner, response;

        do {
            winner = ' ';
            response = 'Y';

            resetBoard();
            while(winner == ' ' && checkFreeSpaces() > 0) {
                printBoard();

                playerMove();
                winner = checkWinner();
                if(winner != ' ' && checkFreeSpaces() <= 0) break;

                computerMove();
                winner = checkWinner();
                if(winner != ' ' && checkFreeSpaces() <= 0) break;
            }
            printBoard();
            printWinner(winner);

            printf("Would you like to play again? (y/n) ");
            while((getchar())!='\n');

            scanf("%c", &response);

            response = toupper(response);
        } while(response == 'Y');

        void resetBoard() {
            for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3; j++) {
                    board[i][j] = ' ';
                }   
            }
        }
        void printBoard() {
            printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
            printf("\n---|---|---\n");
            printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
            printf("\n---|---|---\n");
            printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
        }
        int checkFreeSpaces() {
            int freeSpaces = 9;

            for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3; j++) {
                    if(board[i][j] != ' ') 
                        freeSpaces--;
                }   
            }

            return freeSpaces;
        }
        void playerMove() {
            int x, y;

            do {
                printf("Enter row number (1-3): ");
                scanf("%d", &x);
                x--;
                printf("Enter collumn number (1-3): ");
                scanf("%d", &y);
                y--;

                if(board[x][y] != ' ') {
                    printf("Invalid move, try again.");
                } 
            } while (board[x][y] != ' ');

            board[x][y] = PLAYER;
        }
        void computerMove() {
            srand(time(0));
            int x, y;

            if(checkFreeSpaces() > 0) {
                do {
                    x = rand() % 3;
                    y = rand() % 3;
                } while(board[x][y] != ' ');

                board[x][y] = COMPUTER;
            }
            else {
                printWinner(' ');
            }
            
        }
        char checkWinner() {
            // check rows
            for(int i = 0; i < 3; i++) {
                if(board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ') {
                    return board[i][0];
                }
            }

            // check cols
            for(int i = 0; i < 3; i++) {
                if(board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ') {
                    return board[0][i];
                }
            }

            // check left diag
            if(board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ') {
                return board[0][0];
            }
            
            // check right diag
            if(board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ') {
                return board[0][2];
            }

            return ' ';
        }
        void printWinner(char winner) {
            if(winner == ' ') {
                printf("Draw!\n");
            } else if(winner == 'X') {
                printf("You won\n");
            } else {
                printf("You lost\n");
            }
        }
    */

    return 0;
}