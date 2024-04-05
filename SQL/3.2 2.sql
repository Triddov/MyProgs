CREATE TABLE random_questions AS
SELECT q.question_id, q.name_question, a.attempt_id
FROM question q
LEFT JOIN subject s ON s.subject_id = q.subject_id
LEFT JOIN attempt a ON a.subject_id = s.subject_id
WHERE s.subject_id = '2' AND a.attempt_id = (SELECT MAX(attempt_id) FROM attempt)
ORDER BY RAND()
LIMIT 3;

INSERT INTO testing (testing_id, attempt_id, question_id, answer_id)
SELECT t.testing_id, r.attempt_id, r.question_id, NULL
FROM random_questions r
LEFT JOIN testing t ON t.attempt_id = r.attempt_id;

SELECT * FROM testing;