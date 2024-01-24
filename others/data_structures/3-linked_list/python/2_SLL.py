# operations with singly linked lists in python


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


# operations conventionally defined under LinkedList
class SLL:
    def __init__(self):
        self.head = None

    def add_back(self, new_data):
        new_node = Node(new_data)

        # if list is empty, just make it head and break
        if not self.head:
            self.head = new_node
            return

        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = new_node

    def add_front(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def add_after(self, prev_node, new_data):
        new_node = Node(new_data)
        new_node.next = prev_node.next
        prev_node.next = new_node

    def delete_node(self, data):
        current_node = self.head
        if not current_node:
            pass

        if current_node.data == data:
            self.head = current_node.next
            current_node = None
            return

        while current_node:
            if current_node.data == data:
                break
            prev_node = current_node
            current_node = current_node.next

    def size(self):
        counter = 0
        current_node = self.head
        while current_node:
            counter += 1
            current_node = current_node.next
        return counter

    def search(self, seek):
        current_node = self.head
        pos = 0
        while current_node:
            if current_node.data == seek.data:
                print(f"found at index {pos}.")
                return
            current_node = current_node.next
            pos += 1
        print(f"CANNOT FIND.")

    def print_list(self):
        current = self.head
        if not current:
            print("list is yet empty")
            return
        else:
            while current:
                print(current.data, end=" -> ")
                current = current.next
            print("NULL")


denemeList = SLL()

denemeList.add_back(1)
denemeList.add_back(2)
denemeList.add_back(3)
denemeList.add_back(4)
denemeList.add_back(5)

curr = denemeList.head
curr = curr.next
curr = curr.next  # cur is now 3
denemeList.add_after(curr, 100)  # 3'ten sonra 100 ekledi

denemeList.add_front(6)
