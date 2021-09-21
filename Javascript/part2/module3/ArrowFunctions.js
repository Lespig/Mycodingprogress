const magic = () => new Date();


const myConcat = (arr1, arr2) => arr1.concat(arr2);
console.log(myConcat([1, 2], [3, 4, 5]));


const realNumberArray = [4, -5.6, -9.8, 3.14, 42, 6, 8.34, -2];
const squaredList = (arr) => {
    const squaredIntegers = arr.filter(num => Number.isInteger(num) && num > 0).map(x => x * x);
    return squaredIntegers;
};

const squaredIntegers = squaredList(realNumberArray);
console.log(squaredIntegers);


const increment = (function() {
    return function increment(number, value = 1) {
        return number + value;
    };
})();

console.log(increment(5, 2));
console.log(increment(5));