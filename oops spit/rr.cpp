#include<iostream>
using namespace std;
class nick
{
public:
int d=0,front,rear,size,queue[30],num, readyarr[15], ele,ipinfo[5][7],s[20],timeslice;
public:

void enqueue(int num)
{
// cout<<"enqueue operation is selected\n";
// if(rear==size-1)
// {
// cout<<"queue exausted...."<<rear<<"......"<<size-1<<".....\n";
// }
// else
// {
++rear;
// cout<<"queue rear...."<<rear<<"..........\n";
queue[rear]=num;
// cout<<"the number "<<num<<"is inserted into the queue\n";
// }
}

int dequeue()
{
// cout<<"you have selected dequeue operation\n";
if(front>rear)
{
// cout<<"no element present in the stack\n";
return -1;
}
else
{
ele=queue[front];
front=front+1;
readyarr[d]=ele;  
d+=1;
// cout<<"you have removed "<<ele<<" front the queue....";
return ele;
}
}


void acceptip()
{
front=0;
rear=-1;
cout<<"Enter number of processes\n";
cin>>size;
cout<<"Enter time slice\n";
cin>>timeslice;
// cout<<"Enter arrival time and burst time for "<<size<<" processes:\n";

for(int i=0;i<size;i++)
{    
cout<<"Enter arrival time and burst time for "<<i<<" processes:\n";
    for(int j=1;j<3;j++){
          ipinfo[i][0]=i;
          cin>>ipinfo[i][j];
          ipinfo[i][3]=ipinfo[i][2];  //initially remaining (RT) is same as burst time
          ipinfo[i][4]=-1; //initially all WT set to -1
          ipinfo[i][6]=-1; //initially all CT set to -1
    }
}
cout<<"Pno. | AT  |  BT  |  RT \n";
for(int i=0;i<size;i++)
{
    for(int j=0;j<4;j++){
        cout<<ipinfo[i][j]<<"   |   ";
    }
    cout<<"\n";
}
init();
}

void init(){
    // for filling the ready queue with all elements having arrival time=0 

    for(int i=0;i<size;i++){
        if(ipinfo[i][1]==0){
            enqueue(ipinfo[i][0]);
            // cout<<"init mei"<<ipinfo[i][0]<<"\n";
        }
    }
    // dis();
    schedule();
}

void schedule()
{
    int z=0;
    // cout<<"hola\n";
    int i=dequeue();
    while(i!=-1){
        // waiting time for a process will be the z value at which that process is 1st scheduled.
        if(ipinfo[i][4]==-1){
            ipinfo[i][4]=z;
        }
        if(ipinfo[i][3]<timeslice){      // for condition: BT < Timeslice
            for(int j=0;j<ipinfo[i][3];j++){
                s[z]=ipinfo[i][0];
                //cout<<"ipinfo[i][0] isss"<<ipinfo[i][0]<<"\n";
                // cout<<"s[j] isss"<<s[z]<<"\n";
                z+=1;   
            ipinfo[i][6]=z;   //CT time for a process will be the z value at which that process ka remaining time is 0
            }        
            // cout<<"burst time completed \n"  ;
            ipinfo[i][3]=0;  
        }
        else{
              for(int j=0;j<timeslice;j++){
                s[z]=ipinfo[i][0];
                //cout<<"i  isss  "<<i<<"\n";
                // cout<<"s[j] isss!!"<<s[z]<<"\n";
                z+=1;     
       }
                ipinfo[i][3]=ipinfo[i][3]-timeslice;  // to decrease the remaining time of a process when that process is scheduled.
                if(ipinfo[i][3]==0){
                    ipinfo[i][6]=z;  //checking if RT==0 that means the z value is the CT now..
                }
                else{
                    for(int o=0;o<size;o++){              //for fillig ready queue with ozero arrival times
                        if(ipinfo[o][1]<=z && ipinfo[o][1]>0 && ipinfo[o][3]!=0 && o!=i){  //fill the element in the ready queue only if the arrival time
                                                                                    //<=z i.e till the curret time ad greater then 0(since we already did that earlier)
                                                                                    //and if 0!=i..since we are doig that niche...after this for loop... 
                            enqueue(ipinfo[o][0]);
                            // cout<<"yesss\n";
                        }
                    }
                        if(ipinfo[i][3]!=0)   
                           enqueue(ipinfo[i][0]);  //checking if RT!=0 that means the element is to be added to the ready queue again.
                }
            // cout<<"burst time conti..\n";       
        }
        // dis();
        i=dequeue();  //to remove the element from the start once its scheduling is done.
    // dis();
    }
    cout<<"\nProcess queue is: ";
    for(int h=0;h<z;h++){
        cout<<s[h]<<" ";
    }
    cout<<"\n\n";
 cout<<"Pno. | AT  |   BT   |   RT  |  WT   |  TAT  |  CT  |\n";
for(int i=0;i<size;i++)
{
    ipinfo[i][5]=ipinfo[i][6]-ipinfo[i][1];  //calculation for TAT
    ipinfo[i][4]=ipinfo[i][5]-ipinfo[i][2];  //calculation for WT
    for(int j=0;j<7;j++){
        cout<<ipinfo[i][j]<<"   |   ";
    }
    cout<<"\n";
}

int avgWT=0, avgTAT=0;
for(int i=0;i<size;i++){
    avgWT=ipinfo[i][4]+avgWT;
    avgTAT=ipinfo[i][5]+avgTAT;
}

cout<<"\nAverage Waiting Time is: "<<avgWT/float(size)<<"\n";
cout<<"\nAverage Turn Around Time is: "<<avgTAT/float(size)<<"\n";
cout<<"\nReady Array is: ";

for(int i=0;i<d;i++){
    cout<<readyarr[i]<<"  ";
}
 cout<<"\n\n";
}
};
int main()
{
nick o;
o.acceptip();
}