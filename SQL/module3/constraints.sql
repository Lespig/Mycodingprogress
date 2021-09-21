CREATE TABLE student (
    student_id INT,
    name VARCHAR(20) NOT NULL,
    major VARCHAR(20) UNIQUE,
    PRIMARY KEY(student_id)
);

ALTER TABLE student ADD gpa DECIMAL(3, 2) DEFAULT "0.0";

SELECT * FROM student;

INSERT INTO student VALUES(1, "Jack", "Biology", 3.5);
INSERT INTO student VALUES(2, "Kate", "Sociology", 4.0);
INSERT INTO student VALUES(3, "Claire", "English", 3.2);
INSERT INTO student VALUES(4, "Bob", "Accounting", 3.0);
INSERT INTO student VALUES(5, "Mike", "Computer Science", 3.1);
INSERT INTO student(student_id, name) VALUES (6, "John");
INSERT INTO student VALUES(7, "Emily", "Physics", 2.9);
INSERT INTO student VALUES(8, "Micheal", "Fitness", 2.3);
INSERT INTO student(student_id, name) VALUES (9, "Ralph");
INSERT INTO student VALUES (10, "Terrence", "Family Studies", 3.5);