package Linkedlist;

public class Main {

  public static void main(String[] args) {
    linkedlist list = new linkedlist();
    list.insertLast(7);
    // list.insertFirst(5);
    list.insert(2, 1);
    list.insert(5, 2);
    list.insert(6, 1);
    list.display();
  }
}
