create table employee (
  employee_id int primary key identity(1,1),
  first_name varchar(255),
  salary money,
  last_name varchar(255),
  email varchar(255),
  phone_number varchar(10),
  hire_date date,
  job_id int,
  commission_pct decimal(2,2),
  manager_id int,
  department_id int
);

--1
select * from employee

--2
select concat(first_name,' ',last_name) as full_name, salary
from employee

--3
select * from employee
where salary > 5000

--4
select * from employee
where first_name like 'A%'

--5
select e.*, d.name
from employee e
join department d on d.department_id = e.department_id;

--6
select department_id, count(*) as amount_of_employee
from employee
group by department_id;

--7
select department_id, count(*) as amount_of_employee
from employee
group by department_id
having count(*) > 10;

--8
insert into employee (first_name, salary, last_name, email, phone_number, hire_date, job_id, commission_pct, manager_id, department_id)
values
  ('Van', 70000.00, 'Tran', 'kingchenobama711@gmail.com', '0933131464', '2024-01-22', 1, 0.05, 1, 1);

--9
update employee
set salary=salary*1.1;

--10
delete employee
where employee_id = 10