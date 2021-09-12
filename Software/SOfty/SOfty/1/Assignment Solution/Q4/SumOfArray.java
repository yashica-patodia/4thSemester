class SumOfArray{
   public static void main(String args[]){
      int[] array = {10, 20, 30, 40, 50, 10};
      int sum = 0;
      //Advanced for loop
      for( int num : array) {
          sum = sum+(num*num);
      }
      System.out.println("Sum of square of array elements is:"+sum);
   }
}