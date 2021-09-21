i = 1

while (i <= 10) do
    io.write(i)
    i = i + 1

    if i == 8 then
        break
    end
end
print("\n")

repeat
    io.write("Enter your guess : ")

    guess = io.read()

until tonumber(guess) == 15

for i = 1, 10, 1 do
    io.write(i)
end

months = {"January", "February", "March", "April", "May",
"June", "July", "August", "September", "October", "November",
"December"}

for key, value in pairs(months) do
    io.write(value, " ")
end