# Operating_Systems <br/>
<div>Chapter 1- Introduction and background
<br/>
Resource : 1. S/W -> Files,semaphores,monitors,etc. <br/>
           2. H/W:CPU,Monitors,I/O devices,etc <br/> 
1. What is Operating System?<br/>
Ans: Interface between User & Computer hardware.<br/>
user-> O.S-> hardware<br/>
C.U :- Timing/Control<br/>
         signals<br/>
            - Controls the operations <br/>
-     Von-Neumann Architecture:       Memory(p) <-> CPU(processor){Control unit, Arithmetic Logic Unit} -> Input <br/>
                                                           |
                                                         Output <br/>
-     Sequencing and execution of micro-operations: operations that are carried out on Data stored in the registers.<br/>
      int a,b,c;<br/>
      b=1;c=2;<br/>
      a=b+c;<br />
        |
      compiler  <br/>
        |
      Micro Instruction -> Micro Instructions -> Load R1,b,Load R2,c,ADD R1,R2,store a, R1<br/>
    ALU:- Arithmetic Logic Unit 
    <br />
    -> Consists of adders , subtractors ,etc
    -> Memory : data->Secondary Memory-> Primary Memory

    1. Primary (Main) -> RAM,ROM,cache, Registers -> Volatile(the content vanishes when the power supply is turned off) memory, faster to access,expensive, less size 

    2. Secondary -> Auxillary Memory -> Non-volatile(the content does not vanishes when the power supply is turned off) memory,slower to access,less expensive , more size 
<br/>
- CPU takes data from primary memory only<br>
- Secondary memory are part of input/ouutput devices
- Test.c -> Compiler -> executable file (.exe /.out) -> instructions in executable files -> O.S. -> Stored Program concept -> Program in Main memory - CPU <br/>
-  CPU can't execute the program directly from the hard disk. <br/>
- Test.c->Hard disk -> OS -> Main Memory -> CPU. Instructions of the program are executed sequentially one after another. Hard-disks and secondary memory is slow hence OS helps in loading data to main memory. 

<br/>

<b>Definition</b>:-An operating System is an interface betwwen a computer user and computer hardware. An operating system is a software that performs the basic tasks like file management, memory management, process management, handling input and output , and controlling peripheral devices such as disk drives and printers.

<br/>

Fundamentals Of Von - Neumann Architecture: <br/>
i. Stored Program Concept<br/>
ii. Sequential Execution Of Instructions <br />

- Any Program that has to be executed ,must be stored in main memory
- Control Program controls all the operattions of the computer
- Set of Utilities to simplify application development: Takes charge of Hardware, Create env./platform that help us to focus on development in High level mode. 
- OS works at the back of stage/ behind the scenes.

# Kernel
  - Kernel is the core part of an operating system , Kernel consists of several modules like Process Manager, Memory Manager, File Manager, Device Manager, Protection Manager.<br/>
    * Resource Manager:- Allocation , Deallocation,Management
    * Proccess Manager

  - Kernel is the core part of an operating system that interacts directly with the hardware, and provides low-level services to hgh-level components. Kernel provides the required abstraction to hide low-level hardware detailsto system or application programs.
  - Hurd, Linux are kernels of the GNU/hurd and GNU/linux Operating systems respectively.
# Operating Systems -> Functions
2. Function  and goals of Operating System?<br/>
Ans:- Foolwing are some important functions in an operating System:<br/>
          I. MEMORY MANAGEMENT <br/>
          II. PROCESSOR MANAGEMENT <br/>
          III. DEVICE MANAGEMENT <br/>
          IV. FILE MANAGEMENT <br />
          V. SECURITY <br />
          VI. CONTROL OVER SYSTEM'S PERFORMANCE <br/>
          VII. JOB ACCOUNTING <br/>
          VIII. PROCESSES MANAGEMENT <br/>
          IX. ERROR DETECTING AIDS <br/>
          X. COORDINATION BETWEEN THE OTHER SOFTWARES AND END USERS <br/>
Software -> System Software , Application software <br />

Software -> Licensed Software Model -> GNU licensed Softwares <br/>

Software can be classified into two types based on the availabilty of the code to the users:<br/>
 FOSS-> Free Open-source Softwares -> FOSS licensed Software , code is public <br/>
 Closed Source Softwares: Proprietary Code that may or may not be public or may be partially public to all the users. <br/> 
 Open-Sourced Softwares: Code is public to all. <br/>
 # OS -> Types
3.  Types of Operating System.<br/>
Ans:- <h3> End User->Application Softwares->Operating System->OS interface ->Command Interpeter-> Shell/GUI->Kernel-> Hardware</h3>
There are two types of operating systems:
      * MultiProgramming Operating System <br/>
      * Multiprocessor Operating System <br/>  
4. Multiprogrammed Operating System.<br/>
Ans:- 1st generation -> No OS <br/>
      2nd generation ->Magnetic Tapes (No O.S) <br/>
      3rd generation -> Magnetic disks [hard disk & floppy disk]
                        - Uniprogramming OS
                        - Multiprogramming OS
<br/>
uniprogramming: Ability of Operating System to hold a single program in memory.in uniprograamming operating system, there is less efficiency, less throughput,less CPU utilization as CPU becomes idle.
<br/>
One processor -> UNI proccessor <br/>
Mutli - multiple CPU <br/>
Throughput= No. of programs completed in a unit time.
<br/>
MICROSOFT-Disk Operating System -1990-uniprogrammed O.S <br/>
objective: Maximising CPU utilization <br/>
UNIX.....->Mordern Multiprogrammed Operating System-> CONCEPT
OF CPU MULTIPLEXING among different PROGRAMS<br/>

Program ~ Task <br/>

GNU/Linux operting System:

GNU/Linux is a free and open source operating System and is Gnu is not Unix which means the GNU/linux Operating system is a clone version of the UNIX operating system. This is open-source as the source code is freely available.This is free to use <br/>
Kernel->Hardware, shell is the superset of kernel, Applications , Compilers, a.out, date,grep,cd , vi, applications are on top of the shell.<br/>

The architecture of linux system consists of : <br/>
Hardware Layer: Hardware Layer consists of all peripheral devices(RAM/HDD/CPU etc). <br/>
Kernel: Core component of Operating System, interacting directly with hardware and provides low-level services to upper layer components.Kernel is responsible for all major activities of the operating system and contains various modules and interacts directly with the underlying hardware.<br/>
Shell: An interface to kernel ,hiding complexity of kernel's function from users. The shell takes commands from the user and executes the kernel's functions.<br/>
System Libraries: System libraries are special functions or programs with which application programs or system utilities access kernel's features. This libraries implement most of the functionalities of the operating system and do not require kernel modules' access rights.<br/>
System utilities: Utility programs that provide the user most of the functionalities of the operating system. System utility programs are specialised , individual level tasks.<br/>

5. Architectural Requirements for multiprogrammed Operating System.

    As the name suggests, Multiprogramming means more than one program can be active at the same time. Before the operating system concept, only one program was to be loaded at a time and run. These systems were not efficient as the CPU was not used efficiently. For example, in a single-tasking system, the CPU is not used if the current program waits for some input/output to finish. The idea of multiprogramming is to assign CPUs to other processes while the current process might not be finished. This has the below advantages.

1) The user gets the feeling that he/she can run multiple applications on a single CPU even if the CPU is running one process at a time.
2) CPU is utilized better

All modern operating systems like MS Windows, Linux, etc are multiprogramming operating systems.

Multiprogramming in Operating System
Features of Multiprogramming

    Need Single CPU for implementation.
    Context switch between process.
    Switching happens when current process undergoes waiting state.
    CPU idle time is reduced.
    High resource utilization.
    High Performance.

Disadvantages of Multiprogramming

    Prior knowledge of scheduling algorithms (An algorithm that decides which next process will get hold of the CPU) is required.
    If it has a large number of jobs, then long-term jobs will have to require a long wait.
    Memory management is needed in the operating system because all types of tasks are stored in the main memory.
    Using multiprogramming up to a larger extent can cause a heat-up issue.

Scheduling Algorithms are of two types:

    Preemptive Scheduling algorithm: In the preemptive scheduling algorithm if more than one process wants to enter into the critical section then it will be allowed and it can enter into the critical section without any interruption only if no other progress is in the critical section.
    Non-Preemptive scheduling algorithm: If a process gets a critical section then it will not leave the critical section until or unless it works gets done.

How do Multiprogramming Operating Systems Work?

In multiprogramming system, multiple programs are to be stored in memory and each program has to be given a specific portion of memory which is known as process. The operating system handles all these process and their states. Before the process undergoes execution, the operating system selects a ready process by checking which one process should udergo execution. When the chosen process undergoes CPU execution, it might be possible that in between process need any input/output operation at that time process goes out of main memory for I/O operation and temporarily stored in secondary storage and CPU switches to next ready process. And when the process which undergoes for I/O operation comes again after completing the work, then CPU switches to this process. This switching is happening so fast and repeatedly that creates an illusion of simultaneous execution.
Multiprogramming-in-OS

Working of Multi-Programming
Advantages of Multiprogramming

    Increase the resource utilisation of a computer system.
    Support multiple simultaneously interactive users (terminals).
    Keeps multiple runnable jobs loaded in memory .
    Increase the throughput of the system.
    The waiting time for a program is reduced.
    Improve system’s overall responsiveness.
    Improve the reliability and stability of the system.
    Make the system suitable for multitasking environments.

Difference Between Multiprogramming and Multi-tasking Operating Systems

Multiprogramming
	

Multi-tasking

Involves loading multiple programs into the computer’s memory and allowing them to share the CPU. The CPU switches between programs, especially when one is waiting for I/O operations to complete.
	

Refers to the ability of an operating system to execute multiple tasks (or processes) simultaneously by rapidly switching between them.

The main goal is to increase CPU utilization by reducing idle time.
	

The primary goal is to improve user responsiveness and allow for interactive computing

It does not involve direct user interaction.
	

Designed with user interaction, allowing users to run multiple applications (e.g., word processors, web browsers, etc.) simultaneously

Less complex than multitasking. It focuses on keeping the CPU busy by running one program at a time until it needs to wait for an I/O operation.
	

More complex one. It requires more sophisticated scheduling algorithms and resource management to handle multiple tasks, user inputs, and ensure a smooth experience.

Used in environments where resource utilization is more critical, such as batch processing, and where tasks are long-running.
	

Used in interactive environments where multiple applications need to be run concurrently, particularly in desktop and mobile operating systems.
Examples of Multiprogramming Operating Systems

Some examples of multiprogramming operating systems that have been widely used across different computing environments:

    IBM OS/360
    UNIX
    VMS (Virtual Memory System)
    Windows NT
    Linux
    macOS
    HP-UX

Conclusion

Multiprogramming offers a more efficient approach to increase system performance. In order to increase the resource utilisation,systems supporting multiprogramming approach allow more than one job (program) to utilize CPU time at any moment. More number of programs competing for system resources, better will be resource utilisation. Multiprogramming has a significant potential for improving system throughput and resource utilisation.
Multiprogramming in Operating System – FAQs
What is a multiprogramming system?


    In multiprogramming system, multiple programs are to be stored in memory and each program has to be given a specific portion of memory which is known as process. The operating system handles all these process and their states.

How does a multiprogramming operating system work?


    A multiprogramming operating system may run many programs on a single processor computer. If one program must wait for an input/output transfer in a multiprogramming operating system, the other programs are ready to use the CPU. As a result, various jobs may share CPU time.

What is the difference between multiprogramming and multitasking operating systems?


    While a multiprogramming operating system allows more than one program to run simultaneously using a single CPU, a multitasking operating system allows multiple processes or tasks to be executed at the same time utilizing multiple CPUs.

Multiprogramming Operating System

In this article, you will learn about the multiprogramming operating system, its working, advantages, and disadvantages.
What is the Multiprogramming Operating System?

A multiprogramming operating system may run many programs on a single processor computer. If one program must wait for an input/output transfer in a multiprogramming operating system, the other programs are ready to use the CPU. As a result, various jobs may share CPU time. However, the execution of their jobs is not defined to be at the same time period.

When a program is being performed, it is known as a "Task", "Process", and "Job". Concurrent program executions improve system resource consumption and throughput as compared to serial and batch processing systems.

The primary goal of multiprogramming is to manage the entire system's resources. The key components of a multiprogramming system are the file system, command processor, transient area, and I/O control system. As a result, multiprogramming operating systems are designed to store different programs based on sub-segmenting parts of the transient area. The resource management routines are linked with the operating system core functions.

Types of the Multiprogramming Operating System

There are mainly two types of multiprogramming operating systems. These are as follows:

    Multitasking Operating System
    Multiuser Operating System

Multitasking Operating System

A multitasking operating system enables the execution of two or more programs at the same time. The operating system accomplishes this by shifting each program into and out of memory one at a time. When a program is switched out of memory, it is temporarily saved on disk until it is required again.
Multiuser Operating System

A multiuser operating system allows many users to share processing time on a powerful central computer from different terminals. The operating system accomplishes this by rapidly switching between terminals, each of which receives a limited amount of processor time on the central computer. The operating system changes among terminals so quickly that each user seems to have continuous access to the central computer. If there are many users on a system like this, the time it takes the central computer to reply can become more obvious.
Working of the Multiprogramming Operating System

Multiple users can accomplish their jobs simultaneously in the multiprogramming system, and it can be stored in the main memory. When one program is engaged in I/O operations, the CPU may deliver time to various programs while sitting in idle mode.

When one application is waiting for an I/O transfer, another is ready to use the processor at all times, and numerous programs may share CPU time. All jobs are not run simultaneously, but there could be numerous jobs running on the processor at the same time, and parts of other processes being executed first, then another segment, etc. As a result, the overall goal of a multiprogramming system is to keep the CPU busy until some tasks are available in the job pool. Thus, the numerous programs can run on a single processor computer, and the CPU is never idle.
Examples of Multiprogramming Operating System

There are various examples of multiprogramming operating systems, including download apps, transfer data, MS-Excel, Google Chrome, Firefox browser, and many more apps. Other examples are Windows O/S, UNIX O/S, Microcomputers such as XENIX, MP/M, and ESQview.
Advantages and Disadvantages of Multiprogramming Operating System

There are various advantages and disadvantages of the multiprogramming operating system. Some of the advantages and disadvantages are as follows:
Advantages

There are various advantages of the multiprogramming operating system. Some of the advantages are as follows:

    It provides less response time.
    It may help to run various jobs in a single application simultaneously.
    It helps to optimize the total job throughput of the computer.
    Various users may use the multiprogramming system at once.
    Short-time jobs are done quickly in comparison to long-time jobs.
    It may help to improve turnaround time for short-time tasks.
    It helps in improving CPU utilization and never gets idle.
    The resources are utilized smartly.

Disadvantages

There are various disadvantages of the multiprogramming operating system. Some of the disadvantages are as follows:

    It is highly complicated and sophisticated.
    The CPU scheduling is required.
    Memory management is needed in the operating system because all types of tasks are stored in the main memory.
    The harder task is to handle all processes and tasks.
    If it has a large number of jobs, then long-term jobs will require a long wait.


   For a multiprogrammed operating system, the key architectural requirements include: effective memory management mechanisms (like paging or segmentation), robust interrupt handling, a capable scheduling algorithm, efficient I/O management, protection mechanisms to isolate processes, and a well-designed system call interface to allow user programs to access system resources; all working together to enable multiple processes to run concurrently while sharing system resources efficiently. 
Key components and features:

    Memory Management:
        Virtual Memory: Allows processes to access more memory than physically available by dividing memory into pages and managing them through page tables. 

Segmentation: Divides memory into logical segments for better organization and protection. 
Memory Allocation and Deallocation: Efficient algorithms to allocate and reclaim memory for different processes. 

Process Management:

    Process Control Block (PCB): Stores information about each running process (like CPU state, memory allocation, etc.). 

Context Switching: Mechanism to quickly switch between processes on the CPU. 
Scheduling Algorithms: Strategies like priority-based, round-robin, or multilevel queue scheduling to determine which process to run next. 

Interrupt Handling:

    Interrupt Vector Table: Maps interrupt sources to specific interrupt handlers. 

Interrupt Disabling/Enabling: Ability to temporarily disable interrupts during critical operations. 

I/O Management:

    Device Drivers: Software modules to interact with specific hardware devices. 

DMA (Direct Memory Access): Allows devices to transfer data directly to memory without CPU intervention. 
I/O Queues: Buffering mechanism to manage incoming and outgoing I/O requests. 

Protection Mechanisms:

    Memory Protection: Prevents processes from accessing memory outside their allocated space. 

Access Control: Determines which processes can access specific system resources. 

System Call Interface:

    Well-defined API: Provides a standard way for user programs to request operating system services. 

Important Considerations:

    Hardware Support:
    The underlying hardware architecture needs to support features like memory protection, interrupts, and efficient context switching. 

Concurrency Control:
Mechanisms to manage potential race conditions and ensure data integrity when multiple processes access shared resources. 
Performance Optimization:
Careful design to minimize overhead associated with context switching and resource management. 

6. Mode shifting in multiprogrammed Operating System.

    In a multiprogrammed operating system, the operating system (OS) uses a technique called context switching to shift between programs and CPU assignments. Context switching ensures that a program's state is preserved in memory so that it can be easily accessed when the OS switches to it. 
Context switching introduces overhead costs, so kernel designers try to reduce its impact on performance. One way to do this is to increase the quantum given to each process, which allows it to run longer before a context switch is forced. 
Here are some other things to know about multiprogramming operating systems:

    Multiprogramming
    Allows multiple programs to load into memory and run in rotation as CPU resources become available. 

Scheduling
Multiprogramming operating systems can be either preemptive or non-preemptive. Preemptive scheduling can interrupt processes to switch between them, while non-preemptive scheduling allows a process to run to completion or until it blocks. 
Advantages
Multiprogramming operating systems have many advantages, including maximizing processor utilization, completing jobs faster, and allowing multiple users to use the computer system.

7. System calls
     
     NAME         top

       syscalls - Linux system calls

SYNOPSIS         top

       Linux system calls.

DESCRIPTION         top

       The system call is the fundamental interface between an
       application and the Linux kernel.

   System calls and library wrapper functions
       System calls are generally not invoked directly, but rather via
       wrapper functions in glibc (or perhaps some other library).  For
       details of direct invocation of a system call, see intro(2).
       Often, but not always, the name of the wrapper function is the
       same as the name of the system call that it invokes.  For
       example, glibc contains a function chdir() which invokes the
       underlying "chdir" system call.

       Often the glibc wrapper function is quite thin, doing little work
       other than copying arguments to the right registers before
       invoking the system call, and then setting errno appropriately
       after the system call has returned.  (These are the same steps
       that are performed by syscall(2), which can be used to invoke
       system calls for which no wrapper function is provided.)  Note:
       system calls indicate a failure by returning a negative error
       number to the caller on architectures without a separate error
       register/flag, as noted in syscall(2); when this happens, the
       wrapper function negates the returned error number (to make it
       positive), copies it to errno, and returns -1 to the caller of
       the wrapper.

       Sometimes, however, the wrapper function does some extra work
       before invoking the system call.  For example, nowadays there are
       (for reasons described below) two related system calls,
       truncate(2) and truncate64(2), and the glibc truncate() wrapper
       function checks which of those system calls are provided by the
       kernel and determines which should be employed.

   System call list
       Below is a list of the Linux system calls.  In the list, the
       Kernel column indicates the kernel version for those system calls
       that were new in Linux 2.2, or have appeared since that kernel
       version.  Note the following points:

       •  Where no kernel version is indicated, the system call appeared
          in Linux 1.0 or earlier.

       •  Where a system call is marked "1.2" this means the system call
          probably appeared in a Linux 1.1.x kernel version, and first
          appeared in a stable kernel with 1.2.  (Development of the
          Linux 1.2 kernel was initiated from a branch of Linux 1.0.6
          via the Linux 1.1.x unstable kernel series.)

       •  Where a system call is marked "2.0" this means the system call
          probably appeared in a Linux 1.3.x kernel version, and first
          appeared in a stable kernel with Linux 2.0.  (Development of
          the Linux 2.0 kernel was initiated from a branch of Linux
          1.2.x, somewhere around Linux 1.2.10, via the Linux 1.3.x
          unstable kernel series.)

       •  Where a system call is marked "2.2" this means the system call
          probably appeared in a Linux 2.1.x kernel version, and first
          appeared in a stable kernel with Linux 2.2.0.  (Development of
          the Linux 2.2 kernel was initiated from a branch of Linux
          2.0.21 via the Linux 2.1.x unstable kernel series.)

       •  Where a system call is marked "2.4" this means the system call
          probably appeared in a Linux 2.3.x kernel version, and first
          appeared in a stable kernel with Linux 2.4.0.  (Development of
          the Linux 2.4 kernel was initiated from a branch of Linux
          2.2.8 via the Linux 2.3.x unstable kernel series.)

       •  Where a system call is marked "2.6" this means the system call
          probably appeared in a Linux 2.5.x kernel version, and first
          appeared in a stable kernel with Linux 2.6.0.  (Development of
          Linux 2.6 was initiated from a branch of Linux 2.4.15 via the
          Linux 2.5.x unstable kernel series.)

       •  Starting with Linux 2.6.0, the development model changed, and
          new system calls may appear in each Linux 2.6.x release.  In
          this case, the exact version number where the system call
          appeared is shown.  This convention continues with the Linux
          3.x kernel series, which followed on from Linux 2.6.39; and
          the Linux 4.x kernel series, which followed on from Linux
          3.19; and the Linux 5.x kernel series, which followed on from
          Linux 4.20; and the Linux 6.x kernel series, which followed on
          from Linux 5.19.

       •  In some cases, a system call was added to a stable kernel
          series after it branched from the previous stable kernel
          series, and then backported into the earlier stable kernel
          series.  For example some system calls that appeared in Linux
          2.6.x were also backported into a Linux 2.4.x release after
          Linux 2.4.15.  When this is so, the version where the system
          call appeared in both of the major kernel series is listed.

       The list of system calls that are available as at Linux 5.14 (or
       in a few cases only on older kernels) is as follows:

       System call                 Kernel        Notes
       ──────────────────────────────────────────────────────────────────────
       _llseek(2)                  1.2
       _newselect(2)               2.0
       _sysctl(2)                  2.0           Removed in 5.5
       accept(2)                   2.0           See notes on socketcall(2)
       accept4(2)                  2.6.28
       access(2)                   1.0
       acct(2)                     1.0
       add_key(2)                  2.6.10
       adjtimex(2)                 1.0
       alarm(2)                    1.0
       alloc_hugepages(2)          2.5.36        Removed in 2.5.44
       arc_gettls(2)               3.9           ARC only
       arc_settls(2)               3.9           ARC only
       arc_usr_cmpxchg(2)          4.9           ARC only
       arch_prctl(2)               2.6           x86_64, x86 since 4.12
       atomic_barrier(2)           2.6.34        m68k only
       atomic_cmpxchg_32(2)        2.6.34        m68k only
       bdflush(2)                  1.2           Deprecated (does nothing)
                                                 since 2.6
       bind(2)                     2.0           See notes on socketcall(2)
       bpf(2)                      3.18
       brk(2)                      1.0
       breakpoint(2)               2.2           ARM OABI only, defined with
                                                 __ARM_NR prefix
       cacheflush(2)               1.2           Not on x86
       capget(2)                   2.2
       capset(2)                   2.2
       chdir(2)                    1.0
       chmod(2)                    1.0
       chown(2)                    2.2           See chown(2) for version
                                                 details
       chown32(2)                  2.4
       chroot(2)                   1.0
       clock_adjtime(2)            2.6.39
       clock_getres(2)             2.6
       clock_gettime(2)            2.6
       clock_nanosleep(2)          2.6
       clock_settime(2)            2.6
       clone2(2)                   2.4           IA-64 only
       clone(2)                    1.0
       clone3(2)                   5.3
       close(2)                    1.0
       close_range(2)              5.9
       connect(2)                  2.0           See notes on socketcall(2)
       copy_file_range(2)          4.5
       creat(2)                    1.0
       create_module(2)            1.0           Removed in 2.6
       delete_module(2)            1.0
       dup(2)                      1.0
       dup2(2)                     1.0
       dup3(2)                     2.6.27
       epoll_create(2)             2.6
       epoll_create1(2)            2.6.27
       epoll_ctl(2)                2.6
       epoll_pwait(2)              2.6.19
       epoll_pwait2(2)             5.11
       epoll_wait(2)               2.6
       eventfd(2)                  2.6.22
       eventfd2(2)                 2.6.27
       execv(2)                    2.0           SPARC/SPARC64 only, for
                                                 compatibility with SunOS
       execve(2)                   1.0
       execveat(2)                 3.19
       exit(2)                     1.0
       exit_group(2)               2.6
       faccessat(2)                2.6.16
       faccessat2(2)               5.8
       fadvise64(2)                2.6
       fadvise64_64(2)             2.6
       fallocate(2)                2.6.23
       fanotify_init(2)            2.6.37
       fanotify_mark(2)            2.6.37
       fchdir(2)                   1.0
       fchmod(2)                   1.0
       fchmodat(2)                 2.6.16
       fchown(2)                   1.0
       fchown32(2)                 2.4
       fchownat(2)                 2.6.16
       fcntl(2)                    1.0
       fcntl64(2)                  2.4
       fdatasync(2)                2.0
       fgetxattr(2)                2.6; 2.4.18
       finit_module(2)             3.8
       flistxattr(2)               2.6; 2.4.18
       flock(2)                    2.0
       fork(2)                     1.0
       free_hugepages(2)           2.5.36        Removed in 2.5.44
       fremovexattr(2)             2.6; 2.4.18
       fsconfig(2)                 5.2
       fsetxattr(2)                2.6; 2.4.18
       fsmount(2)                  5.2
       fsopen(2)                   5.2
       fspick(2)                   5.2
       fstat(2)                    1.0
       fstat64(2)                  2.4
       fstatat64(2)                2.6.16
       fstatfs(2)                  1.0
       fstatfs64(2)                2.6
       fsync(2)                    1.0
       ftruncate(2)                1.0
       ftruncate64(2)              2.4
       futex(2)                    2.6
       futimesat(2)                2.6.16
       get_kernel_syms(2)          1.0           Removed in 2.6
       get_mempolicy(2)            2.6.6
       get_robust_list(2)          2.6.17
       get_thread_area(2)          2.6
       get_tls(2)                  4.15          ARM OABI only, has __ARM_NR
                                                 prefix
       getcpu(2)                   2.6.19
       getcwd(2)                   2.2
       getdents(2)                 2.0
       getdents64(2)               2.4
       getdomainname(2)            2.2           SPARC, SPARC64; available
                                                 as osf_getdomainname(2) on
                                                 Alpha since Linux 2.0
       getdtablesize(2)            2.0           SPARC (removed in 2.6.26),
                                                 available on Alpha as
                                                 osf_getdtablesize(2)
       getegid(2)                  1.0
       getegid32(2)                2.4
       geteuid(2)                  1.0
       geteuid32(2)                2.4
       getgid(2)                   1.0
       getgid32(2)                 2.4
       getgroups(2)                1.0
       getgroups32(2)              2.4
       gethostname(2)              2.0           Alpha, was available on
                                                 SPARC up to Linux 2.6.26
       getitimer(2)                1.0
       getpeername(2)              2.0           See notes on socketcall(2)
       getpagesize(2)              2.0           Alpha, SPARC/SPARC64 only
       getpgid(2)                  1.0
       getpgrp(2)                  1.0
       getpid(2)                   1.0
       getppid(2)                  1.0
       getpriority(2)              1.0
       getrandom(2)                3.17
       getresgid(2)                2.2
       getresgid32(2)              2.4
       getresuid(2)                2.2
       getresuid32(2)              2.4
       getrlimit(2)                1.0
       getrusage(2)                1.0
       getsid(2)                   2.0
       getsockname(2)              2.0           See notes on socketcall(2)
       getsockopt(2)               2.0           See notes on socketcall(2)
       gettid(2)                   2.4.11
       gettimeofday(2)             1.0
       getuid(2)                   1.0
       getuid32(2)                 2.4
       getunwind(2)                2.4.8         IA-64 only; deprecated
       getxattr(2)                 2.6; 2.4.18
       getxgid(2)                  2.0           Alpha only; see NOTES
       getxpid(2)                  2.0           Alpha only; see NOTES
       getxuid(2)                  2.0           Alpha only; see NOTES
       init_module(2)              1.0
       inotify_add_watch(2)        2.6.13
       inotify_init(2)             2.6.13
       inotify_init1(2)            2.6.27
       inotify_rm_watch(2)         2.6.13
       io_cancel(2)                2.6
       io_destroy(2)               2.6
       io_getevents(2)             2.6
       io_pgetevents(2)            4.18
       io_setup(2)                 2.6
       io_submit(2)                2.6
       io_uring_enter(2)           5.1
       io_uring_register(2)        5.1
       io_uring_setup(2)           5.1
       ioctl(2)                    1.0
       ioperm(2)                   1.0
       iopl(2)                     1.0
       ioprio_get(2)               2.6.13
       ioprio_set(2)               2.6.13
       ipc(2)                      1.0
       kcmp(2)                     3.5
       kern_features(2)            3.7           SPARC64 only
       kexec_file_load(2)          3.17
       kexec_load(2)               2.6.13
       keyctl(2)                   2.6.10
       kill(2)                     1.0
       landlock_add_rule(2)        5.13
       landlock_create_ruleset(2)  5.13
       landlock_restrict_self(2)   5.13
       lchown(2)                   1.0           See chown(2) for version
                                                 details
       lchown32(2)                 2.4
       lgetxattr(2)                2.6; 2.4.18
       link(2)                     1.0
       linkat(2)                   2.6.16
       listen(2)                   2.0           See notes on socketcall(2)
       listxattr(2)                2.6; 2.4.18
       llistxattr(2)               2.6; 2.4.18
       lookup_dcookie(2)           2.6
       lremovexattr(2)             2.6; 2.4.18
       lseek(2)                    1.0
       lsetxattr(2)                2.6; 2.4.18
       lstat(2)                    1.0
       lstat64(2)                  2.4
       madvise(2)                  2.4
       mbind(2)                    2.6.6
       memory_ordering(2)          2.2           SPARC64 only
       membarrier(2)               3.17
       memfd_create(2)             3.17
       memfd_secret(2)             5.14
       migrate_pages(2)            2.6.16
       mincore(2)                  2.4
       mkdir(2)                    1.0
       mkdirat(2)                  2.6.16
       mknod(2)                    1.0
       mknodat(2)                  2.6.16
       mlock(2)                    2.0
       mlock2(2)                   4.4
       mlockall(2)                 2.0
       mmap(2)                     1.0
       mmap2(2)                    2.4
       modify_ldt(2)               1.0
       mount(2)                    1.0
       move_mount(2)               5.2
       move_pages(2)               2.6.18
       mprotect(2)                 1.0
       mq_getsetattr(2)            2.6.6
       mq_notify(2)                2.6.6
       mq_open(2)                  2.6.6
       mq_timedreceive(2)          2.6.6
       mq_timedsend(2)             2.6.6
       mq_unlink(2)                2.6.6
       mremap(2)                   2.0
       msgctl(2)                   2.0           See notes on ipc(2)
       msgget(2)                   2.0           See notes on ipc(2)
       msgrcv(2)                   2.0           See notes on ipc(2)
       msgsnd(2)                   2.0           See notes on ipc(2)
       msync(2)                    2.0
       munlock(2)                  2.0
       munlockall(2)               2.0
       munmap(2)                   1.0
       name_to_handle_at(2)        2.6.39
       nanosleep(2)                2.0
       newfstatat(2)               2.6.16        See stat(2)
       nfsservctl(2)               2.2           Removed in 3.1
       nice(2)                     1.0
       old_adjtimex(2)             2.0           Alpha only; see NOTES
       old_getrlimit(2)            2.4           Old variant of getrlimit(2)
                                                 that used a different value
                                                 for RLIM_INFINITY
       oldfstat(2)                 1.0
       oldlstat(2)                 1.0
       oldolduname(2)              1.0
       oldstat(2)                  1.0
       oldumount(2)                2.4.116       Name of the old umount(2)
                                                 syscall on Alpha
       olduname(2)                 1.0
       open(2)                     1.0
       open_by_handle_at(2)        2.6.39
       open_tree(2)                5.2
       openat(2)                   2.6.16
       openat2(2)                  5.6
       or1k_atomic(2)              3.1           OpenRISC 1000 only
       pause(2)                    1.0
       pciconfig_iobase(2)         2.2.15; 2.4   Not on x86
       pciconfig_read(2)           2.0.26; 2.2   Not on x86
       pciconfig_write(2)          2.0.26; 2.2   Not on x86
       perf_event_open(2)          2.6.31        Was perf_counter_open() in
                                                 2.6.31; renamed in 2.6.32
       personality(2)              1.2
       perfctr(2)                  2.2           SPARC only; removed in
                                                 2.6.34
       perfmonctl(2)               2.4           IA-64 only; removed in 5.10
       pidfd_getfd(2)              5.6
       pidfd_send_signal(2)        5.1
       pidfd_open(2)               5.3
       pipe(2)                     1.0
       pipe2(2)                    2.6.27
       pivot_root(2)               2.4
       pkey_alloc(2)               4.8
       pkey_free(2)                4.8
       pkey_mprotect(2)            4.8
       poll(2)                     2.0.36; 2.2
       ppoll(2)                    2.6.16
       prctl(2)                    2.2
       pread64(2)                                Added as "pread" in 2.2;
                                                 renamed "pread64" in 2.6
       preadv(2)                   2.6.30
       preadv2(2)                  4.6
       prlimit64(2)                2.6.36
       process_madvise(2)          5.10
       process_vm_readv(2)         3.2
       process_vm_writev(2)        3.2
       pselect6(2)                 2.6.16
       ptrace(2)                   1.0
       pwrite64(2)                               Added as "pwrite" in 2.2;
                                                 renamed "pwrite64" in 2.6
       pwritev(2)                  2.6.30
       pwritev2(2)                 4.6
       query_module(2)             2.2           Removed in 2.6
       quotactl(2)                 1.0
       quotactl_fd(2)              5.14
       read(2)                     1.0
       readahead(2)                2.4.13
       readdir(2)                  1.0
       readlink(2)                 1.0
       readlinkat(2)               2.6.16
       readv(2)                    2.0
       reboot(2)                   1.0
       recv(2)                     2.0           See notes on socketcall(2)
       recvfrom(2)                 2.0           See notes on socketcall(2)
       recvmsg(2)                  2.0           See notes on socketcall(2)
       recvmmsg(2)                 2.6.33
       remap_file_pages(2)         2.6           Deprecated since 3.16
       removexattr(2)              2.6; 2.4.18
       rename(2)                   1.0
       renameat(2)                 2.6.16
       renameat2(2)                3.15
       request_key(2)              2.6.10
       restart_syscall(2)          2.6
       riscv_flush_icache(2)       4.15          RISC-V only
       rmdir(2)                    1.0
       rseq(2)                     4.18
       rt_sigaction(2)             2.2
       rt_sigpending(2)            2.2
       rt_sigprocmask(2)           2.2
       rt_sigqueueinfo(2)          2.2
       rt_sigreturn(2)             2.2
       rt_sigsuspend(2)            2.2
       rt_sigtimedwait(2)          2.2
       rt_tgsigqueueinfo(2)        2.6.31
       rtas(2)                     2.6.2         PowerPC/PowerPC64 only
       s390_runtime_instr(2)       3.7           s390 only
       s390_pci_mmio_read(2)       3.19          s390 only
       s390_pci_mmio_write(2)      3.19          s390 only
       s390_sthyi(2)               4.15          s390 only
       s390_guarded_storage(2)     4.12          s390 only
       sched_get_affinity(2)       2.6           Name of
                                                 sched_getaffinity(2) on
                                                 SPARC and SPARC64
       sched_get_priority_max(2)   2.0
       sched_get_priority_min(2)   2.0
       sched_getaffinity(2)        2.6
       sched_getattr(2)            3.14
       sched_getparam(2)           2.0
       sched_getscheduler(2)       2.0
       sched_rr_get_interval(2)    2.0
       sched_set_affinity(2)       2.6           Name of
                                                 sched_setaffinity(2) on
                                                 SPARC and SPARC64
       sched_setaffinity(2)        2.6
       sched_setattr(2)            3.14
       sched_setparam(2)           2.0
       sched_setscheduler(2)       2.0
       sched_yield(2)              2.0
       seccomp(2)                  3.17
       select(2)                   1.0
       semctl(2)                   2.0           See notes on ipc(2)
       semget(2)                   2.0           See notes on ipc(2)
       semop(2)                    2.0           See notes on ipc(2)
       semtimedop(2)               2.6; 2.4.22
       send(2)                     2.0           See notes on socketcall(2)
       sendfile(2)                 2.2
       sendfile64(2)               2.6; 2.4.19
       sendmmsg(2)                 3.0
       sendmsg(2)                  2.0           See notes on socketcall(2)
       sendto(2)                   2.0           See notes on socketcall(2)
       set_mempolicy(2)            2.6.6
       set_robust_list(2)          2.6.17
       set_thread_area(2)          2.6
       set_tid_address(2)          2.6
       set_tls(2)                  2.6.11        ARM OABI/EABI only
                                                 (constant has __ARM_NR
                                                 prefix)
       setdomainname(2)            1.0
       setfsgid(2)                 1.2
       setfsgid32(2)               2.4
       setfsuid(2)                 1.2
       setfsuid32(2)               2.4
       setgid(2)                   1.0
       setgid32(2)                 2.4
       setgroups(2)                1.0
       setgroups32(2)              2.4
       sethae(2)                   2.0           Alpha only; see NOTES
       sethostname(2)              1.0
       setitimer(2)                1.0
       setns(2)                    3.0
       setpgid(2)                  1.0
       setpgrp(2)                  2.0           Alternative name for
                                                 setpgid(2) on Alpha
       setpriority(2)              1.0
       setregid(2)                 1.0
       setregid32(2)               2.4
       setresgid(2)                2.2
       setresgid32(2)              2.4
       setresuid(2)                2.2
       setresuid32(2)              2.4
       setreuid(2)                 1.0
       setreuid32(2)               2.4
       setrlimit(2)                1.0
       setsid(2)                   1.0
       setsockopt(2)               2.0           See notes on socketcall(2)
       settimeofday(2)             1.0
       setuid(2)                   1.0
       setuid32(2)                 2.4
       setup(2)                    1.0           Removed in 2.2
       setxattr(2)                 2.6; 2.4.18
       sgetmask(2)                 1.0
       shmat(2)                    2.0           See notes on ipc(2)
       shmctl(2)                   2.0           See notes on ipc(2)
       shmdt(2)                    2.0           See notes on ipc(2)
       shmget(2)                   2.0           See notes on ipc(2)
       shutdown(2)                 2.0           See notes on socketcall(2)
       sigaction(2)                1.0
       sigaltstack(2)              2.2
       signal(2)                   1.0
       signalfd(2)                 2.6.22
       signalfd4(2)                2.6.27
       sigpending(2)               1.0
       sigprocmask(2)              1.0
       sigreturn(2)                1.0
       sigsuspend(2)               1.0
       socket(2)                   2.0           See notes on socketcall(2)
       socketcall(2)               1.0
       socketpair(2)               2.0           See notes on socketcall(2)
       spill(2)                    2.6.13        Xtensa only
       splice(2)                   2.6.17
       spu_create(2)               2.6.16        PowerPC/PowerPC64 only
       spu_run(2)                  2.6.16        PowerPC/PowerPC64 only
       ssetmask(2)                 1.0
       stat(2)                     1.0
       stat64(2)                   2.4
       statfs(2)                   1.0
       statfs64(2)                 2.6
       statx(2)                    4.11
       stime(2)                    1.0
       subpage_prot(2)             2.6.25        PowerPC/PowerPC64 only
       swapcontext(2)              2.6.3         PowerPC/PowerPC64 only
       switch_endian(2)            4.1           PowerPC64 only
       swapoff(2)                  1.0
       swapon(2)                   1.0
       symlink(2)                  1.0
       symlinkat(2)                2.6.16
       sync(2)                     1.0
       sync_file_range(2)          2.6.17
       sync_file_range2(2)         2.6.22
       syncfs(2)                   2.6.39
       sys_debug_setcontext(2)     2.6.11        PowerPC only
       syscall(2)                  1.0           Still available on ARM OABI
                                                 and MIPS O32 ABI
       sysfs(2)                    1.2
       sysinfo(2)                  1.0
       syslog(2)                   1.0
       sysmips(2)                  2.6.0         MIPS only
       tee(2)                      2.6.17
       tgkill(2)                   2.6
       time(2)                     1.0
       timer_create(2)             2.6
       timer_delete(2)             2.6
       timer_getoverrun(2)         2.6
       timer_gettime(2)            2.6
       timer_settime(2)            2.6
       timerfd_create(2)           2.6.25
       timerfd_gettime(2)          2.6.25
       timerfd_settime(2)          2.6.25
       times(2)                    1.0
       tkill(2)                    2.6; 2.4.22
       truncate(2)                 1.0
       truncate64(2)               2.4
       ugetrlimit(2)               2.4
       umask(2)                    1.0
       umount(2)                   1.0
       umount2(2)                  2.2
       uname(2)                    1.0
       unlink(2)                   1.0
       unlinkat(2)                 2.6.16
       unshare(2)                  2.6.16
       uselib(2)                   1.0
       ustat(2)                    1.0
       userfaultfd(2)              4.3
       usr26(2)                    2.4.8.1       ARM OABI only
       usr32(2)                    2.4.8.1       ARM OABI only
       utime(2)                    1.0
       utimensat(2)                2.6.22
       utimes(2)                   2.2
       utrap_install(2)            2.2           SPARC64 only
       vfork(2)                    2.2
       vhangup(2)                  1.0
       vm86old(2)                  1.0           Was "vm86"; renamed in
                                                 2.0.28/2.2
       vm86(2)                     2.0.28; 2.2
       vmsplice(2)                 2.6.17
       wait4(2)                    1.0
       waitid(2)                   2.6.10
       waitpid(2)                  1.0
       write(2)                    1.0
       writev(2)                   2.0
       xtensa(2)                   2.6.13        Xtensa only

       On many platforms, including x86-32, socket calls are all
       multiplexed (via glibc wrapper functions) through socketcall(2)
       and similarly System V IPC calls are multiplexed through ipc(2).

       Although slots are reserved for them in the system call table,
       the following system calls are not implemented in the standard
       kernel: afs_syscall(2), break(2), ftime(2), getpmsg(2), gtty(2),
       idle(2), lock(2), madvise1(2), mpx(2), phys(2), prof(2),
       profil(2), putpmsg(2), security(2), stty(2), tuxcall(2),
       ulimit(2), and vserver(2) (see also unimplemented(2)).  However,
       ftime(3), profil(3), and ulimit(3) exist as library routines.
       The slot for phys(2) is in use since Linux 2.1.116 for umount(2);
       phys(2) will never be implemented.  The getpmsg(2) and putpmsg(2)
       calls are for kernels patched to support STREAMS, and may never
       be in the standard kernel.

       There was briefly set_zone_reclaim(2), added in Linux 2.6.13, and
       removed in Linux 2.6.16; this system call was never available to
       user space.

   System calls on removed ports
       Some system calls only ever existed on Linux architectures that
       have since been removed from the kernel:

       AVR32 (port removed in Linux 4.12)
              •  pread(2)
              •  pwrite(2)

       Blackfin (port removed in Linux 4.17)
              •  bfin_spinlock(2) (added in Linux 2.6.22)
              •  dma_memcpy(2) (added in Linux 2.6.22)
              •  pread(2) (added in Linux 2.6.22)
              •  pwrite(2) (added in Linux 2.6.22)
              •  sram_alloc(2) (added in Linux 2.6.22)
              •  sram_free(2) (added in Linux 2.6.22)

       Metag (port removed in Linux 4.17)
              •  metag_get_tls(2) (add in Linux 3.9)
              •  metag_set_fpu_flags(2) (add in Linux 3.9)
              •  metag_set_tls(2) (add in Linux 3.9)
              •  metag_setglobalbit(2) (add in Linux 3.9)

       Tile (port removed in Linux 4.17)
              •  cmpxchg_badaddr(2) (added in Linux 2.6.36)

NOTES         top

       Roughly speaking, the code belonging to the system call with
       number __NR_xxx defined in /usr/include/asm/unistd.h can be found
       in the Linux kernel source in the routine sys_xxx().  There are
       many exceptions, however, mostly because older system calls were
       superseded by newer ones, and this has been treated somewhat
       unsystematically.  On platforms with proprietary operating-system
       emulation, such as sparc, sparc64, and alpha, there are many
       additional system calls; mips64 also contains a full set of
       32-bit system calls.

       Over time, changes to the interfaces of some system calls have
       been necessary.  One reason for such changes was the need to
       increase the size of structures or scalar values passed to the
       system call.  Because of these changes, certain architectures
       (notably, longstanding 32-bit architectures such as i386) now
       have various groups of related system calls (e.g., truncate(2)
       and truncate64(2)) which perform similar tasks, but which vary in
       details such as the size of their arguments.  (As noted earlier,
       applications are generally unaware of this: the glibc wrapper
       functions do some work to ensure that the right system call is
       invoked, and that ABI compatibility is preserved for old
       binaries.)  Examples of system calls that exist in multiple
       versions are the following:

       •  By now there are three different versions of stat(2):
          sys_stat() (slot __NR_oldstat), sys_newstat() (slot
          __NR_stat), and sys_stat64() (slot __NR_stat64), with the last
          being the most current.  A similar story applies for lstat(2)
          and fstat(2).

       •  Similarly, the defines __NR_oldolduname, __NR_olduname, and
          __NR_uname refer to the routines sys_olduname(), sys_uname(),
          and sys_newuname().

       •  In Linux 2.0, a new version of vm86(2) appeared, with the old
          and the new kernel routines being named sys_vm86old() and
          sys_vm86().

       •  In Linux 2.4, a new version of getrlimit(2) appeared, with the
          old and the new kernel routines being named
          sys_old_getrlimit() (slot __NR_getrlimit) and sys_getrlimit()
          (slot __NR_ugetrlimit).

       •  Linux 2.4 increased the size of user and group IDs from 16 to
          32 bits.  To support this change, a range of system calls were
          added (e.g., chown32(2), getuid32(2), getgroups32(2),
          setresuid32(2)), superseding earlier calls of the same name
          without the "32" suffix.

       •  Linux 2.4 added support for applications on 32-bit
          architectures to access large files (i.e., files for which the
          sizes and file offsets can't be represented in 32 bits.)  To
          support this change, replacements were required for system
          calls that deal with file offsets and sizes.  Thus the
          following system calls were added: fcntl64(2), getdents64(2),
          stat64(2), statfs64(2), truncate64(2), and their analogs that
          work with file descriptors or symbolic links.  These system
          calls supersede the older system calls which, except in the
          case of the "stat" calls, have the same name without the "64"
          suffix.

          On newer platforms that only have 64-bit file access and
          32-bit UIDs/GIDs (e.g., alpha, ia64, s390x, x86-64), there is
          just a single version of the UID/GID and file access system
          calls.  On platforms (typically, 32-bit platforms) where the
          *64 and *32 calls exist, the other versions are obsolete.

       •  The rt_sig* calls were added in Linux 2.2 to support the
          addition of real-time signals (see signal(7)).  These system
          calls supersede the older system calls of the same name
          without the "rt_" prefix.

       •  The select(2) and mmap(2) system calls use five or more
          arguments, which caused problems in the way argument passing
          on the i386 used to be set up.  Thus, while other
          architectures have sys_select() and sys_mmap() corresponding
          to __NR_select and __NR_mmap, on i386 one finds old_select()
          and old_mmap() (routines that use a pointer to an argument
          block) instead.  These days passing five arguments is not a
          problem any more, and there is a __NR__newselect that
          corresponds directly to sys_select() and similarly __NR_mmap2.
          s390x is the only 64-bit architecture that has old_mmap().

   Architecture-specific details: Alpha
       getxgid(2)
              returns a pair of GID and effective GID via registers r0
              and r20; it is provided instead of getgid(2) and
              getegid(2).

       getxpid(2)
              returns a pair of PID and parent PID via registers r0 and
              r20; it is provided instead of getpid(2) and getppid(2).

       old_adjtimex(2)
              is a variant of adjtimex(2) that uses struct timeval32,
              for compatibility with OSF/1.

       getxuid(2)
              returns a pair of GID and effective GID via registers r0
              and r20; it is provided instead of getuid(2) and
              geteuid(2).

       sethae(2)
              is used for configuring the Host Address Extension
              register on low-cost Alphas in order to access address
              space beyond first 27 bits.


8. Fork System calls
      

      In an operating system, New processes are created using the fork() system call. It returns a process ID and does not accept any parameters. A new process (child process) is created by the fork system call that runs concurrently with the parent process.
What is a Fork System Call in OS?

A new process known as a "child process" is created with the fork system call which runs concurrently with the process called the parent process. fork system call in OS returns an integer value and requires no arguments. After the creation of a new child process, both processes then execute the next command following the fork system call. Therefore, we must separate the parent from the child by checking the returned value of the fork():

    Negative: A child process could not be successfully created if the fork() returns a negative value.
    Zero: A new child process is successfully created if the fork() returns a zero.
    Positive: The positive value is the process ID of a child's process to the parent. The process ID is the type of pid_t that is defined in sys/types.h.

However, the parent and child processes are stored in different memory locations. These memory spaces contain the same information, therefore any operations carried out by one process do not affect the other.

A child process uses the same open files, CPU registers, and the same pc(program counter) used in the parent process.
What is the Use of Fork System Call?

The use of the fork() system call is to create a new process by duplicating the calling process. The fork() system call is made by the parent process, and if it is successful, a child process is created.

Use of Fork System Call

The fork() system call does not accept any parameters. It simply creates a child process and returns the process ID. If a fork() call is successful :

    The OS will create two identical copies of the address space for parent and child processes. Therefore, the address spaces of the parent and child processes are different.
    A global variable is:
        Created when the process starts
        Declared outside the process
        Lost when the program stops
    A local variable is:
        Created as the process starts
        Declared inside the process
        Lost when the process ends
    The new child process's process ID, or PID, is returned to the parent process. If something goes wrong, the parent process returns -1.
    Zero is returned to the new child process. (In the case of failure, the child process is not created).

Syntax for fork() System Call

In Linux and Ubuntu, the fork() system call has the following syntax:

pid_t fork(void);

In the syntax, fork() does not take any arguments, and its returned type is pid_t. Whenever a child process is successfully created, its PID (Process ID) is returned to the parent process, and the 0 value is returned to the child process itself.

-1 is returned to the parent process in the case of any errors, and no child process is created.
Examples For fork() System Call

Let’s take a few examples for a better understanding of the fork() system call:
Example 1: Calling fork()

Take a look at the example below, where the fork() system call is used to create a new child process:

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

//main function begins
int main()
{
    fork();
    print("the process is created using fork() system call\n");
    return 0;
}
// Using fork() system call single time

Output:

the process is created using fork() system call
the process is created using fork() system call

Explanation :

    In this program, We've used the fork() function, which will create a new child process.
    Once the child process has been created, The child process and the parent process will both point to the next command.
    In this manner, the remaining commands will be executed 2n2n times, where n represents the number of fork() system calls.

Consider the following scenario, where fork() is called multiple times:

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

//main function begins
int main()
{
    fork();
    fork();
    fork();
    printf("this process is created by fork() system call");
    return 0;
}
// fork() is used 3 times:

Output :

// Since the commands will be executed 2n times
// 2^3^ = 8
this process is created by fork() system call
this process is created by fork() system call
this process is created by fork() system call
this process is created by fork() system call
this process is created by fork() system call
this process is created by fork() system call
this process is created by fork() system call
this process is created by fork() system call

Example 2: Testing if fork() was Successful

In the example below, we have checked the integer value returned by fork() using the decision-making construct.

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
 
void child() {
  printf("Child process is created by fork() system call");
}
 
void parent() {
  printf("parent process is created by fork() system call");
}

//main function begins
int main(void) {
  pid_t p = fork();
 
  if(p == 0) {
    child();
    exit(EXIT_SUCCESS);
  }
  else if(p > 0) {
    wait(NULL);
    parent();
  }
  else {
    printf("fork() system call is unable to create child process.");
  }
 
  return EXIT_SUCCESS;
}

Output :

Child process is created by fork() system call
parent process is created by fork() system call

Explanation :

    p is the variable of type pid_t which stores the integer value returned by fork().
    When fork() is called and a child is successfully created, the variable p becomes 0.
    while p holds any positive value which is for the parent process as the parent process will get the child process's id returned.

Example 3: Multiple Child Processes Using fork() and Loop :

In the example below, We used a for loop to create 4 child processes. The PID and PPID from the child processes were also printed.

// You can also use loop to create as many child processes as you need
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
 
//main function begins
int main(void) {
  for(int i = 1; i <= 4; i++) {
    pid_t pid = fork();
 
    if(pid == 0) {
      printf("Child process => PPID=%d, PID=%d\n", getppid(), getpid());
      exit(0);
    }
    else  {
      printf("Parent process => PID=%d\n", getpid());
      printf("Waiting for child processes to finish...\n");
      wait(NULL);
      printf("the child process is finished.\n");
    }
  }
 
  return EXIT_SUCCESS;
}
// fork() is used 4 times in a for loop

Output :

// we can see, all of the child processes have the same 
// parent process ID but have the different child processes
Parent process => PID=554
Waiting for child processes to finish...
Child process => PPID=554, PID=558
The child process is finished.

Parent process => PID=554
Waiting for child processes to finish...
Child process => PPID=554, PID=559
The child process is finished.

Parent process => PID=554
Waiting for child processes to finish...
Child process => PPID=554, PID=560
The child process is finished.

Parent process => PID=554
Waiting for child processes to finish...
Child process => PPID=554, PID=561
The child process is finished.

Explanation :

    Since they all belong to the same parent as we can see, all of the child processes have the same Parent process ID in the output.

Example 4: Real-Life Example

We've created a 4-digit PIN code in the following example and sent the generated code to the parent process from a child process.

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
 
int getPIN() {
  srand(getpid() + getppid());
  int secret = 1000 + rand() % 9000;
  return secret;
}
 
//main function begins
int main(void) {
  int fd[2];
  pipe(fd);
  pid_t pid = fork();
 
  if(pid > 0) {
    close(0);
    close(fd[1]);
    dup(fd[0]);
 
    int secretNumber;
    size_t readBytes = read(fd[0], &secretNumber, sizeof(secretNumber));
 
    printf("Waiting for PIN to be created...\n");
    wait(NULL);
    printf("Bytes read: %ld\n", readBytes);
    printf("PIN: %d\n", secretNumber);
  }
  else if(pid == 0) {
    close(1);
    close(fd[0]);
    dup(fd[1]);
 
    int secret = getPIN();
    write(fd[1], &secret, sizeof(secret));
    exit(EXIT_SUCCESS);
  }
 
  return EXIT_SUCCESS;
}

Output :

// You can see that every time we run the application 
// ,we receive a unique 4-digit PIN code.
Waiting for the PIN to be created...
Bytes read: 4
PIN: 1421
    
...Program finished with exit code 0
Press ENTER to exit console.
  
    
Waiting for PIN to be created...
Bytes read: 4
PIN: 7065

...Program finished with exit code 0
Press ENTER to exit console.

    
Waiting for PIN to be created...
Bytes read: 4
PIN: 9898

...Program finished with exit code 0
Press ENTER to exit console.

Explanation :

    Instead of doing mathematical computations like md5, sha256, etc. within the main program's process, the hash can simply be calculated on a child process and returned to the main process.
    In a child process, a 4-digit PIN code was created and sent to the parent process, the main application.
    Then, we can print the pin from the main process, as a result, we can see that every time we run the application, we receive a unique 4-digit PIN code.

FAQs

Q. What do you mean by system call?

A. System calls are unique functions that manage OS operations in kernel mode.

Q. What is kernel mode?

A. Kernel mode is an operating mode for central processing units (CPU).

Q. Which header file defines the "fork()" function?

A. In the header file "unistd.h", fork() is defined.

Q. Which process will execute the statement

A. following the fork() call—the parent or the child? Both the parent and the child processes are run at the same time, and either of them could get control first from the OS.

Q. What does the fork() function's negative value denote?

A. It denotes that the creation of the child process was unsuccessful.

Q. What are the differences between the exec() and fork() functions?

A.
fork()	exec()
The fork() creates a new process that is an identical copy of the original process.	The exec() creates a new process in place of the original process.
Both the parent and the child processes are run at the same time.	Unless there is an error, control never goes back to the original process.
Parent and child processes are in different address spaces.	parent address space is replaced by the child address space.
Conclusion

    A new process known as a “child process” is created with the fork system call which runs concurrently with the process called the parent process.
    The parent process and the child process must be separated by checking the returned value of the fork().
    A child process uses the same CPU registers, the same open files, and the same pc(program counter) used in the parent process.
    In the syntax, fork() does not take any arguments, and its returned type is pid_t.
    The commands will be executed 2n times, which is the total number of processes, where n represents the number of fork() system calls.
    In real-life, we can create some unique codes with the fork() system call as every child process will give a unique value.



9. Problems solving
    
    To STUDY
          



</div>

