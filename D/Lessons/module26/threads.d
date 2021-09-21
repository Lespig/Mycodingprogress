import std.stdio;
import std.datetime;
import core.thread;
import std.concurrency;

void main() {
    void doStuff(int x) {
        writeln(x, " starts");
        Thread.sleep(1.seconds);
        writeln(x, " stops");
    }

    auto now1 = Clock.currTime(UTC());
    auto sS = now1.second;
    doStuff(1);
    doStuff(2);
    doStuff(3);
    auto now2 = Clock.currTime(UTC());
    auto sS2 = now1.second;
    writeln("Seconds: ", sS2 - sS);
}