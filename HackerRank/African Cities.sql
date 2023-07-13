-- https://www.hackerrank.com/challenges/african-cities/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT ci.name
FROM City AS ci
    INNER JOIN Country AS c ON c.code = ci.countrycode
WHERE Continent = 'Africa';