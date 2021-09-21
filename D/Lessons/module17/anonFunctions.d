import std.stdio;
import std.random;
import std.datetime;
import std.algorithm;
import std.range : chain, generate, take;

void main() {
    auto aF1 = (int a) => a * 2;
    writeln(aF1(5));

    int[] a7 = [1, 2, 3, 4];
    auto aF2 = map!(a => a * 2)(a7);
    writeln(aF2);

    int[] a8 = [5, 6, 7];
    auto aF3 = map!(a => a * 2)(chain(a7, a8));
    writeln(aF3);

    auto aF4 = a7.filter!(a => (a % 2) == 0);
    writeln(aF4);
    
    auto aF5 = reduce!((a, b) => a + b)(0, a7);
    writeln(aF5);

    auto aF6 = reduce!(max)(aF3);
    writeln(aF6);

    auto now2 = Clock.currTime(UTC());
    auto seed2 = now2.second;
    auto rand2 = Random(seed2);
    auto randVals = generate!(() => uniform(1, 2000, rand2))().take(10);
    foreach(x; randVals) {
        writeln(x);
    }
}