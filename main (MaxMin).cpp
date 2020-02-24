#include <iostream>
using namespace std;

int main(){

	int min,max,value=0;

	cout<<"Please Enter the size of the array: "<<endl;

	cin>>value;

	cout<<"Please Enter elements: "<<endl;

	int arr[value];

	for(int i = 0; i < value; i++){

		cout<<"Value "<< i <<" : ";
		cin>>arr[i];
		cout<<endl;
	}
    	min = arr[0];
		max = arr[0];

	for(int j=0;j<value;j++){

		if(arr[j]>max){
			max= arr[j];
		}

		if(arr[j]<min){
			min=arr[j];
		}
	}

	cout<< "The minimum value is : "<<min<<endl;
	cout<<"The maximum value is : "<<max<<endl;


return 0;
}

