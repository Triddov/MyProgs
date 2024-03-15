SELECT
    author,
    title,
    amount
FROM book
WHERE amount IN (
    SELECT 
        amount
    FROM book
    HAVING COUNT(amount)=1
    GROUP BY amount
)