-- https://www.hackerrank.com/challenges/revising-aggregations-the-count-function/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT COUNT(id)
FROM city
WHERE population > 100000;