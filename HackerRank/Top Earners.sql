-- https://www.hackerrank.com/challenges/earnings-of-employees/problem
SELECT TOP 1 MAX(months * salary),
    COUNT(EMPLOYEE_ID)
FROM Employee
GROUP BY months,
    salary
HAVING months * salary = MAX(months * salary)
ORDER BY months * salary DESC;
-- 2nd Submission
SELECT TOP 1 (months * salary) AS earning,
    COUNT(EMPLOYEE_ID)
FROM Employee
GROUP BY months,
    salary
ORDER BY earning DESC;