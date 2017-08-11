#include <sc2api\sc2_api.h>
#include <iostream>

using namespace sc2;

//自訂義Bot
class CustomBot : public Agent {};

//主程序
int main(int argc, char* argv[]) {

    //遊戲協調員
    Coordinator coordinator;
    coordinator.LoadSettings(argc, argv);

    //true: 正常速度, false: 超快進程
    coordinator.SetRealtime(true);
    //遊戲視窗起始位置
    coordinator.SetWindowLocation(450, 200);

    //自訂義Bot
    CustomBot bot;
    //設置參與玩家
    coordinator.SetParticipants({
        //Terran: 人族, Zerg: 蟲族, Protoss: 神族, Random: 隨機
        CreateParticipant(Race::Terran, &bot),
        CreateComputer(Race::Random, Difficulty::HardVeryHard)
    });

    //啟動遊戲主程序
    coordinator.LaunchStarcraft();
    //設置地圖並開始遊戲
    coordinator.StartGame(sc2::kMapBelShirVestigeLE);

    //遊戲迴圈
    while (coordinator.Update()) {}

    return 0;
}
