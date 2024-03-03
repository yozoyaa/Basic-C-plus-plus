#include <iostream>

int ConIf() {
    int number = 10;

    if (number > 0) {
        std::cout << "The number is positive!" << std::endl;
    }
    std::cout << std::endl;
}

int ConIfElse() {
    int number1 = -5;

    if (number1 > 0) {
        std::cout << "The number is positive" << std::endl;
    }
    else
    {
        std::cout << "The number is Negative" << std::endl;
    }
    std::cout << std::endl;
}

int ConElseIf() {
    int number2 = 0;

    if (number2 > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number2 < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }
    std::cout << std::endl;
}

int SwitchState() {
    int day = 4;

    switch (day) {
        case 1:
            std::cout << "Monday";
            break;
        case 2:
            std::cout << "Tuesday";
            break;
        case 3:
            std::cout << "Wednesday";
            break;
        case 4:
            std::cout << "Thursday";
            break;
        case 5:
            std::cout << "Friday";
            break;
        case 6:
            std::cout << "Saturday";
            break;
        case 7:
            std::cout << "Sunday";
            break;
        default:
            std::cout << "Invalid day";
    }
    std::cout << std::endl;
}

int WhileLoop() {
    int counter = 1;

    while (counter <= 5) {
        std::cout << "Counter: " << counter << std::endl;
        ++counter;
    }
    std::cout << std::endl;
}

int DoWhileLoop() {
    int counter = 1;

    do {
        std::cout << "Counter: " << counter << std::endl;
        ++counter;
    } while (counter <= 5);
    std::cout << std::endl;
}

int ForLoop() {
    for (int counter = 1; counter <= 5; ++counter) {
        std::cout << "Counter: " << counter << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    ConIf();
    ConIfElse();
    ConElseIf();
    SwitchState();
    WhileLoop();
    DoWhileLoop();
    ForLoop();

    return 0;
}