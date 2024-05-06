CREATE TABLE chameleon(
	id serial primary key,
	name varchar(25) NOT NULL,
	date_born timestamp NOT NULL,
	weight int
);

CREATE TABLE dict_type_food(
	id serial primary key,
	name_food varchar 
);

CREATE TABLE dict_colors(
	id serial primary key,
	name_color varchar
);

CREATE TABLE digestion_of_food(
	id serial primary key,
	id_chameleon int references chameleon(id) NOT NULL,
	code_food int references dict_type_food(id) NOT NULL,
	date_start_digestion timestamp NOT NULL,
	date_finish_digestion timestamp
);

CREATE TABLE change_colors(
	id serial primary key,
	id_chameleon int references chameleon(id) NOT NULL,
	code_color int references dict_colors(id) NOT NULL,
	date_change_color timestamp	
);

 INSERT INTO chameleon(name, date_born, weight) 
 VALUES ('Vasya', '2020-10-10 12:00:00', 25), 
    ('Petya', '2018-10-20 13:00:00', 30), 
    ('Kolya', '2010-05-05 14:00:00', 35);

 INSERT INTO dict_colors(name_color) 
 VALUES ('red'), 
    ('blue'), 
    ('green');

 INSERT INTO dict_type_food(name_food) 
 VALUES ('pelmeni'), 
    ('borsch'), 
    ('apple'), 
    ('watermelon');

 INSERT INTO change_colors(id_chameleon, code_color, date_change_color)
 VALUES (1, 1, '2020-10-12 11:11:11'),
    (2, 2, '2018-10-30 01:45:00'), 
    (3, 2, '2011-10-10 12:00:00'), 
    (1, 3, '2020-11-01 22:30:10');

 INSERT INTO digestion_of_food(id_chameleon, code_food, date_start_digestion, date_finish_digestion)
 VALUES (1, 1, '2020-10-20 00:00:00', '2020-10-21 01:01:02'),
 	(1, 2, '2020-10-22 14:59:00', '2020-10-26 00:10:00'),
 	(2, 2, '2019-01-01 20:10:00', '2019-01-05 13:10:50'),
 	(2, 2, '2019-01-07 23:11:00', '2019-01-12 10:30:00'),
 	(3, 3, '2015-12-15 02:10:59', '2016-02-01 00:00:01'),
 	(3, 3, '2016-10-10 23:59:59', '2016-12-01 00:00:00');
