import std.stdio;

void main() {
    try {
        int zero = 0;
        // assert(zero != 0, "Can't be zero");
        if (zero == 0) {
            throw new Exception("Can't divide by zero");
        }

        else {
            int goodInt = 10 / zero;
        }
    }

    catch(Exception e) {
        writeln(e.msg);
    }

    finally {
        writeln("Cleaning up");
    }
}