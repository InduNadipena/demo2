CREATE TABLE products (
    product_id INT PRIMARY KEY,
    product_name VARCHAR(100),
    quantity INT,
    price DECIMAL(10,2)
);

SELECT product_name, quantity
FROM products
WHERE quantity < 10
ORDER BY quantity;