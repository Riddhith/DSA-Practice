# Write your MySQL query statement below
select empuni.unique_id,emp.name
from EmployeeUNI as empuni
right join Employees as emp
on empuni.id=emp.id;