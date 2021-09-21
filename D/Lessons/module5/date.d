import std.stdio;
import std.datetime;

void main() {
    auto nowTime = Clock.currTime(UTC());
    writeln(nowTime.year);
    writeln(nowTime.month);
    writeln(nowTime.day);
    writeln(nowTime.hour);
    writeln(nowTime.minute);
    writeln(nowTime.second);
}