# Write your MySQL query statement below
select max(num) as num from (Select distinct num from MyNumbers group by num having count(num)=1) AS unique_numbers;;