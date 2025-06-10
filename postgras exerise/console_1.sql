CREATE EXTENSION IF NOT EXISTS "uuid-ossp";

SELECT uuid_generate_v1();
SELECT uuid_generate_v4();




CREATE TABLE contacts (
    contact_id  uuid,
    first_name  VARCHAR,
    last_name   VARCHAR,
    email       VARCHAR
);



INSERT INTO contacts (contact_id, first_name, last_name, email)
VALUES
    (uuid_generate_v1(), 'Kallu', 'Kaliya', 'kallu@gmail.com'),
    (uuid_generate_v1(), 'Chhagan', 'Magan', 'chhagan@gmail.com'),
    (uuid_generate_v1(), 'Chaman', 'Tillu', 'Chaman@gmail.com');


SELECT * FROM contacts;


CREATE EXTENSION hstore;


CREATE TABLE books (
	title 	VARCHAR (255),
	attr 	hstore
);




INSERT INTO books (title, attr)
VALUES
	('Database Tutorial', '"paperback" => "243",
						   "publisher" => "mysite.com",
						   "language"  => "English",
						   "ISBN"   	=> "1449370000",
						   "weight"    => "500 Grams"'
	),
	('Python Tutorial', '"paperback" => "244",
						 "publisher" => "mysite.com",
						 "language"  => "Hindi",
						 "ISBN"   	=> "5329373232",
						 "weight"    => "670 Grams"'
	)

SELECT * FROM books;


SELECT attr -> 'ISBN' AS isbn FROM books;


