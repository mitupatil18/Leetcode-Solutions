# Write your MySQL query statement below
delete p1 from Person p,
person p1
where
 p1.id > p.id
and p.email=p1.email;