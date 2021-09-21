CREATE TABLE animals (
    animal_id INT,
    name VARCHAR(20),
    species VARCHAR(20),
    PRIMARY KEY(animal_id)
);

SELECT * FROM animals;

INSERT INTO animals VALUES(1, "Max", "Dog");
INSERT INTO animals VALUES(2, "Chloe", "Cat");
INSERT INTO animals VALUES(3, "Harry", "Hamster");
INSERT INTO animals VALUES(4, "Polly", "Parrot");
INSERT INTO animals VALUES(5, "Sally", "Snake");
INSERT INTO animals(animal_id, name) VALUES (6, "Spot");