#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){

	for(int j = 0; j < N-1; j++){
		cout << "Pass " << j+1 << ":";
		for(int i = j; i > -1; i-- ){
			if(d[i] < d[i+1]){
				T y = d[i+1];
				d[i] = y;
				d[i+1] = d[i];	
			}
		}
		for(int k = 0 ; k < N; k++){
			cout << d[k] << " ";
		}cout << "\n"; 
	}
}	


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
