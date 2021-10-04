public class LargestNum{
   public int LargestNum (int [] arr){
        if (arr == null)
        return 0;
        int largest = arr[0];
        for (int i=1; i<arr.length; i++){
            if (largest<arr[i])
                largest = arr[i];
        }
        return largest;
    }
}