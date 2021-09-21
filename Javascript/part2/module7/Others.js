// Create Strings using Template Literals
const person = {
    name: "Zodiac Hasbro",
    age: 56
};

const greeting = `Hello, my name is ${person.name}!
I am ${person.age} years old.`;

console.log(greeting);

const result = {
    success: ["max-length", "no-amd", "prefer-arrow-functions"],
    failure: ["no-var", "var-on-top", "linebreak"],
    skipped: ["id-blacklist", "no-dup-keys"]
};

function makeList(arr) {
    const resultDisplayArray = [];
    for (let i = 0; i < arr.length; i++) {
        resultDisplayArray.push(`<li class="text-warning">${arr[i]}</li>`);
    }
    return resultDisplayArray;
}

/**
 * makeList(result.failure) should return:
 * [`<li class="text-warniing">no-var</li>`,
 *  `<li class="text-warniing">var-on-top</li>`,
 *  `<li class="text-warniing">linebreak</li>`]
**/

const resultDisplayArray = makeList(result.failure);
console.log(resultDisplayArray);

// Write Concise Object Literal Declarations Using Simple Fields
const createPerson = (name, age, gender) => ({name, age, gender});
    /* return {
        name: name,
        age: age,
        gender: gender
    };
};  */
console.log(createPerson("Zodiac Hasbro", 56, "male"));

// Write Concise Declarative Functions with ES6
const bicycle = {
    gear: 2,
    setGear(newGear) {
        "use strict";
        this.gear = newGear;
    }
};

bicycle.setGear(3);
console.log(bicycle.gear);

// Use class Syntax to Define a Constructor Function
class SpaceShuttle {
    constructor(targetPlanet) {
        this.targetPlanet = targetPlanet;
    }
}

var zeus = new SpaceShuttle("Jupiter");
console.log(zeus.targetPlanet);


function makeClass() {
    class Vegetable {
        constructor(name) {
            this.name = name;
        }
    }
    return Vegetable;
}

const Vegetable = makeClass();
const carrot = new Vegetable("carrot");
console.log(carrot.name);

// Use getters and setters to Control Access to an Object
class Book {
    constructor(author) {
        this._author = author;
    }

    // getter
    get writer() {
        return this._author;
    }

    // setter
    set writer(updatedAuthor) {
        this._author = updatedAuthor;
    }
}

function makeClassAgain() {
    class Thermostat {
        constructor(temp) {
            this._temp = 5 / 9 * (temp - 32);
        }

        get temperature() {
            return this._temp;
        }

        set temperature(updatedTemp) {
            this._temp = updatedTemp;
        }
    }
    return Thermostat;
}

const Thermostat = makeClass();
const thermos = new Thermostat(76);
let temp = thermos.temperature;
thermos.temperature = 26;
temp = thermos.temperature;
console.log(temp);