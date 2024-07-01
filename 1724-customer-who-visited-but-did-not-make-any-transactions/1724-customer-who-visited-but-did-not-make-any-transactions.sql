# Write your MySQL query statement below
select v.customer_id, count(customer_id) as count_no_trans
from 
Visits as v
left join transactions t
on v.visit_id=t.visit_id
where 
t.transaction_id is NULL
group by
v.customer_id;


