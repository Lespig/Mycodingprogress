io.write("5 + 3 = ", 5 + 3, "\n")
io.write("5 - 3 = ", 5 - 3, "\n")
io.write("5 * 3 = ", 5 * 3, "\n")
io.write("5 / 3 = ", 5 / 3, "\n")
io.write("5.2 % 3 = ", 5 % 3, "\n")

number = 3
number = number + 1

io.write("floor(2.345): ", math.floor(2.345), "\n")
io.write("ceil(2.345): ", math.ceil(2.345), "\n")
io.write("max(2, 3): ", math.max(2, 3), "\n")
io.write("min(2, 3): ", math.min(2, 3), "\n")
io.write("pow(8, 2): ", math.pow(8, 2), "\n")
io.write("sqrt(64): ", math.sqrt(64), "\n")

math.randomseed(os.time())

print(string.format("Pi = %.10f", math.pi))