import std.stdio;

void main() {
    enum Suit {club, diamond, heart, spade}
    Suit card = Suit.heart;
    writeln(card);
}