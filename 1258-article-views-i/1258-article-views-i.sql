# Write your MySQL query statement below
select distinct(v1.author_id) as id from views  as v1
inner join 
views v2 
on v1.author_id=v2.author_id
where 
v1.author_id=v2.viewer_id
order by id;
