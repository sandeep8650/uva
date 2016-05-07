/*******************************************
 * @author: Sandeep Singh      
 * @date: Thu 07/Apr/2016 09:41:09 PM IST      
 *                        
 *******************************************
 */
#include<cstdio>
#include<cstring>
#include<cstdlib>

int main(){
	int t,f[25][25],x0,y0,x[5],p,min,minc,nz,cost,c;
	int a1,a2,a3,a4,a5,b1,b2,b3,b4,b5;
	scanf("%d\n",&t);
	while(t--){
		memset(f,0,sizeof(f));
		min=1000000000;
		scanf("%d\n",&nz);
		for(int i=0;i<nz;i++){
			scanf("%d %d %d\n",&x0,&y0,&p);
			f[x0][y0]=p;
		}
													  //combination of all five offices
		for(x[0]=0;x[0]<21;x[0]++)                    // first [0,20]
			for(x[1]=x[0]+1;x[1]<22;x[1]++)			  // second [1,21]
				for(x[2]=x[1]+1;x[2]<23;x[2]++)       // third [2,22]
					for(x[3]=x[2]+1;x[3]<24;x[3]++)   // fourth [3,23]
						for(x[4]=x[3]+1;x[4]<25;x[4]++){//five [4,24]
							cost=0;
							for(int i=0;i<5;i++)
							for(int j=0;j<5;j++){
								minc=1000000000;
								//if((f[i][j]>0)&&(i*5+j!=x[0]) && (i*5+j!=x[1]) && (i*5+j!=x[2]) && (i*5+j!=x[3]) && (i*5+j!=x[4])){
								 if(f[i][j]>0){	//prune all cell with population 0
									for(int l=0;l<5;l++){ //calculating minimum dist
														  //of dist of cell from all offices
										c=f[i][j]*(abs(x[l]/5-i)+abs(x[l]%5-j));
										if(minc>c){
											minc=c;
										}
									}
									cost+=minc;
								}
								//printf("%d %d %d %d %d cost=%d || %d %d c=%d\n",x[0],x[1],x[2],x[3],x[4],cost,i,j,c);
							}
							if(cost<min){
								min=cost;
								a1=x[0];//b1=y1;
								a2=x[1];//b2=y2;
								a3=x[2];//b3=y3;
								a4=x[3];//b4=y4;
								a5=x[4];//b5=y5;
							}
							//printf("%d %d %d %d %d cost=%d min=%d\n",x[0],x[1],x[2],x[3],x[4],cost,min);
						}
		printf("%d %d %d %d %d\n",a1,a2,a3,a4,a5);
						
	}
}
