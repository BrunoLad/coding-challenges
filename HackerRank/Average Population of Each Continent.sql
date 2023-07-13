-- https://www.hackerrank.com/challenges/average-population-of-each-continent/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT c.continent,
    CONVERT(INT, AVG(ci.population))
FROM city AS ci
    INNER JOIN country AS c ON c.code = ci.countrycode
GROUP BY c.continent;