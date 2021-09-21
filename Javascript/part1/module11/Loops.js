var myArray = [];
var i = 0;
while (i < 5) {
    myArray.push(i);
    i++;
}

console.log(myArray);


var ourArray = [];
for (var i = 0; i < 5; i++) {
    ourArray.push(i);
}

console.log(ourArray);


var evenArray = [];
for (var i = 0; i < 10; i += 2) {
    evenArray.push(i);
}

console.log(evenArray);


var oddArray = [];
for (var i = 1; i < 10; i += 2) {
    oddArray.push(i);
}

console.log(oddArray);


var backEvenArray = [];
for (var i = 10; i > 0; i -= 2) {
    backEvenArray.push(i);
}

console.log(backEvenArray);


var backOddArray = [];
for (var i = 9; i > 0; i -= 2) {
    backOddArray.push(i);
}

console.log(backOddArray);


var iterArray = [9, 10, 11, 22];
var total = 0;
for (var i = 0; i < iterArray.length; i++) {
    total += iterArray[i];
}

console.log(total);


function multiplyAll(arr) {
    var product = 1;
    for (var i = 0; i < arr.length; i++) {
        for (var j = 0; j < arr[i].length; j++) {
            product *= arr[i][j];
        }
    }
    return product;
}

var product = multiplyAll([[1, 2], [3, 4], [5, 6, 7]]);
console.log(product);


var doWhile = [];
var d = 10;
do {
    myArray.push(i);
    d++;
} while (d < 5);

console.log(d, doWhile);


var contacts = [
    {
        "firstName": "Akira",
        "lastName": "Laine",
        "number": "0543236543",
        "likes": ["Pizza", "Coding", "Brownie Points"]
    },

    {
        "firstName": "Harry",
        "lastName": "Potter",
        "number": "0994372684",
        "likes": ["Hogwarts", "Magic", "Hagrid"]
    },

    {
        "firstName": "Sherlock",
        "lastName": "Holmes",
        "number": "0487345643",
        "likes": ["Intriguing Cases", "Violin"]
    },

    {
        "firstName": "Kristian",
        "lastName": "Vos",
        "number": "unknown",
        "likes": ["JavaScript", "Gaming", "Foxes"]
    }
];

function lookUpProfile(name, prop) {
    for (var i = 0; i < contacts.length; i++) {
        if(contacts[i].firstName === name) {
            return contacts[i][prop] || "Property does not exist";
        }
    }
    return "Contact does not exist";
}

var data = lookupProfile("Akira", "likes");
console.log(data);