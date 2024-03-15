SELECT 
    name,
    number_plate,
    violation
FROM fine
GROUP BY number_plate, name, violation
HAVING COUNT(number_plate)>=2
