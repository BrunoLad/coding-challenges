-- https://www.hackerrank.com/challenges/revising-aggregations-sum/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT SUM(POPULATION)
FROM city
WHERE district = 'California';