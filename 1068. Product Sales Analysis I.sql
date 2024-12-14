# Write your MySQL query statement below
select p.product_name,s.year,s.price from Product P inner join Sales S on p.product_id = s.product_id
