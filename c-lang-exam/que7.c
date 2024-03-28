#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

FILE *input_file = fopen("input.txt","r");
if(input_file == NULL){

    printf("error");
    return 1;
}

FILE  *output_file = fopen("output.txt","w");
if(output_file == NULL)
{
    printf("error");
    return 1;
}

char sentence[100];
fgets(sentence,100,input_file);
for(int i=0;i<strlen(sentence);i++){
    sentence[i] = toupper(sentence[i]);
}

fputs(sentence,output_file);

fclose(input_file);
fclose(output_file);

    return 0;
}