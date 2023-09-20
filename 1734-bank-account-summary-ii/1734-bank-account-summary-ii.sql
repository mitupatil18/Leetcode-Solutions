# Write your MySQL query statement below
Select u.name, sum(amount) as balance
from Users u
JOIN Transactions t
ON u.account=t.account
group by u.account
having sum(amount)> 10000 ;