#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter no. of values : ";
	cin>>n;
	int arr[n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"\n";
	
	//Checking if given array is sorted or not!
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]>arr[i+1]){
			flag=1;
			break;
			}
		}	
	}
	
	if (flag == 0){
		cout<<"~~~~~~~~~~~~\n\n";
		check="Sorted";
		cout<<"Given Array is Sorted \n\n";
	}
	
	else{
		check="UnSorted";
		cout<<"Given Array is UnSorted\n";
		cout<<"~~~~~~~~~~~~\n\n";
		
		cout<<check<<" Array :";
		
		for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}
		
		cout<<"\n\n";
		
		//Sorting loop
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				
				if(arr[j]< arr[i]){
					//swap
					int temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}
				
			}
		}
		
		cout<<"Sorted Array : ";
		
		for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
			}
		}
	cout<<"End of program here";
}
