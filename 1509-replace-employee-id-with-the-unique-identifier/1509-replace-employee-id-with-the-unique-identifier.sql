# Write your MySQL query statement below
select eu.unique_id, e.name from EmployeeUNI eu
right join
Employees as e
on 
e.id = eu.id; 

