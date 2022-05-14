import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Practice1_1 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("세 정수의 최대값을 구합니다.");
        System.out.print("a의 값 : ");
        int a = Integer.parseInt(br.readLine());
        System.out.print("b의 값 : ");
        int b = Integer.parseInt(br.readLine());
        System.out.print("c의 값 : ");
        int c = Integer.parseInt(br.readLine());

        // set max
        int max = a;
        if(b > max) max = b;
        if(c > max) max = c;

        System.out.println("최대값은 " + max + "입니다.");

    }
}
