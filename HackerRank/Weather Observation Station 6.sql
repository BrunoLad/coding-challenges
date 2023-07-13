-- https://www.hackerrank.com/challenges/weather-observation-station-6/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT CITY
FROM STATION
WHERE CITY LIKE '[AaEeIiOoUu]%'
GROUP BY CITY;