#include "EASTL/array.h"
#include "imgui/imgui.h"

int main(int ac, char **av)
{
	eastl::array<int, 8> toto;
	toto.fill(12);
	return 0;
}