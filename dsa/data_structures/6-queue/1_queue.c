/* a queue is defined as a linear data structure
that is open at both ends and the operations are
performed in First In First Out (FIFO) order.
A Queue is like a line waiting to purchase tickets,
where the first person in line is the first person served (FIFO).
We define a queue to be a list in which all additions to the
list are made at one end, and all deletions from the list are
made at the other end.  The element which is first pushed
into the order, the operation is first performed on that. */

/*

bir queue tıpkı stackler gibi 2 şekilde implement edilebilir
	1) array
	2) linked list

Front: the index where the first element is stored in the array representing the queue.
Rear: the index where the last element is stored in an array representing the queue.
*/

/* queue tipleri

	1) input Restricted Queue: This is a simple queue.
	In this type of queue, the input can be taken from only
	one end but deletion can be done from any of the ends.

	2) Output Restricted Queue: This is also a simple queue.
	In this type of queue, the input can be taken from both
	ends but deletion can be done from only one end.

	3) Circular Queue: This is a special type of queue where the
	last position is connected back to the first position.
	Here also the operations are performed in FIFO order.

	4) Double-Ended Queue (Dequeue): In a double-ended queue the
	insertion and deletion operations, both can be performed from both ends.

	5) Priority Queue: A priority queue is a special queue where the
	elements are accessed based on the priority assigned to them. */
