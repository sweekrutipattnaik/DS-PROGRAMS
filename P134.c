//rename function in C

#include <stdio.h>

int main()
{
	char old_name[] = "cutm.txt";

	char new_name[] = "centurion.txt";
	int value;
	value = rename(old_name, new_name);
	if (!value) {
		printf("%s", "File name changed successfully");
	}
	else {
		perror("Error");
	}
	return 0;
}

