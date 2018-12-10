/*Table Name:
    1. HACKERS
    2. DIFFICULTY
    3. CHALLENGES
    4. SUBMISSIONS   
*/
    
SELECT H.hacker_id, H.name FROM SUBMISSIONS AS S
INNER JOIN CHALLENGES AS C ON S.challenge_id = C.challenge_id
INNER JOIN DIFFICULTY AS D ON C.difficulty_level = D.difficulty_level
INNER JOIN HACKERS AS H ON S.hacker_id = H.hacker_id
WHERE S.score = D.score 
GROUP BY H.hacker_id, H.name
HAVING COUNT(S.hacker_id) > 1
ORDER BY COUNT(S.hacker_id) DESC, H.hacker_id;