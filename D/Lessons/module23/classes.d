import std.stdio;

void main() {
    class Animal {
        string name;
        double height;
        double weight;
        string sound;

        static int numOfAnimals;

        this (string name, double height, double weight, string sound) {
            this.name = name;
            this.height = height;
            this.weight = weight;
            this.sound = sound;
            numOfAnimals++;
        }

        void makeSound() {
            writeln(this.name, " says ", this.sound);
        }

        void getInfo() {
            writefln("%s is %.2f inches %s lbs and says %s", this.name, this.height, this.weight, this.sound);
        }

        static void getNumOfAnimals() {
            writeln("Num of Animals : ", numOfAnimals);
        }
    }

    // Inheritance
    class Dog : Animal {
        string owner;

        this(string name, double height, double weight, string sound, string owner) {
            super(name, height, weight, sound);
            this.owner = owner;
        }

        override void getInfo() {
            super.getInfo();
            writefln("%s's owner is %s", this.name, this.owner);
        }
    }

    Animal jake = new Animal("Jake", 35, 140, "Woof");
    jake.getInfo();
    Dog paul = new Dog("Paul", 20, 85, "Grrr", "Robert Hansen");
    paul.getInfo();

    // Polymorphism
    Animal john = new Dog("John", 20, 95, "Bark", "Larry Eyler");
    john.getInfo();
    john.getNumOfAnimals();

    // Interfaces
    interface Drivable {
        void move();
        void stop();
    }

    class Vehicle : Drivable {
        void move(){}
        void stop(){}
    }

    // Abstract Classes
    class Flyable {
        abstract void fly() {
            writeln("I'm flying");
        }

        abstract void crash();
    }
}