#include "ColorBlock.h"



ColorBlock::ColorBlock(TimeInterval t)
	: Block(t, type::Particle), _colorBegin(1.f), _colorEnd(1.f)
{
}


ColorBlock::~ColorBlock()
{
}

void ColorBlock::applyParticle(float emittTime, Particle &part, GPUParticle &gpuPart)
{
	float tRel = _time.toRelativeNor(emittTime);
	gpuPart._color *= glm::mix(_colorBegin, _colorEnd, tRel);
}