UPDATE fine
SET fine.date_payment = (
    SELECT
        date_payment
    FROM payment
    WHERE (fine.name, fine.number_plate, fine.violation, fine.date_violation)
    =(payment.name, payment.number_plate, payment.violation, payment.date_violation)
),
    fine.sum_fine = IF((DATEDIFF(fine.date_payment, fine.date_violation)) <= 20, sum_fine/2, sum_fine)
WHERE fine.date_payment IS NULL;

SELECT * FROM fine;

