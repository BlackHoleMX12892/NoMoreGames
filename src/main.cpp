#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MainMenu, MenuLayer) {
	bool init() {
		if (!MenuLayer::init())
			return false;

		auto moregamesmenu = this->getChildByID("more-games-menu");
		auto moregamesbutton = moregamesmenu->getChildByID("more-games-button");

		moregamesmenu->removeChild(moregamesbutton);
		moregamesmenu->updateLayout();

		return true;
	}
};
