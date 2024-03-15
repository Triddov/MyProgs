UPDATE fine,
(   SELECT 
        name,
        number_plate,
        violation
    FROM fine
    GROUP BY number_plate, name, violation
    HAVING COUNT(number_plate)>=2 ) AS validation
SET fine.sum_fine = fine.sum_fine*2
WHERE fine.name = validation.name AND fine.date_payment IS NULL;

