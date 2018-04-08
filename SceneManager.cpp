#include"SceneManager.h"


/*-------------*/
/*Public Method*/
/*-------------*/

SceneManager::SceneManager() {
	scene = new Title(this);
}

SceneManager::~SceneManager() {
	delete scene;
}

void SceneManager::changeScene(Scene *nextScene) {
	delete scene;
	scene = nextScene;
}

void SceneManager::Draw() {
	scene->Draw();
}

void SceneManager::Update() {
	scene->Update();
}

void SceneManager::Finalize() {
	delete scene;
}