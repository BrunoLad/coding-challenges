-- https://www.hackerrank.com/challenges/weather-observation-station-5/problem
/*
 Enter your query here.
 */
Select City,
    MIN(LENGTH(City))
from Station
group by city
Order By Length(City),
    City asc
limit 1;
Select City,
    MIN(LENGTH(City))
from Station
group by city
Order By Length(City) desc,
    City desc
limit 1;