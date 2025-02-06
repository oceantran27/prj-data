Create table If Not Exists Product (product_id int, product_name varchar(30))
Create table If Not Exists Sales (product_id varchar(30), period_start date, period_end date, average_daily_sales int)
Truncate table Product
insert into Product (product_id, product_name) values ('1', 'LC Phone ')
insert into Product (product_id, product_name) values ('2', 'LC T-Shirt')
insert into Product (product_id, product_name) values ('3', 'LC Keychain')
Truncate table Sales
insert into Sales (product_id, period_start, period_end, average_daily_sales) values ('1', '2019-01-25', '2019-02-28', '100')
insert into Sales (product_id, period_start, period_end, average_daily_sales) values ('2', '2018-12-01', '2020-01-01', '10')
insert into Sales (product_id, period_start, period_end, average_daily_sales) values ('3', '2019-12-01', '2020-01-31', '1')
