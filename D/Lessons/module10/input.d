import std.stdio;
import std.string;

void main() {
    write("Please enter your first and last name?\n");
    string fName = strip(readln());
    striing fN, lN;
    formettedRead(fName, " %s %s", fN, lN);
    writeln("Hello ", fN, " ", lN);
}