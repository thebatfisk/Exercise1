# Reasons for concurrency and parallelism


To complete this exercise you will have to use git. Create one or several commits that adds answers to the following questions and push it to your groups repository to complete the task.

When answering the questions, remember to use all the resources at your disposal. Asking the internet isn't a form of "cheating", it's a way of learning.

 ### What is concurrency? What is parallelism? What's the difference?
 > Concurrency can be seen as a form of "virtual paralellism" where processes can be "paralell in the eyes of the programmer" (but the programmer have to think about the slingle core problems), but often runs on a single core.
Paralellism is when processes runs on different cores, and does not suffer from problems like one process crashes and the rest hangs.
 
 ### Why have machines become increasingly multicore in the past decade?
 > The machines becomes more effective, and you reduce risk of program faliures
 
 ### What kinds of problems motivates the need for concurrent execution?
 (Or phrased differently: What problems do concurrency help in solving?)
 > When two processes is doing the same things at the same time. It often makes the job of the programmer easier by partitioning the code
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > On many levels it can make the programmer's life easier by partitioning the code, but when working on shared variables and such, things can go wrong
 
 ### What are the differences between processes, threads, green threads, and coroutines?
 > Process: Managed by OS. Has its own address space. Thread: Managed by OS. Same address space as the parent. Green thread: Same as thread, but not managed by OS. Coroutine: Not managed by OS. Function that has multiple entry/exit points, so that it can run more smothly
 
 ### Which one of these do `pthread_create()` (C/POSIX), `threading.Thread()` (Python), `go` (Go) create?
 > It creates threads (or the equivalent) in different languages
 
 ### How does pythons Global Interpreter Lock (GIL) influence the way a python Thread behaves?
 > GIL prevent multiple threads from executing the same bytecode at once
 
 ### With this in mind: What is the workaround for the GIL (Hint: it's another module)?
 > You can use the multiprocessing package
 
 ### What does `func GOMAXPROCS(n int) int` change? 
 > GOMAXPROCS limits the number of operating system threads that can execute user-level Go code simultaneously
