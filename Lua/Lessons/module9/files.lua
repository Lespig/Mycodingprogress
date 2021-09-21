-- Different ways to work with files
-- r: Read only (default)
-- w: Overwrite of create a new file
-- a: Append or create a new file
-- r+: Read & write existing file
-- w+: Overwrite read or create a file
-- a+: Append read or create file

file = io.open("test.lua", "w+")

file:write("print('Test Successful')")

file:seek("set", 0)

print(file:read("*a"))

file:close()

file = io.open("text.txt", "a+")

file:write("Random String of text\n")
file:write("Some more text\n")
file:write("Even more text\n")

file:seek("set", 0)

print(file:read("*a"))

file:close()