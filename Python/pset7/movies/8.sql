SELECT name from people
JOIN stars on people.id = stars.person_id
JOIN movies ON stars.movie_id = movies.id
where title = "Toy Story";
