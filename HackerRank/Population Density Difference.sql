-- https://www.hackerrank.com/challenges/population-density-difference/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT (MAX(population) - MIN(population))
FROM city;