/*
Write a solution to find all customers who never order anything.

Return the result table in any order.
*/

SELECT Customers.name as "Customers"
FROM Customers
LEFT JOIN Orders ON Customers.id = Orders.customerId
WHERE Orders.customerId IS NULL;
