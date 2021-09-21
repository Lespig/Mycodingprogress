aTable = {}

for i = 1, 10 do
    aTable[i] = i
end

io.write("First: ", aTable[1], "\n")

io.write("Number of items: ", #aTable, "\n")

table.insert(aTable, 1, 0)

io.write("First: ", aTable[10], "\n")

print(table.concat(aTable, ", "))

table.remove(aTable, 1)
print(table.concat(aTable, ", "))

aMultiTable = {}

for i = 0, 9 do
    aMultiTable[i] = {}
    for j = 0, 9 do
        aMultiTable[i][j] = tostring(i) .. tostring(j)
    end
end

io.write("Table[0][0]: ", aMultiTable[1][2], "\n")

for i = 0, 9 do
    for j = 0, 9 do
        io.write(aMultiTable[i][j], " : ")
    end
    print()
end