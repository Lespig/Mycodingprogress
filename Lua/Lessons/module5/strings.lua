quote = "I changed my password to incorrect. So that when I forget it, it always reminds me, Your password is incorrect."

io.write("Quote Length ", string.len(quote), "\n") -- or #quote

io.write("Replace I with me: ", string.gsub(quote, "I", "me"), "\n")

io.write("Index of password: ", string.find(quote, "password"), "\n")

io.write("Quote Upper: ", string.upper(quote), "\n")
io.write("Quote Lower: ", string.lower(quote), "\n")