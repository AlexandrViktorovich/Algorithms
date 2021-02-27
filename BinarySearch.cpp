///////////////////////////////////////////////////////////
///////////////WORKED ONLY WITH SORTED ARRAY///////////////
#include <iostream>
using namespace std;
int BinarySearch(int arr[],int left,int right,int key){
	int mid = 0;
	while(1){
		mid=(left+right)/2;
		if(key<arr[mid]){
			right=mid-1;
		} else if(key>arr[mid]){
		left=mid+1;
		} else{
			return mid;
		}													
	}
}
int main(){
	const int SIZE=12;
	int array[SIZE]={};
	int key=0;
	int index=0;
	cout<<"|";
	for(int i=0;i<SIZE;i++){
		array[i]=i+1;
		cout<<array[i]<<"|";
	}
	cout<<endl;
	cout<<"Enter num:";
	cout<<endl;
	cin>>key;
	index=BinarySearch(array,0,SIZE,key);
	if(index>=0){
		cout<<"Num "<<key<<" in pos "<<index;
	}else{
		cout<<"Key error, this key not in array."<<endl;
	}
	return 0;
}
///////////////////////////////////////////////////////////















