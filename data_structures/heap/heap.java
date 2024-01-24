/*
 * a heap is a specialized tree-based data structure that satisfies the heap
 * property. There are two types of heaps: max-heap and min-heap. In a max-heap,
 * for any given node, the value of that node is greater than or equal to the
 * values of its children. In a min-heap, the value of each node is less than or
 * equal to the values of its children.
 *
 * In Java, the PriorityQueue class is often used to implement heaps.
 *

 *
 */

import java.util.Collections;
import java.util.PriorityQueue;

class heap {
	public static void main(String[] args) {
		PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
		PriorityQueue<Integer> minHeap = new PriorityQueue<>();

		maxHeap.add(5);
		minHeap.offer(10); // offer() == add()

		int minElement = minHeap.remove();
		int maxElement = maxHeap.poll();

		int maxPriority = maxHeap.peek();
		int minPriority = minHeap.peek();

		int sizeOfMaxHeap = maxHeap.size();
		int sizeOfMinHeap = minHeap.size();

	}
}
