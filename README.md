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




5. Architectural Requirements for multiprogrammed Operating System.
6. Mode shifting in multiprogrammed Operating System.
7. System calls
8. Fork System calls
9. Problems solving
</div>

