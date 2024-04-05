SELECT * FROM applicant;

UPDATE applicant INNER JOIN (
    SELECT enrollee_id, IF(SUM(bonus) IS NULL, 0, SUM(bonus)) AS Бонус
    FROM achievement INNER JOIN enrollee_achievement USING(achievement_id)
        RIGHT JOIN enrollee USING(enrollee_id)
    GROUP BY enrollee_id
    ORDER BY enrollee_id) AS new_bonus USING(enrollee_id)
SET itog = itog + Бонус;

SELECT * FROM applicant;