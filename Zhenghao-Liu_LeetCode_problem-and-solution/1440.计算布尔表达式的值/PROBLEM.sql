Create Table If Not Exists Variables (name varchar(3), value int)
Create Table If Not Exists Expressions (left_operand varchar(3), operator ENUM('>', '<', '='), right_operand varchar(3))
Truncate table Variables
insert into Variables (name, value) values ('x', '66')
insert into Variables (name, value) values ('y', '77')
Truncate table Expressions
insert into Expressions (left_operand, operator, right_operand) values ('x', '>', 'y')
insert into Expressions (left_operand, operator, right_operand) values ('x', '<', 'y')
insert into Expressions (left_operand, operator, right_operand) values ('x', '=', 'y')
insert into Expressions (left_operand, operator, right_operand) values ('y', '>', 'x')
insert into Expressions (left_operand, operator, right_operand) values ('y', '<', 'x')
insert into Expressions (left_operand, operator, right_operand) values ('x', '=', 'x')
