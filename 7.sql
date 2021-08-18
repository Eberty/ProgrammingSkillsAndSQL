-- Information about pets is kept in two separate tables:

-- TABLE dogs
-- id INTEGER NOT NULL PRIMARY KEY,
-- name VARCHAR(50) NOT NULL

-- TABLE cats
-- id INTEGER NOT NULL PRIMARY KEY,
-- name VARCHAR(50) NOT NULL

-- Write an SQL query that select all distinct pet names.


-- SQL query:

-- DROP TABLE IF EXISTS dogs, cats;

-- CREATE TABLE dogs (
--   id INTEGER NOT NULL PRIMARY KEY,
--   name VARCHAR(50) NOT NULL
-- );

-- CREATE TABLE cats (
--   id INTEGER NOT NULL PRIMARY KEY,
--   name VARCHAR(50) NOT NULL
-- );

-- INSERT INTO dogs VALUES(1, 'Bob');
-- INSERT INTO dogs VALUES(2, 'Lucy');
-- INSERT INTO dogs VALUES(3, 'Max');
-- INSERT INTO dogs VALUES(4, 'Max');
-- INSERT INTO cats VALUES(1, 'Tom');
-- INSERT INTO cats VALUES(2, 'Lucy');
-- INSERT INTO cats VALUES(3, 'Kitty');

SELECT name FROM dogs UNION SELECT name FROM cats ORDER BY name ASC;
