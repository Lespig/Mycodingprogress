// Declaring a new Dictionary
var carDB = [String:String]()

// Adding key value pairs
carDB["JSD 238"] = "Blue Ferrari"
carDB["SID 482"] = "Green Lamborghini"

// Retrieving data
carDB["JSD 238"]

// Update a value for a key
carDB["JSD 238"] = "Red Ferrari"

// Iterate over it
for (license, car) in carDB {
    print("\(car) has a license: \(license)")
}

// Remove a key-value pair
carDB["JSD 238"] = nil