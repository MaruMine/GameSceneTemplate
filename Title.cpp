#include"Title.h"
#include"SceneManager.h"
Title::Title() {

}

Title::Title(SceneManager *scmgr) : owner_(scmgr) {

}




/*----------------*/
/*描画関連の処理  */
/*----------------*/

void Title::Draw() {

}


/*---------------*/
/*更新           */
/*               */
void Title::Update() {
	if (CheckHitKey(KEY_INPUT_RETURN)) {
		owner_->changeScene(new Game(owner_));
	}
}