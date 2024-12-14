#include<stdio.h>
int main(){
	int str[1000];
	printf("Hay nhap chuoi bat ki: ");
	fgets(str,1000,stdin);

	int length=strlen(str);
	int countCharactertext=0;
	int countNumbertext=0;
	int countSpecialCharacters=0;
	
	for(int i=0; i<length; i++){
		if(isalpha(str[i])){
			countCharactertext++;
		}else if(isdigit(str[i])){
			countNumbertext++;
		}else{
			countSpecialCharacters++;
		}
}	
	
	printf("so chu cai co trong chuoi la:%d\n",countCharactertext);
	printf("so chu so co trong chuoi la:%d\n",countNumbertext);
	printf("so ki tu dac biet co trong chuoi la:%d",countSpecialCharacters);
	
	return 0;
		
}
	
