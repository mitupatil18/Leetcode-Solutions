# Write your MySQL query statement below
select stu.student_id ,stu.student_name, sub.subject_name, count(e.student_id) as attended_exams
from students as stu
cross join subjects as sub
left join
examinations as e
on 
stu.student_id = e.student_id and sub.subject_name = e.subject_name
GROUP BY
1,2,3
order by
1,3;
