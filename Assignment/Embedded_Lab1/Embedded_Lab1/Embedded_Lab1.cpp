// Embedded_Lab1.cpp
//Lab 1- Bryan Regn 
// Created 9/6/17 Last updated 9/12/17
#include "stdafx.h"
#include <stdio.h>
#include <math.h>
//main file used to check user inputs and call different mathmatical operations
int main()
{
	char Operator;
	int num1, num2;
	printf("Welcome to a simple Calculator. You can perform addition (+), subtraction (-), multiplication (*), and division (/) between two integers.");

	do { //prompts user to choose a mathmatical operation
		printf("To begin enter a character representing a mathmatical operation (+,-,*,/): %c\n", Operator);
	}

	while (Operator != '+', '-', '*', '/'); //checks if character choosen is valid
		//UNSURE IF CORRECT SYNTAX ^^^^^^^^^^^^^^^^^

		printf("Choose first integer: %i\n", num1);
	printf("Choose second integer: %i\n", num2);
	switch (Operator) {
	case '+': add(num1, num2, Operator);
	case '-': sub(num1, num2, Operator);
	case '*': mul(num1, num2, Operator);
	case '/': divide(num1, num2, Operator);
	}
	return 0;

	//all the following functions require their specific Operator (+,-,*,/,%) and two integers to correctly call the function
	//Adds two integers together prints back their sum
	void add(num1, num2, Operator) {
		int sum = 0;
		sum = num1 + num2;
		printf(sum);
	}
	//subtracts two integers prints back the difference
	void sub(num1, num2, Operator) {
		int difference = 0;
		difference = num1 - num2;
		printf(difference);
	}
	//multiplies together two integers prints back product
	void mul(num1, num2, Operator) {
		int product = 0;
		product = num1*num2;
		printf(product);
	}
	//divides two integers prints back answer
	void divide(num1, num2, Operator) {
		int division - 0;
		division = num1 / num2;
		printf(division);
	}
	//divides two integers prints back remainder of answer
	void modulus(num1, num2, Operator) {
		int result = 0; //remainder was a reserved word and didnt want to use that
		result = num1%num2;
		printf(result);
	}
