import std.stdio;
import std.random;
import std.datetime;

void main() {
    auto nowTime = Clock.currTime(UTC());
    int seed = nowTime.second;
    auto rand = Random(seed);
    writeln("Rand : ", uniform(5, 20, rand));
}