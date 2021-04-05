#include<iostream>
#include "value_ref.h"
using std::cout;

int main() 
{
	int num = 10;
	pass_by_const_ref(10);


	/*auto num = 5;
	cout<<"size of num in bytes: "<<sizeof(num)<<"\n";
	cout<<"The memory address of num is: "<<&num<<"\n";

	int& num_ref = num; //referncing an int and can only take addresses. created a clone of num
	cout<<"value of num_ref is: "<<num_ref<<"\n";
	num_ref = 10;
	cout<<"value of num_ref is: "<<num_ref<<"\n";
	cout<<"value of num is: "<<num<<"\n";

	num = 20;
	cout<<"value of num_ref is: "<<num_ref<<"\n";
	cout<<"value of num is: "<<num;

	return 0; */
}


