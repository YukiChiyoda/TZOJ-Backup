#include <stdio.h>
#include <string.h>
#define inf 1000000
bool hash[7000000];bool hash2[7000000];
int ten[]={0,100000,10000,1000,100,10,1};
int code,final;
int stackStep,stackStep2;

int state[4000000];
int state2[4000000];

int BfsDual(int step)
{
	int tpCode;
	int tpPos,hashnum;
	int iter=-1,top=-1;
	int iter2=-1,top2=-1;
	int i,j;
	top++;
	state[top]=code;
	hash[code]=true;
	for(i=0; i<=5; i++)
	{
		top2++;
		state2[top2]=final;
		hash2[final]=1;
		final+=inf;
	} 
	stackStep=0;
	stackStep2=5;
	while(1)
	{
		step++;
		while(iter!=stackStep)
		{
			iter++;
			tpCode=state[iter];
			tpPos=tpCode/inf;
			i=(tpCode/ten[tpPos])%10;
			if(tpPos!=1)
			{
				j=(tpCode/ten[1])%10;
				hashnum=tpCode+(j-i)*(ten[tpPos]-ten[1]);
				if(!hash[hashnum])
				{ 
					if(hash2[hashnum])
					{
						return step;
					}
					hash[hashnum]=1;
					top++;
					state[top]=hashnum;
				}
			}
			if(tpPos!=6)
			{
				j=(tpCode%10);
				hashnum=tpCode+(j-i)*(ten[tpPos]-1);
				if(!hash[hashnum])
				{
					if(hash2[hashnum])
					{
						return step;
					}
					hash[hashnum]=1;
					top++;
					state[top]=hashnum;
				}
				if(tpPos==1||i==(final/ten[tpPos])%10)
				{
					hashnum=tpCode+inf;
					if(!hash[hashnum])
					{
						if(hash2[hashnum])
						{
							return step;
						}
						hash[hashnum]=1;
						top++;
						state[top]=hashnum;
					}
				}
			}
			if(i!=9)
			{
				hashnum=tpCode+ten[tpPos];
				if(!hash[hashnum])
				{
					if(hash2[hashnum])
					{
						return step;
					}
					hash[hashnum]=1;
					top++;
					state[top]=hashnum;
				}
			}
			if(i!=0)
			{
				hashnum=tpCode-ten[tpPos];
				if(!hash[hashnum])
				{
					if(hash2[hashnum])
					{
						return step;
					}
					hash[hashnum]=1;
					top++;
					state[top]=hashnum;
				}          
			}     
		}
		stackStep=top;
		step++;
		while(iter2!=stackStep2)
		{
			iter2++;
			tpCode=state2[iter2];
			tpPos=tpCode/inf;
			i=(tpCode/ten[tpPos])%10;
			if(tpPos!=1)
			{
				j=(tpCode/ten[1])%10;
				hashnum=tpCode+(j-i)*(ten[tpPos]-100000);
				if(!hash2[hashnum])	
				{
					if(hash[hashnum])
					{
						return step;
					}
					hash2[hashnum]=1;
					top2++;
					state2[top2]=hashnum;
				}
				if(tpPos==6||i==(code/ten[tpPos])%10)
				{
					hashnum=tpCode-inf;
					if(!hash2[hashnum])
					{
						if(hash[hashnum])
						{
							return step;
						}
						hash2[hashnum]=1;
						top2++;
						state2[top2]=hashnum;
					}                 
				}            
			}
			if(tpPos!=6)
			{
				j=(tpCode%10);
				hashnum=tpCode+(j-i)*(ten[tpPos]-1);
				if(!hash2[hashnum])
				{
					if(hash[hashnum])
					{
						return step;
					}
					hash2[hashnum]=1;
					top2++;
					state2[top2]=hashnum;
				}              
			}
			if(i!=9)
			{
				hashnum=tpCode+ten[tpPos];
				if(!hash2[hashnum])
				{
					if(hash[hashnum])
					{
						return step;
					}
					hash2[hashnum]=1;
					top2++;
					state2[top2]=hashnum;
				}         
			}
			if(i!=0)
			{
				hashnum=tpCode-ten[tpPos];
				if(!hash2[hashnum])
				{
					if(hash[hashnum])
					{
						return step;
					} 
					hash2[hashnum]=1;
					top2++;
					state2[top2]=hashnum;
				}           
			}     
		}
		stackStep2=top2;
      }
} 
	
int main() 
{
//	freopen("D:\\data1.in","r",stdin);
//	freopen("D:\\data1.out","w",stdout);
	while(scanf("%d %d",&code,&final)!=EOF)
	{
		code+=inf;
		final+=inf;
		if(code==final)
			printf("0\n");
		else
			printf("%d\n",BfsDual(0));
	}
	return 0;
}