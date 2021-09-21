import std.stdio;

void main() {
    mixin MakeType!(int, 10);

    mixin GetSum!(double);
    write("1.2 + 2.3 = ", add(1.2, 2.3));
}

mixin template MakeType(T, T x) {
    T var1 = x;
}

mixin template GetSum(T) {
    T add(T x, T y) {
        return x + y;
    }
}