/* node structure for SLL
 class Node {
	int data;
	Node next;

	public Node(int data) {
		this.data = data;
		this.next = null;
	}
} */

class linked_list_1 {

	Node_SLL head;

	// default constructor
	public void LinkedList() {
		this.head = null;
	}

	public void append_back(int data) {
		Node_SLL new_node = new Node_SLL(data);
		if (head == null) {
			head = new_node;
			return;
		} else {
			Node_SLL current = head;
			while (current.next != null) {
				current = current.next;
			}
			current.next = new_node;
		}
	}

	public void print_list() {
		Node_SLL current = head;
		while (current != null) {
			System.out.print(current.data + "->");
			current = current.next;
		}
		System.err.println();
	}

	public static void main(String[] args) {
		linked_list_1 linked_list = new linked_list_1();
		linked_list.append_back(10);
		linked_list.append_back(20);
		linked_list.append_back(30);
		linked_list.append_back(40);

		linked_list.print_list();
	}

}
