import std.stdio;
import std.string;
import std.file;

void main() {
    // w : Open for writing and/or create file
    // a : Open for appending and/or create file
    // r : Open for reading
    // r+ : Open for reading and writing
    // w+ : Open for reading and writing, 0 file, or create file
    // a+ : Open for reading and appending writing

    File file = File("myfile.txt", "w");
    file.writeln("Some random text");
    file.writeln("More random text");
    file.close();

    File file2 = File("myfile.txt", "r");
    while(!file2.eof()) {
        writeln(chomp(file2.readln()));
    }

    file2.close();
}