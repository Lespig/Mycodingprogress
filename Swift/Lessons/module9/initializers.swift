import UIKit

var str = "Initializer Playground"

class Person {
    var name = ""
    var age = 0

    init() {

    }

    init(_ n:String, _ a:Int) {
        // Set up pyour object
        self.name = name
        self.age = age
    }
}

var a = Person("Chris", 33)
var b = Person()
b.name
b.age