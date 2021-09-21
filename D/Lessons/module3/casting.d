import std.stdio;
import std.conv;

void main() {
    int cInt = 15;
    short cShort = cast(short) cInt;
    short cShort2 = cast(short) 32768;
    writeln("Short cast : ", cShort2);

    auto sInt = to!string(10);
    writeln("Type : ", typeof(sInt).stringof);

    auto iStr = to!int("10");
    writeln("Type : ", typeof(iStr).stringof);
}