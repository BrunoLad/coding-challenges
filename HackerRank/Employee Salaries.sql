-- https://www.hackerrank.com/challenges/salary-of-employees/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT NAME
FROM EMPLOYEE
WHERE salary > 2000
    AND months < 10
ORDER BY employee_id;