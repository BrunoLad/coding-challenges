-- https://www.hackerrank.com/challenges/draw-the-triangle-2/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
-- Declaring variable to be repeated
DECLARE @num int;
-- Initializing the variable
SET @num = 1;
WHILE (@num < 21) BEGIN;
SELECT TOP 1 RTRIM(REPLICATE('* ', @num))
FROM information_schema.tables;
SET @num = @num + 1;
END;