import std.stdio;
import std.string;
import std.conv;
import std.typecons : No;

void main() {
    string s1 = "Doug";
    writeln(s1[0]);
    s1 = "Tom";
    writeln(s1.length);

    string s2 = s1 ~ " Thumb";
    writeln("T : ", indexOf(s2, 'T'));
    writeln("Last T : ", lastIndexOf(s2, 'T'));
    writeln("Thumb : ", indexOf(s2, "Thumb", No.caseSensitive));

    writeln(replace(s2, "Tom", "Ed"));
    string s3 = "1 2 3";
    auto numArr = to!(int[])(split(s3));
    writeln(numArr);

    string s4 = "1 2 3";
    writeln(s3 == s4);
    writeln(toUpper(s2));
    writeln(toLower(s2));

    writeln(isNumeric("10"));
}