import std.stdio;

void main() {
    string name;
    write("What's your name?\n");
    readf("%s\n", &name);
    writeln("Hello ", name);
}
