SELECT * FROM student;

UPDATE student
SET major = "Bio"
WHERE major = "Biology";

UPDATE student
SET major = "Comp Sci"
WHERE major = "Computer Science";

UPDATE student
SET major = "Math"
WHERE student_id = 6;

UPDATE student
SET major = "Biochemistry"
WHERE major = "Bio" OR major = "Chemistry";

UPDATE student
SET name = "Tom", major = "undecided"
WHERE student_id = 8;

DELETE FROM student
WHERE student_id = 9;

DELETE FROM student
WHERE name = "Terrence" AND major = "Family Studies";