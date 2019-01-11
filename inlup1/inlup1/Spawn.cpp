#include "Spawn.h"

namespace spel {
	void Spawn::create(std::vector <Sprite*> *sp, std::string path)
	{
		Enemy *e = Enemy::getInstance(path, winRen.getRen());
		sp->push_back(e);	
	}
	void Spawn::update(std::vector<Sprite*> *sp, int x)
	{
		int moveX = x;
		int moveY = 0;
		for (Sprite *s : *sp) { // använd denna lista för att flytta ner fiender
			if (Enemy* e = dynamic_cast<Enemy*>(s)) {
				e->setRekt(moveX, moveY);
			}
		}
		del(sp);
	}
	bool Spawn::collision(std::vector<Sprite*> *sp, Player * p)
	{
		int leftP, leftE,
			rightP, rightE,
			topP, topE,
			bottomP, bottomE;

		leftP = p->getRekt().x;
		rightP = p->getRekt().x + p->getRekt().w;
		topP = p->getRekt().y;
		bottomP = p->getRekt().y + p->getRekt().h;
		
		for (int c = 0; c < sp->size(); c++) {
			leftE = (*sp)[c]->getRekt().x;
			rightE = (*sp)[c]->getRekt().x + (*sp)[c]->getRekt().w;
			topE = (*sp)[c]->getRekt().y;
			bottomE = (*sp)[c]->getRekt().y + (*sp)[c]->getRekt().h;

			if (bottomP <= topE) {
				std::cout << "false" << std::endl;
				return false;		
			}
			if (topP >= bottomE) {
				std::cout << "false" << std::endl;
				return false;
			}
			if (rightP <= leftE) {
				std::cout << "false" << std::endl;
				return false;
			}
			if (leftP >= rightE) {
				std::cout << "false" << std::endl;
				return false;

			}
			sp->erase(sp->begin() + c);
			std::cout << "true" << std::endl;
			return true;
		}
	}
	void Spawn::del(std::vector<Sprite*> *sp)
	{	
		sp->erase(std::remove_if(sp->begin(), sp->end(),
			[]( Sprite* s) { return s->getRekt().x < 0; }), sp->end());
	}
	Spawn::Spawn()
	{
	}

	Spawn::~Spawn()
	{
	}
}