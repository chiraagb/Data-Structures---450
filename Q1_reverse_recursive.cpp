#include<iostream>
using namespace std;


void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
void reverseArray(int arr[],int start,int end){
        if(start>=end){
            return;
        }
        else{
            swap(arr[start],arr[end]);
            reverseArray(arr,start+1,end-1);
        }
    }
int main()
 {
	//code
	int t;
	cin>>t;

    
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for (int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int start=0;
	    int end = n-1;
	    reverseArray(a,start,end);
        for (int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    // the mistake was i didn't put endl so the output was wrong.
	    cout<<endl;
	}
	
	return 0;
}