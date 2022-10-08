#include<stdio.h>

int main(){
	// declaration of variables
	float height;
	float weight;
	float result, resulte;
	char name[]="unknowName";
	// interaction with the user to take in data
	printf("Please in put your name\n");
	scanf("%s", name);
	printf("Please in put the height\n");
	scanf("%f",&height);
	printf("Please in put the weight\n");
	scanf("%f",&weight);
	
	// Processing the data
	height *= height; 
	result = weight/height;
	
	
	// condition statements
	if(result >20 && result <= 25){
		// outputing the normale mass index
		printf("You have a normal weight Mr/Miss %s of %f kg\n",name,result);
	}else if(result < 20){
		// outputtinh the lose mass index
		resulte = 20- result;
		printf("Hello Mr/miss %s You have lose %f kg of Weight\n",name,resulte);
	}else if(result > 25 ){
		
		//outputing the gained mass index
		resulte= result - 25;
		printf(" Hello Mr/miss %s you have gain %f kg of weight\n",name,resulte);
	};
	// outputing the result
	printf("The body mass index is %f kg",result);
return 0;
};
