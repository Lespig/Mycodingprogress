var str = "Playground"

let a = 1
let b = 1
let c = 3

if a == 4 {
    print("branch 1")
}

else if a < 8 {
    print("branch 2")
}

else if a < 10 {
    print("branch 3")
}

else if a < 15 && b < 4 {
    print ("branch 4")
}

else if a < 15 || b < 4 {
    print ("branch 5")
}

else if (a < 4 || b < 4) && c != 3 {
    print ("branch 6")
}

else {
    print("nothing was true")
}