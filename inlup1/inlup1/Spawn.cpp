#include "Spawn.h"


namespace spel {
	void Spawn::create(std::vector <Sprite*> *sp, std::string path)
	{

		Enemy *e = Enemy::getInstance(path, winRen.getRen());
		sp->push_back(e);
		
	}
	void Spawn::update(std::vector<Sprite*> *sp)
	{
		int moveX = 0;
		int moveY = 0;
		moveX--;
		for (Sprite *s : *sp) { // använd denna lista för att flytta ner fiender
			if (Enemy* e = dynamic_cast<Enemy*>(s)) {
				e->setRekt(moveX, moveY);
			}
		}
		
		del(sp);
	}
	void Spawn::del(std::vector<Sprite*> *sp)
	{

		sp->erase(std::remove_if(sp->begin(), sp->end(),
			[]( Sprite* s) { return s->getRekt().x < 0; }), sp->end());

		//std::vector<Sprite*> del;
		//for (Sprite *e : *sp) {
		//	if (e->getRekt().x < 300) {
		//		sp->erase(e)
		//		del.push_back(e);
		//	}
		//}
		//for (unsigned int d = 0; d < del.size(); ++d) {
		//	for (unsigned int c = 0; c < sp->size(); ++c) {
		//		if (sp[c]->getRekt().x < 300) {
		//			sp->erase(sp->begin() + c);
		//		}
		//		if (del[d] == sp[c]) {
		//			sp->erase(sp->begin() + c);
		//		}
		//	}
		//}
	}
	Spawn::Spawn()
	{
	}


	Spawn::~Spawn()
	{
	}
}