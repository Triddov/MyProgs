SELECT 
    MIN(DISTINCT price) AS Минимальная_цена,
    MAX(DISTINCT price) AS Максимальная_цена,
    ROUND(AVG(DISTINCT price), 2) AS Средняя_цена 
    
FROM book
    