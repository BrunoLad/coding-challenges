-- https://www.hackerrank.com/challenges/weather-observation-station-18/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
--|c - a| + |d - b| = d
SELECT CONVERT(
        DECIMAL(18, 4),
        (
            ABS(MAX(lat_n) - MIN(lat_n)) + ABS(MAX(long_w) - MIN(long_w))
        )
    )
FROM Station;