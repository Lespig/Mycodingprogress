var ourArray = ["John", 23];
var myArray = ["Quincy", 1];
var nestedArray = [["the universe", 42], ["everything", 101010]];
var nestedArray2 = [["Bulls", 23], ["White Sox", 45]];

var array = [50, 60, 70];
var ourData = array[0];
console.log(ourData);

ourData = array[1];
console.log(ourData);

ourData = array[2];
console.log(ourData);

var modArray = [18, 64, 99];
modArray[1] - 45;
console.log(modArray);

var multiArray = [[1, 2, 3], [4, 5, 6], [7, 8, 9], [[10, 11, 12], 13, 14]];
var mdata = multiArray[2][1];
console.log(mdata);

//Array Manipulation
var mArray1 = ["Stimpson", "J", "cat"];
mArray1.push(["happy", "joy"]);
console.log(mArray1);

var mArray2 = [1, 2, 3];
var popped = mArray2.pop();
console.log(mArray2);
console.log(popped);

var mArray3 = [["john", 23], ["dog", 3]];
var shifted = mArray3.shift();
console.log(mArray3);
console.log(shifted);

var mArray4 = ["Stimpson", "J", "cat"];
mArray4.unshift(["happy", "joy"]);
console.log(mArray4);

//Shopping List
var myList = [["cereal", 3], ["milk", 2], ["bananas", 3], ["juice", 2], ["eggs", 12]];