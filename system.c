//System informations

#include<sys/utsname.h>
#include<sys/sysinfo.h>
#include<sys/vfs.h>
#include<stdio.h>
int main()
{
	struct utsname u1;


	int a=uname(&u1);
	if(a==0)
	{
		printf("%s\n",u1.sysname);
		printf("%s\n",u1.machine);
		printf("%s\n",u1.release);
		printf("%s\n",u1.version);
		

	}
	struct sysinfo s;
	int x=sysinfo(&s);
	if(x==0)
	{

		printf("TotalRAM %ld\n",s.totalram/(1024*1024));
		printf("FreeRAM %ld\n",s.freeram/(1024*1024));
		printf("UsedRAM %ld\n",(s.totalram/(1024*1024))-(s.freeram/(1024*1024)));
		printf("TotaSwap %ld\n",s.totalswap/(1024*1024));
		printf("FreeSwap %ld\n",s.freeswap/(1024*1024));
		printf("Virtual Memory %ld\n",(s.totalswap/(1024*1024))-(s.freeswap/(1024*1024)));
		printf("Uptime %ld\n",s.uptime);

	}
	struct statfs k;
	int z=statfs("./",&k);
	if(z==0)
	{
		printf("Total Disk size %ld\n",(k.f_blocks*k.f_bsize)/(1024*1024*1024));
		
	}
	return 0;
}
