-- https://www.hackerrank.com/challenges/weather-observation-station-14/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT CONVERT(DECIMAL(18, 4), MAX(lat_n))
FROM Station
WHERE lat_n < 137.2345;