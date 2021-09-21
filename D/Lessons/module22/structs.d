import std.stdio;

void main() {
    struct Customer {
        string name;
        string phone;
        double bal = 0;
        static numCusts = 0;
    }

    Customer c1;
    c1.name = "Paul Smith";
    c1.phone = "555-1212";
    c1.bal = 340.10;
    Customer.numCusts++;
    writefln("Call %s at %s about $%.2f", c1.name, c1.phone, c1.bal);

    Customer c2 = {"Sue Smith", "555-1213", 18.90};
    Customer.numCusts++;
    writeln("Number of customers: ", Customer.numCusts);
}