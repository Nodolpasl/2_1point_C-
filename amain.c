// 项目制作： 
// 制作三个小游戏分别为五子棋、 21点
// 21点一般用到1-8副牌。
// 大家手中扑克点数的计算是：2至9牌，按其原点数计算；K、Q、J和10牌都算作10点（一般记作T，即ten之意）；A 牌（ace）既可算作1点也可算作11点，
// 由玩家自己决定（当玩家停牌时，点数一律视为最大而尽量不爆，如A+9为20，A+4+8为13，A+3+A视为15）。
// 以下规则（软17）和流程视赌场不同而略有区别，请务必了解清楚！
// 开局时，庄家（dealer）给每个玩家（又称闲家）牌面向上发两张牌（明牌），再给庄家自己发两张牌，一张明牌，一张暗牌（牌面朝下）。
// 当所有的初始牌分发完毕后，如果玩家拿到的是A和T（无论顺序），就拥有黑杰克（Black Jack）；若庄家的明牌为T，且暗牌为A，应直接翻开并拥有
// Black Jack；
// 如果庄家的明牌为A，则玩家可以考虑买不买保险（Insurance），保险金额是赌注的一半且不退。此时，如果庄家的暗牌为10点牌（构成Black Jack），
// 那么翻开此牌，购买保险的玩家得到1倍赌注；如果庄家没有Black Jack则保持暗牌，玩家继续游戏。若玩家为Black Jack且庄家为其他，玩家赢得1.5倍
// （或2倍，1赔2时）赌注；若庄家为Black Jack且玩家为其他，庄家赢得赌注；若庄家和玩家均为Black Jack，平局，玩家拿回自己的赌注。
// 接下来是正常的拿牌流程：首名非黑杰克玩家选择拿牌（Hit）、停牌（Stand）、加倍（Double）、分牌（Split，两牌相同时）或投降
// （Surrender，庄家赢得一半赌注）；若选择拿牌，则后续只能选择拿牌或停牌。在发牌的过程中，如果玩家的牌点数的和超过21，玩家就输了——叫爆掉（Bust）
// ，庄家赢得赌注（无论庄家之后的点数是多少）。假如玩家没爆掉，又决定不再要牌了（停牌，或因加倍、投降而终止），则轮到下一名非黑杰克玩家选择。
// 当所有玩家停止拿牌后，庄家翻开暗牌，并持续拿牌直至点数不小于17（若有A，按最大而尽量不爆计算）。假如庄家爆掉了，那他就输了，玩家赢得1倍赌注；
// 否则那么比点数大小，大为赢。点数相同为平局，玩家拿回自己的赌注。
#include<stdio.h>
#include<stdlib.h>
#define card_deal_er 2
#define free 2
#define else_dealer_times 1.5
#define number_of_card 52
int people;
int Insurance;
int paizu[4][13]={15};
int bat_money;
int A_choice[2]={0,1};
int BOOL_Black_Jack[2] = {0,1};
int Hit();
int Stand();
int fapai();
int Dou_ble();
int Split();
int Surrender();
int Bust();
int shunxu();
int xipai();
int people_sum();
int main()
{   
    scanf("%d",&people);
    int judge = people_num_enter();
    if(judge == -1)
        {int o = people_num_enter();
            if(o == -1)
            {printf("不要开玩笑！请输入正确数值，否则我将关闭程序！！！！");
            int j = people_num_enter();
            if(j == -1)
            return -1;
        }}       
    shunxu();

}
int people_num_enter()
{
    printf("请输入人数(2~6人)以开始21点 GAME：\n");
    if(people<=2&&people>=6)
    {
        printf("请输入一个正确人数!!\n");
        return -1
    }
    return 0;
}
int shunxu()
{
    fapai();
    Hit();
    
}
int xipai()
{
    
}
int fapai()
{
    for(int n = 0;n<number_of_card;n++)
    {
        switch(people)
        case 2:
        
    }
}
int Hit()
{

}
int Stand()
{

}
int Dou_ble()
{
    
}
int Split()
{

}
int Surrender()
{

}
int Bust()
{

}