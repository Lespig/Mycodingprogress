import std.stdio;

void main() {
    for(int i = 0; i < 5; i++) {
        writeln(i);
    }

    int[] a6 = [1, 2, 3, 4];
    foreach(x; a6) {
        writeln(x);
    }

    foreach(x; 5..10) {
        writeln(x);
    }

    double[string] aA = ["A" : 1, "B" : 2];
    foreach(k, v; aA) {
        writeln(k, " ", v);
    }

    foreach(x; aA.byKeyValue) {
        writefln("%s : %s", x.key, x.value);
    }

    int[] fE1 = [1, 2, 3, 4];
    foreach(ref x; fE1) {
        x *= 2;
    }
    writeln(fE1);

    int wI = 0;
    while(wI < 20) {
        if(wI % 2 == 0) {
            writeln(wI);
            wI++;
            continue;
        }
        if(wI >= 10) {
            break;
        }
        wI++;
    }

    int guess = 0;
    int secretNum = 7;
    do {
        write("Guess a number: ");
        readf("%d\n", &guess);
    } while(secretNum != guess);
    
    writeln("You guessed it!");
}