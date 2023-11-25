import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int[] arr = new int[30];
		for(int i = 0; i<30; i++) {
			arr[i] = i+1;
		}
		
		int[] arr2 = new int[28];
		
		for(int i = 0; i<28;i++) {
			arr2[i] = scanner.nextInt();
		}
		
		for(int i = 0; i<30; i++) {
			int a = 0;
			for(int j = 0; j< 28; j++) {
				if(arr[i] == arr2[j]) {
					a = 1;
				}
			}
			if(a == 0) {
				System.out.println(arr[i]);
			}
		}
		
		scanner.close();
	}

}
