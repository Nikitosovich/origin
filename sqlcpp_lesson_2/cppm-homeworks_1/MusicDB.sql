CREATE TABLE IF NOT EXISTS genre
(
	id_genre serial PRIMARY KEY,
	name_genre varchar(60) NOT NULL
);
CREATE TABLE IF NOT EXISTS executor
(
	id_executor serial PRIMARY KEY,
	name_executor varchar(60) NOT NULL
);
CREATE TABLE IF NOT EXISTS genre_executor
(
	id_genre int REFERENCES genre(id_genre),
	id_executor int REFERENCES executor(id_executor),
	CONSTRAINT genre_excutor_pkey PRIMARY KEY (id_genre, id_executor)
);
CREATE TABLE IF NOT EXISTS album
(
	id_album serial PRIMARY KEY,
	name_album text NOT NULL,
	year_of_release int NOT NULL
);
CREATE TABLE IF NOT EXISTS executor_album
(
	id_executor int REFERENCES executor(id_executor),
	id_album int REFERENCES album(id_album),
	CONSTRAINT executor_album_pkey PRIMARY KEY (id_executor, id_album)
);
CREATE TABLE IF NOT EXISTS track
(
	id_track serial PRIMARY KEY,
	name_track text NOT NULL,
    duration_track int NOT NULL,
	id_album int REFERENCES album(id_album)
);
CREATE TABLE IF NOT EXISTS collection
(
	id_collection serial PRIMARY KEY,
	name_collection text NOT NULL,
    year_of_release int NOT NULL
);
CREATE TABLE IF NOT EXISTS track_collection
(
	id_track int REFERENCES track(id_track),
	id_collection int REFERENCES collection(id_collection),
	CONSTRAINT track_collection_pkey PRIMARY KEY (id_track, id_collection)
);
