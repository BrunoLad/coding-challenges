-- https://www.hackerrank.com/challenges/challenges/problem
/*
 Enter your query here.
 Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
 */
SELECT h.hacker_id,
    h.name,
    COUNT(c.challenge_id) AS c_count
FROM hackers AS h
    LEFT JOIN challenges AS c ON h.hacker_id = c.hacker_id
GROUP BY h.hacker_id,
    h.name
having
    /* output anyone with a count that is equal to... */
    c_count =
    /* the max count that anyone has */
    (
        SELECT MAX(temp1.cnt)
        from (
                SELECT COUNT(hacker_id) as cnt
                from Challenges
                group by hacker_id
                order by hacker_id
            ) temp1
    )
    /* or anyone who's count is in... */
    or c_count in
    /* the set of counts... */
    (
        select t.cnt
        from (
                select count(*) as cnt
                from challenges
                group by hacker_id
            ) t
            /* who's group of counts... */
        group by t.cnt
            /* has only one element */
        having count(t.cnt) = 1
    )
    /* finally, the order the rows should be output */
order by c_count DESC,
    c.hacker_id;