import {capitalizeString} from "./string_function";
const cap = capitalizeString("hello!");

console.log(cap);


const capitalizeMoreString = (string) => {
    return string.charAt(0).toUpperCase() + string.slice(1);
};

export {capitalizeMoreString};

export const foo = "bar";
export const bar = "foo";


import * as capitalizeStrings from "capitalize_strings";


export default function subtract(x, y) {return x - y;}