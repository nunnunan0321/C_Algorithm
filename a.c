#include<stdio.h>
int main(){
int N;
int C;
scanf("%d %d",&N,&C);

int NN[2]={N,N};

for(int i=0;i<C;i++){
    int x,y;    //세로 X, 가로 Y
    scanf("%d %d",&x,&y);

//가로로 자른게 더 클 때
    if(x*NN[1]>y*NN[0]){
        NN[0]=x;
    }
    //세로로 자른게 더 클 때
    else if(x*NN[1]<y*NN[0]){
        NN[1]=y;
    }
    //같을 떄 가로로 자른다
    else{
        NN[0]=x;
    }

}
printf("%d",NN[0]*NN[1]);



    return 0;
}
