-- https://www.hackerrank.com/challenges/weather-observation-station-15/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT TOP 1 CONVERT(DECIMAL(18, 4), long_w)
FROM STATION
WHERE lat_n < 137.2345
ORDER BY lat_n DESC;