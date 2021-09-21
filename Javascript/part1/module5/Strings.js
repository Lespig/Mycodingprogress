var firstName = "Alan";
var lastName = "Turing";

var myFirstName = "Calvin";
var myLastName = "Huynh";

//Escape characters
var myStr = "I am a \"double quoted\" string inside \"double quotes\"";
console.log(myStr)
var Link = '<a href="https://www.example.com" target="_blank">Link</a>';
/*****
CODE  OUTPUT
\'    single quote
\"    double quote
\\    backslash
\n    newline
\r    carriage return
\t    tab
\b    backspace
\f    form feed
*****/

var String = "FirstLine\n\t\\SecondLine\nThirdLine";

//Concatenation
var c = "I come first. " + "I come second.";
var d = "This is the start. " + "This is the end.";
console.log(d);
var addon = "Puzzle ";
addon += "Pieces";
var addon2 = "This is the first sentence. ";
addon2 += "This is the second sentence.";
console.log(addon2);
var name = "freeCodeCamp";
var name2 = "Welcome to " + name + ", how are you?";
console.log(name2);
var adj = "awesome!";
var append = "freeCodeCamp is ";
append += adj;
console.log(append);

var length = 0;
var namelen = "Luigi"
length = namelen;
console.log(length);

//Bracket Notation
var firstletter = "";
var nextletter = "";
var lastletter = "";
var secondlastletter = "";
var word = "Cherry";
firstletter = word[0];
nextletter = word[2];
lastletter = word[word.length - 1];
secondlastletter = word[word.length - 2];
console.log(firstletter)

//String Immutability
var fix = "Jello World";
//fix[0] = "H"
//This will not work due to a string's immutability
fix = "Hello World";

function wordBlanks(myNoun, myAdjective, myVerb, myAdverb) {
    var result = "";
    result += "The " + myAdjective + " " + myNoun + " " + myVerb + " to the store " + myAdverb + ".";
    return result;
}

console.log(wordBlanks("dog", "big", "ran", "quickly"));
console.log(wordBlanks("bike", "slow", "flew", "slowly"));