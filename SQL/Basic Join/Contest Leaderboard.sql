SELECT H.hacker_id, H.name, T.total_score
FROM 
    (SELECT hacker_id, SUM(max_score) AS total_score
        FROM
            (SELECT hacker_id, MAX(score) AS max_score FROM SUBMISSIONS
             GROUP BY hacker_id, challenge_id
            ) AS T1
        GROUP BY hacker_id
    ) AS T
JOIN HACKERS AS H
ON H.hacker_id = T.hacker_id
WHERE T.total_score > 0
ORDER BY total_score DESC, hacker_id;