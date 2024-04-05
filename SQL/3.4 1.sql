CREATE TABLE applicant
    SELECT DISTINCT program.program_id, enrollee.enrollee_id, SUM(result) AS itog
    FROM program INNER JOIN program_subject USING(program_id)
        INNER JOIN enrollee_subject USING(subject_id)
        INNER JOIN enrollee USING(enrollee_id)
        INNER JOIN program_enrollee USING(program_id, enrollee_id)
    GROUP BY program.program_id, enrollee.enrollee_id
    ORDER BY program.program_id, itog DESC