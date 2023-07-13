-- https://www.hackerrank.com/challenges/the-blunder/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT CONVERT(
        int,
        ROUND(
            AVG(CAST(Salary AS numeric)) - AVG(CONVERT(int, REPLACE(Salary, 0, ''))),
            0,
            0
        )
    )
FROM EMPLOYEES;