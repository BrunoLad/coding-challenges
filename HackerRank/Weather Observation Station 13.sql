-- https://www.hackerrank.com/challenges/weather-observation-station-13/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT CONVERT(NUMERIC(18, 4), ROUND(SUM(lat_n), 4))
FROM Station
WHERE lat_n BETWEEN 38.7800 AND 137.2345;