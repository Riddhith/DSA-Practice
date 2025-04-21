# Write your MySQL query statement below
with temp1 as (
    select *
    from Activity
    where activity_type='start'
),
temp2 as (
    select *
    from Activity
    where activity_type='end'
),
temp3 as (
    select t1.machine_id,t1.process_id,t2.timestamp-t1.timestamp as 'p_time'
    from temp1 as t1
    join temp2 as t2
    on t1.machine_id=t2.machine_id and t1.process_id=t2.process_id
)
select machine_id, round(avg(p_time),3) as processing_time
from temp3
group by machine_id;