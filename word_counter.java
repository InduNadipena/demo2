import java.util.*;
public class WordCounter {
    public static void main(String[] args) {
        String text = "Java makes programming interesting";
        Map<String, Integer> counts = new HashMap<>();
        for (String word : text.toLowerCase().split(" ")) {
            counts.put(word, counts.getOrDefault(word, 0) + 1);
        }
        System.out.println(counts);
    }
}