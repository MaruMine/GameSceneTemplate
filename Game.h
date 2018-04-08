#pragma once
#include"Scene.h"

#define MAX_nObject 20

class SceneManager;

class Game : public Scene {
	SceneManager *owner_;
public:
	Game(SceneManager *scmgr);
	Game();
	~Game();
	void Draw();
	void Update();
};