SELECT 
    name,
    city,
    date_first,
    (DATEDIFF(date_last, date_first)+1)*per_diem AS Сумма
FROM trip
WHERE MONTHNAME(date_first) = 'february' OR  MONTHNAME(date_first) = 'march' 
ORDER BY name,Сумма DESC 
