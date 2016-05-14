#1 StringProcess library

This library contains some common functions used to process string

Acctually, the data structure is used in this library is char array.
I call it string for short

It includes:

	int strConcat(char*, int, ...): concat strings together. It can have variable argument list
		First argument: the result string
		Second argument: the number of string to be concatenated
		Return value: the length of result string
	
	int strToInt(char*): convert string to integer number
		Argument: the string to be converted
		Return value: corresponding integer value
	
	float strToFloat(char*): convert string to floating point number
		Argument: the string to be converted
		Return value: corresponding float value

	int intToStr(char*, int): convert integer number to string
		First argument: the result string
		Second argument: integer value to be converted
		Return value: the length of result string

	int floatToStr(char*, float): convert floating point number to string
		First argument: the result string
		Second argument: float value to be converted
		Return value: the length of result string