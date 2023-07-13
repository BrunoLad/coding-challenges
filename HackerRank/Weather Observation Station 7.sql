-- https://www.hackerrank.com/challenges/weather-observation-station-7/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT CITY
FROM STATION
WHERE CITY LIKE '%[AEIOU]'
GROUP BY CITY;
-- SELECT DISTINCT CITY
-- FROM STATION
-- WHERE CITY LIKE '%[AEIOU]';