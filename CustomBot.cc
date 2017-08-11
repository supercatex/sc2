#include <sc2api\sc2_api.h>
#include <iostream>

using namespace sc2;

//自訂義Bot
class CustomBot : public Agent {
public:
	//-------------------------------------------
	//遊戲載入完成事件
	virtual void OnGameFullStart() final {}
	//遊戲開始事件
	virtual void OnGameStart() final {}
	//遊戲進程持續觸發事件
	virtual void OnStep() final {}
	//遊戲結束事件
	virtual void OnGameEnd() final {}
	//報錯事件
	virtual void OnError(
		const std::vector<ClientError>& client_errors,
		const std::vector<std::string>& protocol_errors = {}) final {}

	//-------------------------------------------
	//單位閒置事件
	virtual void OnUnitIdle(const Unit& unit) final {}
	//單位創建事件
	virtual void OnUnitCreated(const Unit& unit) final {}
	//單位死亡事件
	virtual void OnUnitDestroyed(const Unit& unit) final {}
	//升級完成事件
	virtual void OnUpgradeCompleted(UpgradeID upgrade) final {}
	//建築完成事件
	virtual void OnBuildingConstructionComplete(const Unit& unit) final {}

	//-------------------------------------------
	//敵方進入偵測範圍事件
	virtual void OnUnitEnterVision() final {}
	//???
	virtual void OnNydusDetected() final {}
	//???
	virtual void OnNuclearLaunchDetected() final {}

private:
	//自訂義功能
};