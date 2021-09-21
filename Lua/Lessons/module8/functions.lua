function getSum(num1, num2)
    return num1 + num2
end

print(string.format("5 + 2 = %d", getSum(5, 2)))

function splitStr(theString)
    stringTable = {}

    local i = 1

    for str in string.gmatch(theString, "[^%s]+") do
        stringTable[i] = str
        i = i + 1
    end

    return stringTable, i
end

splitStrTable, numOfStr = splitStr("The Turtle")

for j = 1, numOfStr - 1 do
    print(string.format("%d : %s", j, splitStrTable[j]))
end

-- Variatic Functions
function getSum2(...)
    local sum = 0

    for k, v in pairs{...} do
        sum = sum + v
    end
    return sum
end

io.write("Sum ", getSum2(1, 2, 3, 4, 5, 6), "\n")

-- Closures
doublenum = function(x) return x * 2 end

print(doublenum(4))

function outerFunc()
    local i = 0

    return function()
        i = i + 1
        return i
    end
end
getI = outerFunc()

print(getI())
print(getI())

-- Coroutines
CO = coroutine.create(function()
    for i = 1, 10, 1 do
        print(i)
        print(coroutine.status(co))
        if i == 5 then coroutine.yield() end
    end
end)

print(coroutine.status(co))

coroutine.resume(co)

print(coroutine.status(co))

co2 = coroutine.create(function()
for i = 101, 110, 1 do
    print(i)
    end end)

coroutine.resume(co2)

coroutine.resume(co)

print(coroutine.status(co))