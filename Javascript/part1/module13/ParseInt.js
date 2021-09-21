function convertToInteger(str) {
    return parseInt(str);
}

convertToInteger("56");

// With Radix
function convertToIntegerRadix(str) {
    return parseInt(str, 2);
}

convertToIntegerRadix("10011");