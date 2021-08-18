-- Consider the following problem:

-- Two tables are provided: Students and Notes.
-- Students contains three columns: ID, Name and Value.
-- The table Notes contains three Integers columns: Grade, Min_Value and Max_Value

-- Joana gives Eva the task of generating a report containing three columns: Name, Grade and Value.
-- Joana does not want the names of students who received a grade lower than 8.
-- The report must be in descending order by grade, that is, the highest Notes are inserted first.
-- If there are more than one student with the same grade (8-10) assigned to them, sort those students in particular by their names in alphabetical order.
-- Finally, if the grade is less than 8, use "NULL" as the name and list them in Notes in descending order.
-- If there are more than one student with the same grade (1-7) assigned to them, sort those students in particular by their Notes in ascending order.

-- Write an SQL query to help Eva.


-- SQL query:

-- DROP TABLE IF EXISTS Students, Notes;

-- CREATE TABLE Students (
--   ID INTEGER NOT NULL PRIMARY KEY,
--   Name VARCHAR(50) NOT NULL,
--   Value INTEGER 
-- );

-- CREATE TABLE Notes (
--   Grade INTEGER NOT NULL PRIMARY KEY,
--   Min_Value INTEGER,
--   Max_Value INTEGER 
-- );

-- INSERT INTO Notes VALUES(1, 0, 9);
-- INSERT INTO Notes VALUES(2, 10, 19);
-- INSERT INTO Notes VALUES(3, 20, 29);
-- INSERT INTO Notes VALUES(4, 30, 39);
-- INSERT INTO Notes VALUES(5, 40, 49);
-- INSERT INTO Notes VALUES(6, 50, 59);
-- INSERT INTO Notes VALUES(7, 60, 69);
-- INSERT INTO Notes VALUES(8, 70, 79);
-- INSERT INTO Notes VALUES(9, 80, 89);
-- INSERT INTO Notes VALUES(10, 90, 100);

-- INSERT INTO Students VALUES(1, 'Julia', 81);
-- INSERT INTO Students VALUES(2, 'Carol', 68);
-- INSERT INTO Students VALUES(3, 'Maria', 99);
-- INSERT INTO Students VALUES(4, 'Andreia', 78);
-- INSERT INTO Students VALUES(5, 'Jaqueline', 63);
-- INSERT INTO Students VALUES(6, 'Marcela', 88);

SELECT (CASE WHEN n.Grade < 8 THEN 'NULL' ELSE s.Name END), n.Grade, s.Value
FROM Students AS s
JOIN Notes AS n
ON s.Value BETWEEN n.Min_Value AND n.Max_Value
ORDER BY n.Grade DESC, s.Name ASC, s.Value ASC;
