#include"Game.h"
#include"DxLib.h"
/*--------------*/
/*Private Method*/
/*--------------*/


/*-------------*/
/*Public Method*/
/*-------------*/

Game::Game() {
}

Game::Game(SceneManager *scmgr) : owner_(scmgr) {
}

Game::~Game() {
}

void Game::Draw() {
	DrawString(0, 0, "���̓Q�[�����", 0xffffff);
}

void Game::Update() {

}