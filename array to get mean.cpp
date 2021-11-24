
// 137533 Kelvin Lemanta

//  Getting mean of an array whose elements are input by the user

#include <iostream>
using namespace std;

int main(){
	int n, i;
	float nums[100], sum=0, mean;
	cout << "Enter size of array: ";
	cin >> n;
	
	for( i=0; i<n; ++i){
		cout << i + 1 << "Input values of the array declared as ten: 10, 20, 30, 40...100";
		cin >> nums[i];
		sum += nums[i];
	}
	mean=sum/n;
	cout<< "The mean of the array is: " <<mean;
	
	return 0;
}

