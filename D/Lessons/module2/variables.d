import std.stdio;
import std.range;

void main() {
    int a1_B = 10;

    auto bool1 = true;
    writeln("Bool : ", bool1);
    writeln("bool min : ", bool.min);
    writeln("bool max : ", bool.max);
    bool happy = true;
    writefln("Bool : %s", happy);

    writeln("char min : ", char.min);
    writeln("char max : ", char.max);
    char a = 'A';
    writefln("Char : %c", a);

    writeln("byte min : ", byte.min);
    writeln("byte max : ", byte.max);
    writeln("short min : ", short.min);
    writeln("short max : ", short.max);
    writeln("int min : ", int.min);
    writeln("int max : ", int.max);
    writeln("long min : ", long.min);
    writeln("long max : ", long.max);
    long lNum = 123_456_789;
    writefln("LNum : %15d", lNum);

    writeln("float max : ", float.max);
    float fNum = 1.1111111111111111;
    float fNum2 = 1.1111111111111111;
    writefln("Float : %1.16f", fNum + fNum2);

    writeln("double max : ", double.max);
    double dNum = 1.1111111111111111;
    double dNum2 = 1.1111111111111111;
    writefln("Double : %1.16f", dNum + dNum2);
    
    writeln("real max : ", real.max);
    real rNum = 1.1111111111111111;
    real rNum2 = 1.1111111111111111;
    writefln("Real : %1.20f", rNum + rNum2);

    writeln("Default int : ", int.init);

    // Unsigned: ubyte, ushort, uint, ulong
    // Imaginary: ifloat, idouble, ireal
    // Complex: cfloat, cdouble, creal
    // wchar: UTF-16 strings
    // dchar: UTF-32 strings
}