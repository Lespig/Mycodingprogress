SELECT name, major FROM student
ORDER BY name;

SELECT name FROM student
ORDER BY name DESC;

SELECT * FROM student
ORDER BY major, student_id;

SELECT * FROM student
ORDER BY student_id DESC
LIMIT 5;

SELECT * FROM student
WHERE student_id <= 3 AND name <> "Jack";

SELECT * FROM student
WHERE name IN ("Claire", "Kate", "Mike");

SELECT * FROM student
WHERE major IN ("English", "Biology") AND gpa >= 3.0;