import std.stdio;
import std.array;
import std.algorithm;

void main() {
    int[10] a1;
    int[] a2 = [1,2,3,4];
    a2[0] = 0;
    writeln("Index : ", a2[0]);

    int[] a3;
    a3 ~= 1;
    a3 ~= 2;
    a3 ~= 3;

    a3 = a3.remove(1);
    writeln(a3);

    a3 = a2 ~ a3;
    a3 = a3.remove!(x => (x%2) == 0);
    writeln(a3);

    writeln(sort(a3));
    writeln(reverse(a3));

    writeln(a3.replace(3,2));

    a3 = a2 ~ a3;
    writeln(a3[0 .. 3]);

    auto a4 = a3.dup;

    a4[] *= 2;
    writeln(a4);

    string[][][] a5 = [[["000"], ["100"], ["200"], ["300"]], [["010"], ["110"], ["210"], ["310"]], [["020"], ["120"], ["220"], ["320"]]];
    writeln(a5[2][3][0]);
}