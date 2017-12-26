#include<iostream>
using namespace std;
bool isSortedArray(int a[] ,int n){
        if(n == 1)
            return true;
        else
            return (a[n - 1] < a[n-2] ? false: isSortedArray(a,n-1));
}

int maxArray(int a[],int n){//find max of the array
    int max = a[n-1];
    if(n == 1)
       return max;
    else
{
    cout<<"n:"<<n<<endl;
    max = (max > a[n-2]) ? max: maxArray(a,n-1);
}
}

int TriangularNumber(int n){

    if(n == 1)
        return 1;
        return TriangularNumber(n-1) + n;

}

int fac(int n){
    int sum = n;
    cout<<"sum:"<<sum<<endl;
    if(n == 1)
        return 1;
    else{
        cout<<"sum recursive:"<<sum<<endl;
        sum *= fac(n-1);
    }
}

void PrintArray(int arr[],int n){
    if(n > 0){
        cout<<arr[n]<<" ";
        PrintArray(arr,n-1);
    }
}

//count the digits of a number
int NumberOfDigit(int n){
    int digit = 1;
    if(n  == 0)
        return 0;
    return digit + NumberOfDigit(n/10);
}

//string ReverseString(string input,int start = 0,int end = input.length() -1 ){
//
//    if(start < end){
//        input[start] = input[end];
//        return ReverseString(input,start ++, end--);
//    }
//    return input;
//
//}

int DicemalToBinary(int n){
    if(n == 1)
        return 1;
    return DicemalToBinary(n / 2 )*10 + n %2;

}

int PowerOfNumber(int x,int y){
    if(y == 1)
        return x;
    return (x * PowerOfNumber(x,y-1));
}

bool isPrime(int n){
    bool flag = !(n % (n-1)== 0);
        if(n == 1)
            return flag;
        return isPrime( n -1);
}



int main(){
int a[5] = {5,6,2,1,32};

 //   cout<<maxArray(a,5);
   // cout<<endl<<fac(5);
  // cout<<NumberOfDigit(255);
  //cout<<ReverseString("TAI",0,2);
  //cout<<PowerOfNumber(3,4);
 // cout<<isPrime(7);
 cout<<DicemalToBinary(255);
    return 0;

}




//triangular Numbers
//int main(){
//    int t = 1;
////    for(int i =2 ; i< 5; i++){
////        t += i;
////    }
////    cout<<t;
////    cout<<TriangularNumber(5);
//        int arr[5] = {1,2,3,4,5};
//      //  PrintArray(arr,5);
//
//    return 0;
//}
