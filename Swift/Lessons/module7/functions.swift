var str = "Function Playground"

var a:Int = 0
var b:Int = 0
var c:Int = 0

func addTwoNumbers() -> Int{
    a = 1
    b = 2
    c = a + b

    return c
}

func subtractTwoNumbers() -> Int {
    let d = 1
    let e = c - d
    let f = a - d

    return e
}

func multiplyTwoNumbers(arg para:Int, arg2 para2:Int) -> Int {
    let g = para
    let h = para2

    return g + h
}

func divideTwoNumbers(using number1:Int, and number2:Int) -> Int {
    return number1 / number2
}

var sum = addTwoNumbers()

var dif = subtractTwoNumbers()

var pro = multiplyTwoNumbers(arg: 2, arg2: 3)

var quo = divideTwoNumbers(using: 2, and: 4)

print(sum)
print(dif)
print(pro)
print(quo)