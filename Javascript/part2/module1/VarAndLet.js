var catName = "Quincy";
var quote;

catName = "Kipper";

function catTalk() {
    "use strict";

    catName = "Oliver";
    quote = catName + " says Meow!";
}

catTalk();


let dogName = "Beau";
let quoted;

dogName = "Rover";

function dogTalk() {
    "use strict";

    dogName = "Rufus";
    quoted = dogName + " says Woof!";
}

dogTalk();


function checkScope() {
"use strict";
    var i = "function scope";
    if (true) {
        i = "block scope";
        console.log("Block scope i is: ", i);
    }
    console.log("Function scope i is: ", i);
    return i;
}

checkScope();


function letCheckScope() {
"use strict";
    let i = "function scope";
    if (true) {
       let i = "block scope";
        console.log("Block scope i is: ", i);
    }
    console.log("Function scope i is: ", i);
    return i;
}

letCheckScope();