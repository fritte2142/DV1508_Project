#pragma once
#include "../Block.h"
#include "glm/vec3.hpp"

class Data;

enum interpolationType{
	linear = 0,
	linearDecrease = 1,
	exponential = 2,
	exponentialInv = 3
};

class ColorBlock :
	public Block
{
public:

	/* Parameters
	*/
	glm::vec4 _colorBegin, _colorEnd;
	interpolationType interpolation;
	

	ColorBlock(TimeInterval t, Data &data);
	virtual ~ColorBlock();

	virtual void applyParticle(float emittTime, Particle &part, GPUParticle &gpuPart);

	virtual void DrawProperties(ImVec2 pos, ImVec2 size);

private:

};

