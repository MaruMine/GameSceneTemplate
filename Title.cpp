#include"Title.h"
#include"SceneManager.h"
Title::Title() {

}

Title::Title(SceneManager *scmgr) : owner_(scmgr) {

}




/*----------------*/
/*•`‰æŠÖ˜A‚Ìˆ—  */
/*----------------*/

void Title::Draw() {

}


/*---------------*/
/*XV           */
/*               */
void Title::Update() {
	if (CheckHitKey(KEY_INPUT_RETURN)) {
		owner_->changeScene(new Game(owner_));
	}
}