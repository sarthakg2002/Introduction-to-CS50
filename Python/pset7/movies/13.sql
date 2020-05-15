SELECT distinct(name) from people
JOIN stars ON stars.person_id = people.id
JOIN movies ON movies.id = stars.movie_id
WHERE title IN(SELECT distinct(movies.title) FROM people
JOIN stars ON people.id = stars.person_id
JOIN movies ON stars.movie_id = movies.id
WHERE people.name = "Kevin Bacon" AND people.birth = 1958) AND people.name != "Kevin Bacon";