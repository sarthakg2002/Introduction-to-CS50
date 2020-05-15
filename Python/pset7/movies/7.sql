SELECT title, rating FROM movies
JOIN ratings ON id = movie_id
WHERE year = 2010 order by rating desc, title;