# Write your MySQL query statement below
select e.name, b.bonus 
from
employee as e
LEFT JOIN
Bonus as b
on e.empId=b.empId
where b.bonus<1000 or Bonus is null;