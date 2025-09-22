// Java: garbage collection
public class GCDemo {
    static class Node {
        int value;
        Node next;
        Node(int v) { value = v; }
    }

    public static void main(String[] args) {
        Node head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(3);

        head = null; // list becomes unreachable (eligible for GC)
        System.gc(); // hint, not a guarantee

        System.out.println("List is no longer referenced; GC will reclaim it when it runs.");
    }
}
