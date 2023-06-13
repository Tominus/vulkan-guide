#include <vk_engine.h>
#include <crtdbg.h>

int main(int argc, char* argv[])
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	VulkanEngine engine;

	engine.init();
	
	engine.run();

	engine.cleanup();

	return 0;
}