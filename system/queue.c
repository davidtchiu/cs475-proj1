/* queue.c - enqueue, dequeue, isempty, nonempty, et al. */

#include <xinu.h>
#include <stdlib.h>

/**
 * Prints out contents of a queue
 * @param q	pointer to a queue
 */
void printqueue(struct queue *q)
{
	// TODO - print all contents from head to tail

	// TODO - format should be [(pid), (pid), ...]
}

/**
 * Checks whether queue is empty
 * @param q	Pointer to a queue
 * @return TRUE if true, FALSE otherwise
 */
bool8 isempty(struct queue *q)
{
	// TODO
}

/**
 * Checks whether queue is nonempty
 * @param q	Pointer to a queue
 * @return TRUE if true, FALSE otherwise
 */
bool8 nonempty(struct queue *q)
{
	// TODO - don't just check q's size because q could be NULL
}

/**
 * Checks whether queue is full
 * @param q	Pointer to a queue
 * @return TRUE if true, FALSE otherwise
 */
bool8 isfull(struct queue *q)
{
	// TODO - check if there are at least NPROC processes in the queue
}

/**
 * Insert a process at the tail of a queue
 * @param pid	ID process to insert
 * @param q	Pointer to the queue to use
 *
 * @return pid on success, SYSERR otherwise
 */
pid32 enqueue(pid32 pid, struct queue *q)
{
	// TODO - check if queue is full and if pid is illegal, and return SYSERR if either is true

	// TODO - allocate space on heap for a new QEntry

	// TODO - initialize the new QEntry

	// TODO - insert into tail of queue

	// TODO - return the pid on success
}

/**
 * Remove and return the first process on a list
 * @param q	Pointer to the queue to use
 * @return pid of the process removed, or EMPTY if queue is empty
 */
pid32 dequeue(struct queue *q)
{
	// TODO - return EMPTY if queue is empty

	// TODO - get the head entry of the queue

	// TODO - unlink the head entry from the rest

	// TODO - free up the space on the heap

	// TODO - return the pid on success
}

/**
 * Finds a queue entry given pid
 * @param pid	a process ID
 * @param q	a pointer to a queue
 * @return pointer to the entry if found, NULL otherwise
 */
struct qentry *getbypid(pid32 pid, struct queue *q)
{
	// TODO - return NULL if queue is empty or if an illegal pid is given

	// TODO - find the qentry with the given pid

	// TODO - return a pointer to it
}

/**
 * Remove a process from the front of a queue (pid assumed valid with no check)
 * @param q	pointer to a queue
 * @return pid on success, EMPTY if queue is empty
 */
pid32 getfirst(struct queue *q)
{
	if (isempty(q))
	{
		return EMPTY;
	}

	return dequeue(q);
}

/**
 * Remove a process from the end of a queue (pid assumed valid with no check)
 * @param q	Pointer to the queue
 * @return pid on success, EMPTY otherwise
 */
pid32 getlast(struct queue *q)
{
	// TODO - return EMPTY if queue is empty
	if (isempty(q))
	{
		return EMPTY;
	}

	// TODO - remove process from tail of queue and return its pid
	return remove(q->tail->pid, q);
}

/**
 * Remove a process from an arbitrary point in a queue
 * @param pid	ID of process to remove
 * @param q	Pointer to the queue
 * @return pid on success, SYSERR if pid is not found
 */
pid32 remove(pid32 pid, struct queue *q)
{
	// TODO - return EMPTY if queue is empty

	// TODO - return SYSERR if pid is illegal

	// TODO - remove process identified by pid parameter from the queue and return its pid

	// TODO - if pid does not exist in the queue, return SYSERR
}
