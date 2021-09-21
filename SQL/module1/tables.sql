CREATE TABLE test (
    number INT,
    words VARCHAR(20),
    words2 VARCHAR(20),
    PRIMARY KEY(number)
);

DESCRIBE test;

ALTER TABLE test ADD floatpoint DECIMAL(3, 2);

ALTER TABLE test DROP COLUMN floatpoint;