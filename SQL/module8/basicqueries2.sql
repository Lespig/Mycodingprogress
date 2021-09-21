SELECT * FROM employee
ORDER BY salary DESC;

SELECT * FROM employee
ORDER BY sex, first_name, last_name;

SELECT * FROM employee
LIMIT 5;

SELECT first_name AS forename, last_name AS surname FROM employee;

SELECT DISTINCT sex FROM employee;