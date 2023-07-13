-- https://www.hackerrank.com/challenges/weather-observation-station-4/problem
/*
 Enter your query here.
 */
SELECT COUNT(CITY) - COUNT(DISTINCT CITY)
FROM STATION;