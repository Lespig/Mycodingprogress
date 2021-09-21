function printManyTimes(str) {
    "use strict";
    const SENTENCE = str + "is cool!";
    // sentence = str + "is amazing!"; cannot be used as variable SENTENCE is a constant
    for(let i = 0; i < str.length; i += 2) {
        console.log(SENTENCE);
    }
}

printManyTimes("freeCodeCamp");


// Mutate an array with 'const'
const s = [5, 7, 2];
function editInPlace() {
    "use strict";
    //s = [2, 5, 7];
    s[0] = 2;
    s[1] = 5;
    s[2] = 7;
}
editInPlace();
console.log(s);


// Prevent object mutation
function freezeObj() {
    "use strict";
    const MATH_CONSTANTS = {
        PI: 3.14
    };

    Object.freeze(MATH_CONSTANTS);

    try {
        MATH_CONSTANTS.PI = 99;
    }

    catch ( ex ) {
        console.log(ex);
    }

    return MATH_CONSTANTS.PI;
}

const PI = freezeObj();

console.log(PI);