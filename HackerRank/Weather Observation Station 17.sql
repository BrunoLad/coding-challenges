-- https://www.hackerrank.com/challenges/weather-observation-station-17/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT TOP 1 CONVERT(DECIMAL(18, 4), long_w)
FROM Station
WHERE lat_n > 38.7780
ORDER BY lat_n;