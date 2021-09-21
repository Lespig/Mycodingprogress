import std.stdio;
import std.math;

void mathf() {
    writeln("abs(-1) = ", abs(-1));
    writeln("ceil(4.25) = ", ceil(4.25));
    writeln("floor(4.25) = ", floor(4.25));
    writeln("round(4.25) = ", round(4.25));
    writeln("exp(1.0) = ", exp(1.0));
    writeln("log(1) = ", log(1));
    writeln("log10(1) = ", log10(1));
    writeln("pow(2,2) = ", pow(2,2));
    writeln("sqrt(4) = ", sqrt(4.0));
    writeln("cbrt(4) = ", cbrt(4.0));
    writeln("hypot(5,5) = ", hypot(5,5));
    writeln("PI = ", PI);

    // Trig Functions Radians
    writeln("sin(1.5708) = ", sin(1.5708));
    writeln("cos(1.5708) = ", cos(1.5708));
    writeln("tan(1.5708) = ", tan(1.5708));
    writeln("asin(1.5708) = ", asin(1.5708));
    writeln("acos(1.5708) = ", acos(1.5708));
    writeln("atan(1.5708) = ", atan(1.5708));
    writeln("sinh(1.5708) = ", sinh(1.5708));
    writeln("cosh(1.5708) = ", cosh(1.5708));
    writeln("tanh(1.5708) = ", tanh(1.5708));
}

void main() {
    writeln("5 + 4 = ", (5+4));
    writeln("5 - 4 = ", (5-4));
    writeln("5 * 4 = ", (5*4));
    writeln("5 / 4 = ", (5/4));
    writeln("5 % 4 = ", (5%4));

    writeln("5 / 4 = ", (5.0/4.0));

    int incMe = 0;
    writeln("incMe : ", incMe++);
    writeln("incMe : ", ++incMe);

    incMe += 10;
    mathf();
}