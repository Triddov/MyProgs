SELECT distinct name, 
	name_color, 
	MAX(date_finish_digestion - date_start_digestion) AS maximum_digestion_time
FROM chameleon INNER JOIN digestion_of_food ON (chameleon.id = digestion_of_food.id_chameleon)
	INNER JOIN change_colors ON(chameleon.id = change_colors.id_chameleon)
	INNER JOIN dict_colors ON(change_colors.code_color = dict_colors.id)
	INNER JOIN dict_type_food ON(digestion_of_food.code_food = dict_type_food.id)
GROUP BY name, name_color
ORDER BY name, name_color;