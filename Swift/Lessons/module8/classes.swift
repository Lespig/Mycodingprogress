var str = "Class Playground"

class BlogPost {
    var title = ""
    var body = ""
    var author = ""
    var numberOfComments = 0

    func addComment() {
        numberOfComments += 1
    }
}

let myPost = BlogPost()
myPost.title = "Hello, Playground"
myPost.author = "Bob Hardy"
myPost.body = "Hello"
myPost.addComment()
print(myPost.numberOfComments)

let mySecondPost = BlogPost()
mySecondPost.title = "Goodbye, Playground" 
mySecondPost.author = "Tom Morris" 
mySecondPost.body = "Goodbye"
print(myPost.numberOfComments)

print(myPost.title)
print(myPost.author)
print(myPost.body)


// Inheritance
class Car {
    var topSpeed = 200

    func drive() {
        print("Driving at \(topSpeed)")
    }

    func reaction() {
        print("A car.")
    }
}

class Supercar : Car {

    func accelerate() {
        print("Accelerating to \(topSpeed + 50)")
    }

    override func reaction() {
        super.reaction()
        print("Wow, what a nice car!")
    }
}

class Wreckedcar : Car {
    var speed = 100

    override func drive() {
        print("Can only drive at \(speed)")
    }

    override func reaction() {
        print("Oh no! A broken car!")
    }
}

let myRide = Car()
myRide.topSpeed
myRide.drive()
myRide.reaction()

let myNewRide = Supercar()
myNewRide.topSpeed
myNewRide.drive()
myNewRide.accelerate()
myNewRide.reaction()

let myRuinedRide = Wreckedcar()
myRuinedRide.drive()
myRuinedRide.reaction()