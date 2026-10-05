import java.util.Scanner;

public class FirstNonRepeatingCharacter {

    public static int firstNonRepeatingCharacter(String s) {
        int[] frequency = new int[65536];

        // Count frequency of each character
        for (int i = 0; i < s.length(); i++) {
            frequency[s.charAt(i)]++;
        }

        // Find the first character with frequency 1
        for (int i = 0; i < s.length(); i++) {
            if (frequency[s.charAt(i)] == 1) {
                return i;
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String s = sc.nextLine();

        int index = firstNonRepeatingCharacter(s);

        if (index == -1) {
            System.out.println("No non-repeating character found.");
        } else {
            System.out.println("First non-repeating character: " + s.charAt(index));
        }

        sc.close();
    }
}
