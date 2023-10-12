#include <iostream>
using namespace std;

bool isAllEven(int arr[], int size){
   bool even = true;
   for(int i = 0; i < size;i++){
      if(arr[i] % 2 != 0){
         even = false;
      }
   }
   return even;
}

bool isAllOdd(int arr[], int size){
   bool odd = true;
   for(int i = 0; i < size;i++){
      if(arr[i] % 2 == 0){
         odd = false;
      }
   }
   return odd;
}



int main(){
   int size = 10;
   int nums[size];
   for(int i = 0; i < size; i++){
      cin >> nums[i];
   }
   
   for(int i = 0; i < size; i++){
      cout << nums[i] << " ";
   }
   cout << endl;
   

   
   
   if(isAllEven(nums, size)){
      for(int i = 0; i < size; i++){
         cout << nums[i] << " " ;
      }
      
      
   }else if(isAllOdd(nums,size)){
      for(int i = 0; i < size; i++){
         cout << nums[i] << " " ;
      }
      
      
   }else{
      int indexEven = 0;
      int indexOdd = 0;
      int maxEven = -9999999;
      int maxOdd = -9999999;
      for(int i = 0; i < size; i++){
         if(nums[i] % 2 == 0){
            if(nums[i] > maxEven){
               maxEven = nums[i];
               indexEven = i;
            }
         }else if(nums[i] % 2 != 0){
            if(nums[i] > maxOdd){
               maxOdd = nums[i];
               indexOdd = i;
            }
         }else{
         }
      }
      int temp = nums[indexEven];
      nums[indexEven] = nums[indexOdd];
      nums[indexOdd] = temp;
      
      for(int i = 0; i < size; i++){
         cout << nums[i] << " " ;
      }
   }
   cout << endl;
   

   
   return 0;
}
