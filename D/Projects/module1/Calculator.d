import std.stdio;

void main() {
    double num1;
    double num2;
    int op;

    writeln("Simple Calculator");
    write("Enter a number: ");
    readf("%f", &num1);
    write("\nEnter another number: ");
    readf("%f", &num2);
    write("\nWould you like to 1. Add, 2. Subtract, 3. Multiply, or 4. Divide? ");
    readf("%d", op);
    if (op == 1) {
        writeln(num1 + num2);
    }

    else if (op == 2) {
        writeln(num1 - num2);
    }

    else if (op == 3) {
        writeln(num1 * num2);
    }

    else if (op == 4) {
        writeln(num1 / num2);
    }

    else {
        writeln("Please try again!");
    }

}