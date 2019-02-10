#include<iostream>
using namespace std;

//function to do swamping
int swap(int arr[],int low,int high,int pivot){
    while(low !=high){
        if(low !=high){
        	if(arr[low]>pivot){
        		int a = arr[low];
        		arr[low] = arr[high-1];
        		arr[high-1] = a;
        		high--;
        		
        	}
        	else {
        	    low++;
        	}
        }
    }
    return high;
    if (arr[low] == pivot && arr[high] == pivot && low==high){
            return high;
    }
    if(low>high){
        return 0;
    }
}	
void partition(int arr[],int p,int low,int high){
	int b = arr[p];
	arr[p] = arr[high];
	arr[high] = b;
}
void QS(int arr[],int low,int high){
    int pivot = arr[high];
    int p = swap(arr,low,high,pivot);
    if (low>=high){
        return;
    }
    else{
    	partition(arr,p,low,high);
    	//QS(arr,low,p-1);
    	QS(arr,p+1,high);
    }
}
	
int display(int arr[]){
	for(int i = 0;i<6;i++){
		cout<<arr[i]<<endl;
	}
}
int main(){
	int p;
	 int arr[]={6,5,4,3,2,1};
	 QS(arr,0,5);
	 display(arr);
	 
}	

