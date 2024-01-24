import org.w3c.dom.Node;

class linked_list_2 {
	Node_DLL head;
	Node_DLL tail;

	public linked_list_2() {
		this.head = null;
		this.tail = null;
	}

	public void append_back(int data) {
		Node_DLL new_node = new Node_DLL(data);
		if (head == null) {
			head = new_node;
			tail = new_node;
			return;
		} else {
			tail.next = new_node;
			new_node.prev = tail;
			tail = new_node;
		}
	}

	public void delete(int data_to_delete) {
		Node_DLL current = head;

		while (current != null) {
			if (current.data == data_to_delete) {
				if (current.prev != null) {
					current.prev.next = current.next;
				} else {
					head = current.next;
				}
				if (current.next != null)
					current.next.prev = current.prev;
				else
					tail = current.prev;

				break;
			}
			current = current.next;
		}
	}

	    // Method to print the elements of the list
    public void display() {
        Node_DLL current = head;

        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }

        System.out.println();
    }

	public static void main(String[] args) {
		linked_list_2 dll = new linked_list_2();

		// Inserting elements
		dll.append_back(1);
		dll.append_back(2);
		dll.append_back(3);

		System.out.println("Doubly Linked List:");
		dll.display(); // Output: 1 2 3

		// Deleting an element
		dll.delete(2);

		System.out.println("After deleting 2:");
		dll.display(); // Output: 1 3
	}
}
