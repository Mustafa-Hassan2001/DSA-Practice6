#include <iostream>
#include <math.h>

using namespace std;

int FindUnique(int arr[], int size){
	int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}


bool linersearch(int arr[], int size, int num){
	int check = 0;
	for(int i=0; i<size; i++){
		if(num==arr[i]){
			check++;
		}
	}
	if(check==1){
		return true;
	}
	return false;
}

void printarr(int arr[], int size){
	for(int i=0; i<=size; i++){
		cout<<arr[i]<<endl;
	}
}

int arrMax(int arr[], int size){
	int Max = INT_MIN; 
	for(int i=0; i<size; i++){
	Max = max(Max, arr[i]);		//single line function to check maximum in array
//		if(arr[i]>max){
//			max = arr[i];
//		}
	}
	return Max;
}

int arrMin(int arr[], int size){
	int Min = INT_MAX; 
	for(int i=0; i<size; i++){
		Min = min(Min, arr[i]);
//		if(arr[i]<min){
//			min = arr[i];
//		}
	}
	return Min;
}
int main(){
//	  We can initialize the array with any value by using the fill_n command
//	  void fill_n(iterator begin, int n, type value);
//    fill_n(array, till filled(size), number(value) );
//    is k zariyah say hum ek single value ko poray array may store karva sak tay hn 
//	int arr[100] = {-24};
//	fill_n(arr,101,-24);
//	for(int i=0; i<=100; i++){
//		cout<<i<<" "<<arr[i]<<endl;
//	} 
//	
//	int number[15];
//	cout<<"the value at 0 index "<<number[0]<<endl;
//	cout<<"the value at 1 index "<<number[1]<<endl;
//	cout<<"the value at 14 index "<<number[14]<<endl;
//	cout<<"the value at 39 index "<<number[39]<<endl;

//	int arr[3] = {5,4,11};
//	cout<<arr[0]<<endl;
//	cout<<arr[1]<<endl;
//	cout<<arr[2]<<endl;
//	cout<<arr[3]<<endl;
		
//	int tow[14] = {2, 8};
//	for(int i=0; i<=13; i++){
//		cout<<tow[i]<<endl;
//	}	
	
//	int fourth[10] = {0};
//	for(int i=0; i<=9; i++){
//		cout<<fourth[i]<<endl;
//	}

//	int fourth[10] = {0};
//	for(int i=1; i<=10; i++){
//		cout<<i<<" "<<fourth[i]<<endl;
//	}
	
//	char arr[7] = {'M', 'U', 'S', 'T', 'A', 'F', 'A'};
//	
//	//cout<<arr[3]<<endl;
//	for(int i=0; i<=6; i++){
//		cout<<arr[i]<<endl;
//	}
//	cout<<"Hello world!";


//	int size;
//	cin>>size;
//	
//	int arr[100];
//	
//	for(int i=0;i<size;i++){
//		cin>>arr[i];
//	}
////	cout<<"MAX: "<<arrMax(arr, size)<<endl;
////	cout<<"MIN: "<<arrMin(arr, size)<<endl;
////	
//	int sum = 0;
//	for(int i=0; i<size ;i++){
//		sum += arr[i];
//	}
//	cout<<"SUM: "<<sum;
	
	
//	int size, num, arr[100];
//	cout<<"Enter size: "<<endl;
//	cin>>size;
//	cout<<"Enter Element: "<<endl;
//	for(int i=0; i<size; i++){
//		cin>>arr[i];
//	}
//	cout<<"BEFORE  REVERSE"<<endl;
//for(int i=0; i<size; i++){
//	cout<<arr[i]<<" ";
//}

//	cout<<"Which number you want to search: "<<endl;
//	cin>>num;
//	if(linersearch(arr, size, num)==true){
//		cout<<num<<" is present"<<endl;
//	}
//	else{
//		cout<<num<<" is not present"<<endl;
//	}
	
//int start = 0;
//int end  = size-1;
//
//while(start<end){
//	swap(arr[start], arr[end]);
//	start++;
//	end--;
//}	

//int start = 0;
//int end  = size-1;
//int temp;
//while(start<end){
//	temp = arr[start];
//	arr[start] = arr[end];
//	arr[end] = temp;
//	start++;
//	end--;
//}

int start = 0, i=0;
int end  = 1;
int temp;
//while(start<size){
//	if(start+1<size){
//	temp = arr[start];
//	arr[start] = arr[end];
//	arr[end] = temp;
//	}
//	start+=2;
//	end+=2;
//}

//for(int i=0; i<size; i+=2){
//	if(i+1<size){
//		swap(arr[i], arr[i+1]);
//	}
//}
//cout<<"\nAFTER REVERSE"<<endl;
//for(int i=0; i<size; i++){
//	cout<<arr[i]<<" ";
//}
//int mum = 0;
//for(int i=0; i<size; i++){
//	for(int j=1; j<size; j++){
//		if(arr[i]!=arr[j]){
//			mum = arr[i];
//		}
//	}
//}
//cout<<mum;

	int size, num, arr[100];
	cout<<"Enter size: "<<endl;
	cin>>size;
	cout<<"Enter Element: "<<endl;
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	cout<<"BEFORE  REVERSE"<<endl;
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}

	cout<<FindUnique(arr, size);


		
	
	
	
	return 0;
}
