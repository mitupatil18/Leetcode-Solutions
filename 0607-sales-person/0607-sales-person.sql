# Write your MySQL query statement below
SELECT s.name
from SalesPerson s
where sales_id not in
(
    select o.sales_id 
    from Orders o 
    JOIN
    Company c 
    ON o.com_id=c.com_id
    WHERE c.name="RED"
);