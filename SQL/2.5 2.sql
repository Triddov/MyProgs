CREATE TABLE buy_pay(
    title VARCHAR(50),
    author VARCHAR(30),
    price DECIMAl(8,2),
    amount INT,
    Стоимость DECIMAl(8,2)
);

INSERT INTO buy_pay(title, author, price, amount, Стоимость)
SELECT title, name_author, price, buy_book.amount, price*buy_book.amount
FROM author INNER JOIN book USING(author_id)
    INNER JOIN buy_book USING(book_id)
    WHERE buy_book.buy_id = 5
    ORDER BY title;

SELECT * FROM buy_pay;