UPDATE fine
SET sum_fine = IF(violation='Превышение скорости(от 20 до 40)', 500.00, 1000.00)
WHERE sum_fine IS NULL;

