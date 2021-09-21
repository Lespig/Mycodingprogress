import std.stdio;

void main() {
    int age = 12;
    if (age <= 4) {
        writeln("Preschool Student");
    }

    else if ((age >= 5) && (age <= 10)) {
        writeln("Elementary School Student");
    }

    else if ((age >= 11) && (age <= 13)) {
        writeln("Middle School Student");
    }

    else if ((age >= 14) && (age <= 18)) {
        writeln("High School Student");
    }

    else {
        writeln("Adult");
    }

    bool canVote = (age >= 18) ? true : false;
    writeln(canVote);
}