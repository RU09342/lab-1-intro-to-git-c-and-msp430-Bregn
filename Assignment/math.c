#include <math.h>
#include <stdio.h>
//all the following functions require their specific Operator (+,-,*,/,%) and two integers to correctly call the function
//Adds two integers together prints back their sum
int add(num1, num2, Operator) {
	int sum = 0;
	sum = num1 + num2;
	return sum;
}
//subtracts two integers prints back the difference
int sub(num1, num2, Operator) {
	int difference = 0;
	difference = num1 - num2;
	return difference;
}
//multiplies together two integers prints back product
int mul(num1, num2, Operator) {
	int product = 0;
	product = num1*num2;
	return product;
}
//divides two integers prints back answer
int divide(num1, num2, Operator) {
	int division - 0;
	division = num1 / num2;
	return division;
}
//divides two integers prints back remainder of answer
int modulus(num1, num2, Operator) {
	int result = 0; //remainder was a reserved word and didnt want to use that
	result = num1%num2;
	return result;
}
