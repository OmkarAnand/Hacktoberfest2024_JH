import java.util.Arrays;

// Function to find a triplet with a given sum in an array
public class GfG {
    static boolean find3Numbers(int[] arr, int sum)
    {
        int n = arr.length;

        // Fix the first element as arr[i]
        for (int i = 0; i < n - 2; i++) {

            // Fix the second element as arr[j]
            for (int j = i + 1; j < n - 1; j++) {

                // Now look for the third number
                for (int k = j + 1; k < n; k++) {

                    if (arr[i] + arr[j] + arr[k] == sum) {

                        // Triplet is found; print the
                        // triplet elements
                        System.out.println(
                            "Triplet is " + arr[i] + ", "
                            + arr[j] + ", " + arr[k]);
                        return true;
                    }
                }
            }
        }

        // If no triplet is found, return false
        return false;
    }

    // Driver program to test above function
    public static void main(String[] args)
    {
        int[] arr = { 1, 4, 45, 6, 10, 8 };
        int sum = 22;

        find3Numbers(arr, sum);
    }
}
