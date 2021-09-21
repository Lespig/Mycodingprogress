function testElse(val) {
    var result = "";
    if (val > 5) {
        result = "Bigger than 5";
    }

    else {
        result = "5 or Smaller";
    }

    return result;
}

testElse(4);


function testElseIf(val) {
    if (val > 10) {
        result = "Greater than 10";
    }

    else if (val < 5) {
        result = "Smaller than 5";
    }

    else {
        return "Between 5 and 10";
    }
}

testElseIf(7);


function orderMyLogic(val) {
    if (val < 5) {
        return "Less than 5";
    }

    else if (val < 10) {
        return "Less than 10";
    }

    else {
        return "Greater than or equal to 10";
    }
}

console.log(orderMyLogic(3));


function testSize(num) {
    if (num < 5) {
        return "Tiny";
    }

    else if (num < 10) {
        return "Small";
    }

    else if (num < 15) {
        return "Medium";
    }

    else if (num < 20) {
        return "Large";
    }

    else {
        return "Huge";
    }
}

console.log(testSize(7));


var names = ["Hole-in-one!", "Eagle", "Birdie", "Par", "Bogey", "Double Bogey", "Go Home!"];
function golfScore(par, strokes) {
    if (strokes == 1) {
        return names[0];
    }

    else if (strokes <= par - 2) {
        return names[1];
    }

    else if (strokes == par - 1) {
        return names[2];
    }

    else if (strokes == par) {
        return names[3];
    }

    else if (strokes == par + 1) {
        return names[4];
    }

    else if (strokes == par + 2) {
        return names[5];
    }

    else {
        return names[6];
    }
}

console.log(golfScore(5, 4));


function caseInSwitch(val) {
    var answer = "";
    switch(val) {
        case 1:
            answer = "alpha";
            break;
        case 2:
            answer = "beta";
            break;
        case 3:
            answer = "gamma";
            break;
        case 4:
            answer = "delta";
    }
    return answer;
}

caseInSwitch(1);


function switchOfStuff(val) {
    var answer = ""
    switch (val) {
        case "a":
            answer = "apple";
            break;
        case "b":
            answer = "bird";
            break;
        case "c":
            answer = "cat";
            break;
        default:
            answer = "stuff";
            break;
    }

    return answer;
}

console.log(switchOfStuff("a"));


function sequentialSizes(val) {
    var answer = "";
    switch(val) {
        case 1:
        case 2:
        case 3:
            answer = "Low";
            break;
        case 4:
        case 5:
        case 6:
            answer = "Mid";
            break;
        case 7:
        case 8:
        case 9:
            answer = "High";
            break;
    }

    return answer;
}

console.log(sequentialSizes(1));


function chainToSwitch(val) {
    var answer = "";
    switch(val) {
        case "bob":
            answer = "Marley";
            break;
        case 42:
            answer = "The Answer";
            break;
        case 1:
            answer = "There is no #1";
            break;
        case 99:
            answer = "Missed me by that much!";
            break;
        case 7:
            answer = "Ate Nine";
            break;
    }

    /*
    if (val === "bob") {
        answer = "Marley";
    }

    else if (val === 42) {
        answer = "The Answer";
    }

    else if (val === 1) {
        answer = "There is no #1";
    }

    else if (val === 99) {
        answer = "Missed me by this much!";
    }

    else if (val === 7) {
        answer = "Ate Nine";
    }
    */

    return answer;
}

chainToSwitch(7);


var count = 0;

function cc(card) {
    switch(card) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            count++;
            break;
        case 10:
        case "J":
        case "Q":
        case "K":
        case "A":
            count--;
            break;
    }
    var holdbet = "Hold";
    if (count > 0) {
        holdbet = "Bet";
    }

    return count + " " + holdbet;
}

cc(2); cc("K"); cc(10); cc("K"); cc("A");
console.log(cc(4));


function checkEqual(a, b) {
    return a === b ? true : false;
}

checkEqual(1, 2);


function checkSign(num) {
    return num > 0 ? "positive" : num < 0 ? "negative" : "zero"
}

console.log(checkSign(10));