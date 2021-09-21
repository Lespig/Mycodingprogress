import std.stdio;

void main() {
    int val = 43;
    int* pVal = &val;
    writeln("Address : ", pVal);
    writeln("Value: ", *pVal);

    void changePtrVal(int* pVal) {
        *pVal = 22;
    }

    changePtrVal(&val);
    writeln("Value: ", val);
}