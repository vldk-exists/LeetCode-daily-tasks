/*
Find the names of the customer that are either:

    1. referred by any customer with id != 2.
    2. not referred by any customer.

Return the result table in any order.
*/

SELECT name
FROM Customer
WHERE referee_id is NULL or referee_id != 2;
