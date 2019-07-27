void mx_printchar(char c);
void race00(int map_length, int map_width, int one_y, int one_x){
   if (map_length > one_y && map_width > one_x) {
        if(one_y <= map_length && one_x <= map_width)

	for (int i = 0; i <= map_length + 1; i++){
		for (int j = 0; j <= map_width + 1; j++){
		if (i == 0 || i  == map_length + 1){
	if (j == 0)
		mx_printchar('<');
	else if (j == 1 || j == j - 2 || j == map_width)
		mx_printchar('=');
	else if (j == map_width + 1)
		mx_printchar('>');
	else mx_printchar('-');
	}
	else if (j == 0 || j == map_width + 1){
		if (i % 2 == 0)
			mx_printchar('+');
		else mx_printchar('*');
	}
	else if (i == one_y + 1
			&& j == one_x + 1)
		mx_printchar('1');
		else mx_printchar('0');
	}
	mx_printchar('\n');
	}
}
	else;	
}