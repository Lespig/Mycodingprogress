var a = "dog"
var b = "cat"
var c = "bird"

a = "My " + a

var d = ["dog", "cat", "bird"]

print(d[0])
print(d[1])
print(d[2])

a = "My " + d[0]
b = "My " + d[1]
c = "My " + d[2]

for counter in 0...2 {
    print("My " + d[counter])
}

for item in d {
    print("My " + item)
}

var e = [String]()

d += ["mouse", "owl"]
// d.remove(at: 0)
d[0] = "turtle"

d.count
