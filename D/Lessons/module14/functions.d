import std.stdio;

// Function Overloading
int getSum3(int x, int y) {
    return x + y;
}

double getSum3(double x, double y) {
    return x + y;
}

void main() {
    writeln("5.4 + 4.5 = ", getSum3(5.4, 4.5));

    int getSum(int x, int y) {
        return x + y;
    }

    writeln("Sum: ", getSum(5,4));

    void changeMe(ref int f1) {
        f1 = 5;
    }

    int f1 = 10;
    changeMe(f1);
    writeln(f1);

    int getSum2(A...)(A args) {
        int sum = 0;
        foreach(x; args) {
            sum += x;
        }

        return sum;
    }
    writeln("Sum : ", getSum2(1, 2, 3));

    int[] getNext2(int x) {
        int[] next2 = [x+1, x+2];
        return next2;
    }

    int[] next2 = getNext2(1);
    writeln(next2);

    //In / Const / Out

    /*
    void randFunc(in int x, const int y) {
        writeln(x);
    }
    */

    void randFunc2(out int f2) {
        f2 = 100;
    }

    int f2 = 5;
    randFunc2(f2);
    writeln("f2 : ", f2);
}

