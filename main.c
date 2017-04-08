#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
struct digit_string{
	int digit;
	struct digit_string * next;
};

typedef struct digit_string digit_string;

void multiply_digit_strings(digit_string * a,digit_string * b){
}

void multiply_files(int a,int b){
}

int multiply(int a, int b){
	return a * b;
}

void print_digit_string(digit_string * _digit_string){
	digit_string * iterator = _digit_string;
	while(iterator != NULL){
		printf("%d", _digit_string->digit);
		iterator = iterator->next;
	}
}

//T1 = 10^(10^9)
void create_T1_digit_file(){
	FILE * a = fopen("T1", "w");
	char * buffer = (char *)malloc(sizeof(char));
	buffer[0] = '1';

	fwrite(buffer,1,1,a);

	buffer[0] = '0';
	int i;
	i = 0;
	while(i < 1000000000){
printf("%d\n", i);
		fwrite(buffer,1,1,a);
		i++;
	}
	free(buffer);
	fclose(a);
}

void create_2_digit_file(){
	FILE * a = fopen("2" , "w");
	char * buffer = (char *)malloc(sizeof(char));
	buffer[0] = '2';
	fwrite(buffer,1,1,a);
	free(buffer);
	fclose(a);
}

int get_file_length(char *filename) {
	struct stat * file_statistics = (struct stat *)malloc(sizeof(struct stat)); 

	int return_size = -1;
	if (stat(filename, file_statistics) == 0){
	        return_size = file_statistics->st_size;
	}

	free(file_statistics);

	return return_size;
}


int main(){
	//create_2_digit_file();
	//create_T1_digit_file();
	
	printf("filesize of T1:%d", get_file_length("T1"));

	
//	digit_string * two = (digit_string *)malloc(sizeof(digit_string));
//	two->digit = 2;
	

	return 0;
}
