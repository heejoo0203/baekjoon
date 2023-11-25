import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		float sum = 0;
		float count = 0;;
		for(int i =0; i<20;i++) {
			String sub = sc.next();
			float a = sc.nextFloat();
			String grade = sc.next();
			switch(grade) {
			case "A+":sum += a*(4.5);count += a;break;
			case "A0":sum += a*(4.0);count += a;break;
			case "B+":sum += a*(3.5);count += a;break;
			case "B0":sum += a*(3.0);count += a;break;
			case "C+":sum += a*(2.5);count += a;break;
			case "C0":sum += a*(2.0);count += a;break;
			case "D+":sum += a*(1.5);count += a;break;
			case "D0":sum += a*(1.0);count += a;break;
			case "F": count += a;;break;
			default: break;
			}
		}
		if(count == 0) count ++;
		System.out.print(sum/count);
		
		sc.close();

	}

}