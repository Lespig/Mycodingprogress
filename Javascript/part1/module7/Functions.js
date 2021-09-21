function ourReusableFunction() {
    console.log("Heyya, World");
}

ourReusableFunction();


function reusableFunction() {
    console.log("Hi World");
}

reusableFunction();


function ourFunctionWithArgs(a, b) {
    console.log(a - b);
}
ourFunctionWithArgs(10, 5);


function functionWithArgs(a, b) {
    console.log(a + b);
}

functionWithArgs(10, 5);


//Scope
var myGlobal = 10;
var oopsGlobal;

function fun1() {
     oopsGlobal = 5;
}

function fun2() {
    var output = "";
    if (typeof myGlobal != "undefined") {
        output += "myGlobal: " + myGlobal;
    }
    if (typeof oopsGlobal != "undefined") {
        output += " oopsGlobal: " + oopsGlobal;
    }
    console.log(output);
}
fun1();
fun2();


function myLocalScope() {
    var myVar = 5;
    console.log(myVar);
}
myLocalScope();


var outerwear = "T-shirt";
function myOutfit() {
    var outerwear = "sweater";

    return outerWear;
}

console.log(myOutfit());
console.log(outerWear);


function minusSeven(num) {
    return num - 7;
}

console.log(minusSeven(10));


var sum = 0;
function addThree() {
    sum = sum + 3;
}

function addFive() {
    sum += 5;
}

console.log(addThree);
console.log(addFive);


var changed = 0;

function change(num) {
    return (num + 5) / 3;
}

changed = change(15);


var processed = 0;

function processArg(num) {
    return (num + 3) / 5;
}

processed = processArg(7);


function nextInLine(arr, item) {
    arr.push(item);
    return arr.shift();
}

var testArr = [1, 2, 3, 4, 5];

console.log("Before: " + JSON.stringify(testArr));
console.log(nextInLine(testArr, 6));
console.log("After: " + JSON.stringify(testArr));