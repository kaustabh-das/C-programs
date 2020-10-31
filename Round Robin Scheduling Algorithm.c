/* Round Robin Scheduling Algorithm

1. The queue structure in ready queue is of First In First Out (FIFO) type.

2. A fixed time is allotted to every process that arrives in the queue. This fixed time is known as time
slice or time quantum.

3. The first process that arrives is selected
and sent to the processor for execution. If it is not able to
complete its execution within the time quantum provided, then an interrupt is generated using an
automated timer.

4. The process is then stopped and is sent back at the end of the queue. Howe
ver, the state is saved and
context is thereby stored in memory. This helps the process to resume from the point where it was
interrupted.

5. The scheduler selects another process from the ready queue and dispatches it to the processor for its
execution. It is executed until the time Quantum does not exceed.

6. The same steps are repeated until all the process are finished.

The round robin algorithm is simple and the overhead in decision making is very low. It is the best scheduling algorithm for achieving 
better and evenly distributed response time. */

#include<stdio.h>
void main()
 {
    int count,j,n,time,remain,flag=0,time_quantum;
    int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10];
    printf("Entprintf("Enter Total Process:\t ");
    scanf("%d",&n);
    remain=n;
    
    for(count=0;count<n;count++)for(count=0;count<n;count++)
    {
      printf("Enter Arrival Time and Burst Time for Process Process Number %d :",count+1);
      scanf("%d",&at[count]);
      scanf("%d",&bt[count]);
      rt[count]=bt[count];
    }
    
    printf("Enter Time Quantum:t");
    scanf("%d",&time_quantum);
    prprintf("intf("\n\nProcessnProcess\\t|Turnaround Time|Waiting Timet|Turnaround Time|Waiting Time\\nn\\n");
    
    for(time=0,count=0;remain!=0)
    {
      if(rt[count]<=time_quantum && rt[count]>0)
      {
        time+=rt[count];
        rt[count]=0;
        flag=1;
      }
      
      else if(rt[count]>0)else if(rt[count]>0)
      {
        rt[count]rt[count]--=time_quantum;
        time+=time_quantum;
      }
      
      if(rt[count]==0 && flag==1)if(rt[count]==0 && flag==1)
      {
      remain--;
      printf("P[%d] t| t%d t| t%d n",count+1,time at[count],time at[count] bt[count]);
      wait_time+=time-at[count]at[count]-bt[count];
      turnaround_time+=time-at[count];
      flag=0;
      }
      if(count==nif(count==n-1)1)
        count=0;
      else if(at[count+1]<=time)
        count++;
      else
        count=0;
    }
    printf("\nAverage Waiting Time= %f\n",wait_time*1.0/n);
    printf("Average Turn around Time = %f",turnaround_time*1.0/n);
}
