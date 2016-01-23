# Write your MySQL query statement below
select c.Name,b.Name,b.Salary 

from (
      select MAX(d.Salary) Salary, d.DepartmentId   //��ʱ�����к���ÿ�������ڹ�����ߵ���
      from Employee d, Department f
      where d.DepartmentId=f.Id                //���������������
      group by d.DepartmentId                  //��Employee��Department���з���
      ) a,    Employee b, Department c         //��Employee��Department����µ���ʱ��a,
      
where a.Salary=b.Salary                        
      and b.DepartmentId=c.Id 
      and b.DepartmentId=a.DepartmentId;      