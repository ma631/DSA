#include<iostream>
using namespace std;

//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//}

//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n-i;j++){
//			cout<<" ";
//		}
//		for(int j=n-i+1;j<=n;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//}

//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//			for(int j=1;j<i;j++){
//			cout<<" ";
//		}
//		for(int j=i;j<=n;j++){
//			cout<<"*";
//		}
//	
//		cout<<endl;
//	}
//}

//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<n-i+1;j++){
//			cout<<" ";
//		}
//		for(int j=n-i+1;j<=n;j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//}

//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n+1;i++){
//		for(int j=1;j<n-i+1;j++){
//			cout<<" ";
//		}
//		for(int j=n-i+1;j<=n;j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//	for(int i=1;i<=n;i++){
//			for(int j=1;j<i;j++){
//			cout<<" ";
//		}
//		for(int j=i;j<=n;j++){
//			cout<<"* ";
//		}
//	
//		
//		cout<<endl;
//	}
//}

//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			if(i==j || j==n-i+1){
//				cout<<i;
//			}
//			else{
//				cout<<" ";
//			}
//		}
//		cout<<endl;
//	}
//} 

//int main(){
//	int n;
//	cin>>n;
//	char g=65+n-1;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<2*n;j++){
//			if(i==j || j==2*n-i){
//				cout<<g;
//				
//			}
//			else{
//				cout<<" ";
//			}
//		}
//		g--;
//		cout<<endl;
//	}
//}
//
//int main()
//{
//    cout<<"Enter the row size:";
//    int row_size;
//    cin>>row_size;
//    int in,out;
//   int print_control_x=row_size/2+1,x=1;
//
//     for(out=1;out<=row_size;out++)
//       {
//           for(in=1;in<=row_size;in++)
//           {
//               if(in==print_control_x || in==row_size-print_control_x+1)
//               {
//               cout<<x;
//                 }
//               else
//               {
//                 cout<<" ";
//               }
//             }
//           if(out<=row_size/2){
//        	   print_control_x--;
//               x++;
//               }
//           else{
//              print_control_x++;
//              x--;
//           }
//            cout<<"\n";
//     }
//}


int main()
{
	int n;
	cin>>n;
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=n;j++){
  		if(i==j ){
  			cout<<i;
		  }
		if(j==n-i+1){
			cout<<j;
		}
		else{
			cout<<" ";
		}
	  }
	  cout<<endl;
  }
}
