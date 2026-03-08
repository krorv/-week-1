#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//1층 남학생 2층 여학생
int findRoom(int persons[5]){//배정할 호실 찾기
int num;
srand(time(NULL));
while(1){
    num = rand()%5;
    if(persons[num]<2){
        persons[num]++;
        return num+1;
    }
}
}
void printReport(char mn[10][20],int mr[10],int mc, char wn[10][20],int wr[10],int wc){
printf("===========================================\n");
printf("생활관 호실 배정결과는 다음과 같습니다\n");
printf("===========================================\n");
printf("남학생 명단(%d명)",mc);
for(int i=0; i<mc; i++){
    printf("%d. %s [%d호]\n", i + 1, mn[i], 100 + mr[i]);
}
printf("\n여학생 명단 (%d명)\n", wc);
    for (int i = 0; i < wc; i++) {
        printf("%d. %s [%d호]\n", i + 1, wn[i], 200 + wr[i]);
    }
}

int main() {
    printf("===========================================\n");
    printf("생활관 호실 배정 프로그램\n");
    printf("===========================================\n");
    char mn[10][20],wn[10][20];//이름
    int mr[10],wr[10];//배정된 호실번호 배열
    int mcount[5]={0}, wcount[5]={0};//방 당 학생 수
    int mc =0;//전체 남학생 수
    int wc = 0;//전체 여학생 수
    int num;//scanf로 받을 메뉴 번호
    while(1){
    printf("메뉴: 1.남학생 등록 2.여학생 등록 0.종료> ");
    scanf("%d",&num);
    if(num==0)
    break;

    if(num==1){
        if(mc>=10){
            printf("인원수가 초과하여 호실을 등록할 수 없습니다.");
            continue;
        }
        printf("학생 이름은?>");
        scanf("%s",mn[mc]);
        mr[mc]=findRoom(mcount);
        printf("%s학생 %d호실 배정되었습니다\n", mn[mc],mr[(mc)]+100);
        mc++;
    }if(num==2){
        if(wc>=10) {
            printf("인원수가 초과하여 호실을 등록할 수 없습니다.");
            continue;
        }   
        printf("학생 이름은?>");
        scanf("%s",wn[wc]);
        wr[wc]=findRoom(wcount);
        printf("%s학생 %d호실 배정되었습니다\n",wn[wc],wr[(wc)]+200);
        wc++;
    }
    }
    printReport(mn,mr,mc,wn,wr,wc);
    printf("호실별 배정 명단\n");
    for(int i=0;i<5; i++){
        printf("%d호:",101+i);
        for(int j=0; j<mc;j++){
            if(mr[j]==i+1)
            printf("%s ", mn[j]);
        }
        printf("\n");
    }
    for(int i=0;i<5; i++){
        printf("%d호:",201+i);
        for(int j=0; j<wc;j++){
            if(wr[j]==i+1)
            printf("%s ", wn[j]);
        }
        printf("\n");
    }
      

}